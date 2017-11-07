if !(isServer) exitWith {};

private _curator = getAssignedCuratorLogic (_this select 0);

private _objects = [];
{ if (side _x != sideLogic) then { _objects pushBack _x; }; } forEach allMissionObjects ""; 

_curator addCuratorEditableObjects [_objects,true];