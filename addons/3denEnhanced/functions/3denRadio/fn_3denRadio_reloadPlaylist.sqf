/*
	Author: Revo

	Description:
	Reloads the playlist from the profilenamespace.

	Parameter(s):
	-
	Returns:
	true
*/

disableSerialization;
private _ctrlPlayList = (findDisplay 60000) displayCtrl 2000;

lbClear _ctrlPlayList;

private _playlist = profileNamespace getVariable "Enh_3denRadio_Playlist";

{
	private _index = _ctrlPlayList lbAdd (_x select 0);
	_ctrlPlayList lbSetData [_index,_x select 1];
} forEach _playlist;

lbSort _ctrlPlayList;