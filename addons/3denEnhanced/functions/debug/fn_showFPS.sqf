/*
	Author: Revo

	Description:
	Displays the FPS in the Eden statusbar.

	Parameter(s):
	1: [BOOL] - do toggle (default: true)

	Returns:
	true/false if failed
*/

#define CTRL_VERSION (findDisplay 313 displayCtrl 1057)

if !(is3DEN) exitWith {false};

private _showFPS = profileNamespace getVariable ["Enh_showFPS",false];
private _toggle = param [0,true, [true]];


private _fnc_showFPS =
{
	CTRL_VERSION ctrlEnable false;
	profileNamespace setVariable ["Enh_showFPS",true];
	[] spawn
	{
		while {profileNamespace getVariable "Enh_showFPS"} do
		{
			CTRL_VERSION ctrlSetText format ["FPS: %1",round diag_fps];
			sleep 1;
		};
	};
};


if (_toggle && _showFPS) then
{
	CTRL_VERSION ctrlEnable true;
	profileNamespace setVariable ["Enh_showFPS",false];
	CTRL_VERSION ctrlSetText (str ((productVersion select 2) / 100) + "." + str (productVersion select 3));
	false
}
else
{
	if (_toggle && !_showFPS) then
	{
		[] spawn _fnc_showFPS;
	}
	else
	{
		if (_showFPS) then
		{
			[] spawn _fnc_showFPS;
		};
	};
	true
};