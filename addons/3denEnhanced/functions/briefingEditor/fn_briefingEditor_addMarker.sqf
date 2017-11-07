/*
   Author: Revo

   Description:
   Adds an interactive marker to the briefing.

   Parameter(s):
   -
   Returns:
   true
*/
#define GET_CONTROL(IDD,IDC) ((findDisplay IDD) displayCtrl IDC)//DOESN'T WORK ANYMORE

private _markerVarName = ctrlText GET_CONTROL(50000,60);
private _markerText = ctrlText GET_CONTROL(50000,70);
private _briefingText = ctrlText GET_CONTROL(50000,10);

if (_markerVarName isEqualTo "") exitWith {["Variable Name must not be empty!",1] call BIS_fnc_3DENNotification};

if (_markerText isEqualto "") then
{
	private _index = (all3DENEntities select 5) find _markerVarName;
	if (_index == -1) exitWith {};
	_markerText = (((all3DENEntities select 5) select _index) get3DENAttribute "text") select 0;
};

GET_CONTROL(50000,10) ctrlSetText (_briefingText + format ["<marker name='%1'>%2</marker>",_markerVarName,_markerText]);

ctrlSetFocus GET_CONTROL(50000,10);

true



