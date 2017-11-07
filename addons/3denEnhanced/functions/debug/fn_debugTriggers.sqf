/*
   Author: Revo

   Description:
   Creates triggers which allow the player to access various debug functionalities while test playing the mission.

   Parameter(s):
   -

   Returns:
   true / false
*/

if !(is3DEN) exitWith {false};

#define REVEAL_CODE "[] spawn\
{\
	private _markerList = [];\
	for '_i' from 0 to ((count allUnits) - 1) do\
	{\
		private _unit = allUnits select _i;\
		private _marker = createMarker [format ['tempMarker_%1',_i],position _unit];\
		_marker setMarkerType 'mil_box';\
		private _name = getText (configfile >> 'CfgVehicles' >> (typeOf _unit) >> 'displayName');\
		_marker setmarkerText _name;\
		_markerList pushBack _marker;\
	};\
	openMap [true,false];\
	waitUntil {!visibleMap};\
	{deletemarker _x} forEach _markerList;\
};"

#define AWARENESS_CODE "hintSilent format\
[\
	'Awareness EAST: %1 %4\nAwareness WEST: %2 %4\nAwareness INDEPENDENT: %3 %4',\
	(EAST knowsAbout player) * 100 / 4,\
	(WEST knowsAbout player) * 100 / 4,\
	(INDEPENDENT knowsAbout player) * 100 / 4,\
	'%'\
];"

#define CAPTIVE_CODE "if (captive player) then\
{\
	{_x setCaptive false} forEach units group player;\
	hint 'Captive Mode OFF';\
}\
else\
{\
	{_x setCaptive true} forEach units group player;\
	hint 'Captive Mode ON';\
};"

#define TRACEBULLETS_CODE "if ((player getVariable ['BIS_bulletTrace_EHPool',[]]) isEqualTo []) then\
{\
	[player] spawn BIS_fnc_traceBullets;\
	hint 'Tracing enabled';\
}\
else\
{\
	[player,0] spawn BIS_fnc_traceBullets;\
	hint 'Tracing disabled';\
};"

#define MULTIPLIER_CODE "if (timeMultiplier isEqualTo 120) then\
{\
	setTimeMultiplier 1;\
	hint format ['Time Multiplayer: x%1',timeMultiplier];\
}\
else\
{\
	setTimeMultiplier (timeMultiplier + 20);\
	hint format ['Time Multiplayer: x%1',timeMultiplier];\
};"
#define DAMAGE_CODE "if (isDamageAllowed player) then\
{\
	{_x allowDamage false} forEach units group player;\
	(vehicle player) allowDamage false;\
	hint 'Damage disabled';\
}\
else\
{\
	{_x allowDamage true} forEach units group player;\
	(vehicle player) allowDamage true;\
	hint 'Damage enabled';\
};"
#define TELEPORT_CODE "openMap true;\
hint 'Choose teleport location';\
Enh_debugTriggers_EH_teleport = addMissionEventHandler ['MapSingleClick',\
{\
	{_x setPos param [1,[0,0,0],[[]],[3]]} forEach units group player;\
	openMap false;\
	removeMissionEventHandler ['mapSingleClick',Enh_debugTriggers_EH_teleport];\
}];"

Enh_debugTriggers = [];

private _fnc_createTrigger =
{
	params [["_text","DEBUG: Empty",[""]],["_onActivation","nil",[""]],["_radio","ALPHA",[""]]];

	private _trigger = create3DENEntity ["Trigger","EmptyDetector",[0,0,0]];
	_trigger set3DENAttribute ["text",_text];
	_trigger set3DENAttribute ["condition","this && !isMultiplayer"];
	_trigger set3DENAttribute ["onActivation",_onActivation];
	_trigger set3DENAttribute ["activationBy",_radio];
	_trigger set3DENAttribute ["repeatable",true];

	Enh_debugTriggers pushBack _trigger;

	_trigger set3DENLayer Enh_debugTriggers_layer;
};

collect3DENHistory
{
	//Create layer and set up layer
	Enh_debugTriggers_layer = -1 add3DENLayer "DEBUG";
	Enh_debugTriggers_layer set3DENAttribute ["Transformation",false];
	Enh_debugTriggers_layer set3DENAttribute ["Visibility",false];

	//Create triggers
	//Set Captive
	[localize "STR_ENH_debugTriggers_captive",CAPTIVE_CODE,"ALPHA"] call _fnc_createTrigger;
	//Skip Time
	[localize "STR_ENH_debugTriggers_skipTime","skipTime 1","BRAVO"] call _fnc_createTrigger;
	//Arsenal
	[localize "STR_ENH_debugTriggers_Arsenal","_nil = ['Open',true] spawn BIS_fnc_arsenal;","CHARLIE"] call _fnc_createTrigger;
	//Damage
	[localize "STR_ENH_debugTriggers_invulnerability",DAMAGE_CODE,"DELTA"] call _fnc_createTrigger;
	//Show Awareness
	[localize "STR_ENH_debugTriggers_awareness",AWARENESS_CODE,"ECHO"] call _fnc_createTrigger;
	//Bullet Tracing
	[localize "STR_ENH_debugTriggers_bulletTracking",TRACEBULLETS_CODE,"FOXTROT"] call _fnc_createTrigger;
	//Reveal Units
	[localize "STR_ENH_debugTriggers_reveal",REVEAL_CODE,"GOLF"] call _fnc_createTrigger;
	//Change Time Multiplier
	[localize "STR_ENH_debugTriggers_timeMulti",MULTIPLIER_CODE,"HOTEL"] call _fnc_createTrigger;
	//Teleport
	[localize "STR_ENH_debugTriggers_teleport",TELEPORT_CODE,"INDIA"] call _fnc_createTrigger;
	//Heal & Repair
	[localize "STR_ENH_debugTriggers_heal_repair","(vehicle player) setDamage 0; {_x setDamage 0} forEach (units group player)","JULIET"] call _fnc_createTrigger;
};

true


