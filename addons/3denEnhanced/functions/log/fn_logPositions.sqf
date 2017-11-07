/*
	Author: Revo

	Description:
	Logs position of all selected entities and copies them to the clipboard. Array is shuffled.

	Parameter(s):
	-
	Returns:
	true/false
*/

private _objects  = get3DENSelected "Object";
private _markers  = get3DENSelected "Marker";
private _triggers = get3DENSelected "Trigger";
private _logics   = get3DENSelected "Logic";
private _posArray = [];
private _export = "";

private _entities = _objects + _triggers + _logics + _markers;

if (count _entities == 0) exitWith {false};

{
	_posArray pushBack ((_x get3DENAttribute "Position") select 0);
} forEach _entities;

_posArray = _posArray call BIS_fnc_arrayShuffle;

{
	_export = _export + str (_posArray select _forEachIndex);
	if ((count _posArray) - 1 == _forEachIndex) then
	{
		_export;
	}
	else
	{
		if ((count _posArray) > 1) then {_export = _export + "," + endl};
	};
} forEach _posArray;

copyToClipboard format ["%1",_export];

["Enh_DataCopied"] call BIS_fnc_3DENNotification;

true