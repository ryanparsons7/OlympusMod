/*
   Author: Revo

   Description:
   Retrieves module's description and displays it formatted via systemChat.

   Parameter(s):
   -
   Returns:
   true
*/

private _logicType = typeOf ((get3DENSelected "Logic") select 0);

private _fnc_getValue =
{
	private _cfgEntry = param [0,"",[""]];
	(configFile >> "CfgVehicles" >> _logicType >> "ModuleDescription" >> _cfgEntry) call BIS_fnc_getCfgData;
};

private _description = "description" call _fnc_getValue;
private _direction = "direction" call _fnc_getValue;
private _duplicate = "duplicate" call _fnc_getValue;
private _position = "position" call _fnc_getValue;
private _sync = "sync" call _fnc_getValue;

private _direction = if (_direction > 0) then
{
	"directionEnabled" call _fnc_getValue;
}
else
{
	"directionDisabled" call _fnc_getValue;
};

private _duplicate = if (_duplicate > 0) then
{
	"duplicateEnabled" call _fnc_getValue;
}
else
{
	"duplicateDisabled" call _fnc_getValue;
};

private _position = if (_position > 0) then
{
	"positionEnabled" call _fnc_getValue;
}
else
{
	"positionDisabled" call _fnc_getValue;
};

systemChat ("Description: " + _description);
systemChat ("Direction: " + _direction);
systemChat ("Duplicate: " + _duplicate);
systemChat ("Position: " + _position);
systemChat ("Sync: " + str _sync);

true