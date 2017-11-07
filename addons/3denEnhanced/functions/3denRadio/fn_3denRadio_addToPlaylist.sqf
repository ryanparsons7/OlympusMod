/*
	Author: Revo

	Description:
	Used to move a song from the song list into the custom playlist.

	Parameter(s):
	-
	Returns:
	true/false
*/
disableSerialization;
private _ctrlPlayList = (findDisplay 60000) displayCtrl 2000;

private _ctrl = param [0,controlNull,[controlNull]];
private _key = param [1,57,[1]];

if (_key isEqualTo 57) then
{
	private _songName = _ctrl lnbText [(lbCurSel _ctrl),0];
	private _class = _ctrl lnbData [(lbCurSel _ctrl),0];

	private _newIndex = _ctrlPlayList lbAdd _songName;
	_ctrlPlayList lbSetData [_newIndex,_class];

	call Enh_fnc_3denRadio_updatePlaylist;
};

true


