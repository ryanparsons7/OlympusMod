/*
	Author: Revo

	Description:
	Initialises the 3den Enhanced session timer. Needs to be spawned!

	Parameter(s):
	-
	Returns:
	true
*/

while {is3DEN} do
{
	((findDisplay 313) displayCtrl 668) ctrlSetText ([diag_tickTime / 3600] call BIS_fnc_timeToString);
	uiSleep 1;
};

true