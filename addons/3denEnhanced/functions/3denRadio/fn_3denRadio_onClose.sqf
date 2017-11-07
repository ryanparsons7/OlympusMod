/*
	Author: Revo

	Description:
	Saves the playlist, settings and closes the radio menu.

	Parameter(s):
	-
	Returns:
	true
*/

call Enh_fnc_3denRadio_updatePlaylist;

profileNamespace setVariable ["Enh_3denRadio_MusicVolume",musicVolume];

(findDisplay 60000) closeDisplay 1;

["ShowPanelLeft",true] call BIS_fnc_3DENInterface;
["ShowPanelRight",true] call BIS_fnc_3DENInterface;

true