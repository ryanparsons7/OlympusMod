
/*
	Author: Revo

	Description:
	Counts all 3DEN Objects and shows their number via 3DEN notification.

	Parameter(s):
	-
	Returns:
	true
*/

private _simpleObjects = 0;

private _objects   = count (all3DENEntities select 0);
private _groups    = count (all3DENEntities select 1);
private _triggers  = count (all3DENEntities select 2);
private _systems   = count (all3DENEntities select 3);
private _waypoints = count (all3DENEntities select 4);
private _markers   = count (all3DENEntities select 5);
private _all       = (_objects + _groups + _triggers + _systems + _waypoints + _markers);

{
	if ((_x get3DENAttribute "objectIsSimple") isEqualto [true]) then
	{
		_simpleObjects = _simpleObjects + 1;
	};
} forEach (all3DENEntities select 0);

private _txt = format ["Objects (Simple/Normal): %1/%2, Groups: %3/288, Triggers: %4, Systems: %5, Waypoints: %6, Markers: %7, All: %8",_simpleObjects,_objects,_groups,_triggers,_systems,_waypoints,_markers,_all];

[_txt,0,10] call BIS_fnc_3DENNotification;

true

/*localize "STR_3DEN_Trigger_textPlural"
localize "STR_3DEN_Marker_textPlural"
localize "STR_3DEN_Waypoint_textPlural"
localize "STR_3DEN_Logic_textPlural"
localize "STR_3DEN_Object_textPlural"
localize "STR_3DEN_Group_textPlural"*/