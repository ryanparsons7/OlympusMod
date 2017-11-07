/*
	Author: Revo

	Description:
	Initialises the 3den Radio GUI.

	Parameter(s):
	-
	Returns:
	true
*/

disableSerialization;

private _display = findDisplay 60000;

private _ctrlVol = _display displayCtrl 1900;
private _ctrlCurSong = _display displayCtrl 2200;
private _ctrlSongList = _display displayCtrl 1500;
private _ctrlToggleRadio = _display displayCtrl 2300;

//Hide 3den panels
["ShowPanelLeft",false] call BIS_fnc_3DENInterface;
["ShowPanelRight",false] call BIS_fnc_3DENInterface;

private _musicVolume = profileNamespace getVariable ["Enh_3denRadio_MusicVolume",0.25];

//Close display when ESC is pressed
_display displayAddEventHandler
[
	"keyDown",
	{
		if ((_this select 1) isEqualTo 1) then
		{
			(_this select 0)closeDisplay 0
		}
	}
];

//Set up slider
_ctrlVol sliderSetRange [0,1.5];
_ctrlVol sliderSetPosition _musicVolume;
_ctrlVol sliderSetSpeed [0.1,0.1];

//Update current song
private _currentSong = profileNamespace getVariable ["Enh_3denRadio_CurrentSong",""];
_ctrlCurSong ctrlSetText _currentSong;

//Update enable radio button
if (profileNamespace getVariable ["Enh_3denRadio_Enabled",false] isEqualTo false) then
{
	_ctrlToggleRadio ctrlSetText localize "STR_ENH_3denRadio_enableRadio_text";
}
else
{
	_ctrlToggleRadio ctrlSetText localize "STR_ENH_3denRadio_disableRadio_text";
};

//Fill playlist listbox
call Enh_fnc_3denRadio_reloadPlaylist;

//Fill music listbox
private _cfgMusic_1 = "!(getText (_x >> 'name') isEqualTo '')" configClasses (configFile >> "CfgMusic");
//Some tracks have to be added manually
private _cfgMusic_2 = "(configName _x in ['Fallout','Wasteland','SkyNet','MAD','Defcon'])" configClasses (configFile >> "CfgMusic");

private _cfgMusic = _cfgMusic_1 + _cfgMusic_2;

lbClear _ctrlSongList;
_ctrlSongList lnbAddColumn 0.6;
_ctrlSongList lnbAddColumn 0.7;
_ctrlSongList lnbAddColumn 0.9;

private _nameShort = "";

{
	private _name = getText (_x >> "name");
	private _configName = configName _x;
	private _duration = parseNumber ((getNumber (_x >> "duration")) toFixed 0);
	private _musicClass = getText (_x >> "musicClass");
	private _logo = if (configsourcemod _x == '') then {['']} else {modParams [configsourcemod  _x,['logoSmall']]};
	private _logo = _logo select 0;

	private _theme = getText (configFile >> "CfgMusicClasses" >> _musicClass >> "displayName");

	if (_name isEqualTo "") then {_name = _configName};
	if (_theme isEqualTo "") then {_theme = ""};

	if (count _name > 70) then {_nameShort = ((_name select [0,70]) + "...")} else {_nameShort = _name};

	_ctrlSongList lnbAddRow [_nameShort,str _duration,_theme];
	_ctrlSongList lnbSetData [[_forEachIndex,0],_configName];
	_ctrlSongList lnbSetValue [[_forEachIndex,1],_duration];
	_ctrlSongList lnbSetPicture [[_forEachIndex,3],_logo];
	_ctrlSongList lnbSetData [[_forEachIndex,3],_logo];
} forEach _cfgMusic;

"NAME" call Enh_fnc_3denRadio_sortby;

true