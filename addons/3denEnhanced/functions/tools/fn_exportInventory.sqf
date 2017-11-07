/*
	Author: Revo

	Description:
	Copies loadout of selected infantry units to the clipboard in a config format, which be used for CfgRespawnInventory

	Parameter(s):
	-
	Returns:
	true/false
*/

private _clipboardContent = "";
private _units = get3DENSelected "object";

if (count _units == 0) exitWith {false};

{
	if (_x isKindOf "Man") then
	{
		private _loadout = [_x,"config"] call BIS_fnc_exportInventory;
		_clipboardContent  = _clipboardContent + endl + _loadout;
	};
	false;
} count _units;

copyToClipboard _clipboardContent;

["Enh_DataCopied"] call BIS_fnc_3DENNotification;

true