/*
	Author: Revo

	Description:
	Saves content of the playlist into the profileNamespace.

	Parameter(s):
	-
	Returns:
	true
*/

disableSerialization;
private _ctrlPlaylist = (findDisplay 60000) displayCtrl 2000;

private _content = [];

for "_index" from 0 to (lbSize _ctrlPlaylist - 1) do
{
	private _songName = _ctrlPlaylist lbText _index;
	private _class = _ctrlPlaylist lbData _index;
	_content pushBack [_songName,_class];
};

lbSort _ctrlPlaylist;

profileNamespace setVariable ["Enh_3denRadio_Playlist",_content];

true