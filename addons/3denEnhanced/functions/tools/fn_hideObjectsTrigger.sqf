/*
   Author: Revo

   Description:
   Creates a trigger under the cursor which hides all terrain objects when the mission starts.

   Parameter(s):
   -

   Returns:
   true
*/

private _posClick = (uiNamespace getVariable "bis_fnc_3DENEntityMenu_data") select 0;
_posClick set [2,0];
private _trigger = create3DENEntity ["Trigger","EmptyDetectorArea10x10",_posClick];

private _expression =
"comment 'Edit at your own expense!';
{
   _x hideObject true
} forEach (nearestTerrainObjects [position thisTrigger,[],((triggerArea thisTrigger select 0) + (triggerArea thisTrigger select 1)) / 2,false]);";

_trigger set3DENAttribute ["text",localize "STR_ENH_HideTerrainObjects"];
_trigger set3DENAttribute ["condition","hasInterface"];
_trigger set3DENAttribute ["onActivation",_expression];
_trigger set3DENAttribute ["isRectangle",false];
_trigger set3DENAttribute ["size3",[10,10,-1]];

true