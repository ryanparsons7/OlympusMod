/*
	Author: Revo

	Description:
	Copies the playlist to the clipboard.

	Parameter(s):
	-
	Returns:
	true
*/

private _action = param [0,"EXPORT",[""]];

switch (toUpper _action) do
{
	case "EXPORT":
	{
		call Enh_fnc_3denRadio_updatePlaylist;
		copyToClipboard str (profileNamespace getVariable ["Enh_3denRadio_Playlist",[]]);
		["Enh_DataCopied"] call BIS_fnc_3DENNotification;
	};
	case "IMPORT":
	{
		private _savedPlaylist = call compile copyFromClipboard;

		if (isNil "_savedPlaylist") exitWith {false};
		if !(_savedPlaylist isEqualTypeParams [["",""]]) exitWith {false};

		call Enh_fnc_3denRadio_reloadPlaylist;
	};
};