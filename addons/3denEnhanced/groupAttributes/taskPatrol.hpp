class Enh_TaskPatrol_MaxDistance
{
	displayName = $STR_ENH_taskPatrol_displayname;
	tooltip = $STR_ENH_taskPatrol_tooltip;
	property = "Enh_randomPatrol_maxDistance";
	control = "Edit";
	expression = "if (!is3DEN && (_value > 0)) then {[_this,getPosATL (leader _this),_value] call BIS_fnc_taskPatrol}";
	defaultValue = "-1";
	typeName = "NUMBER";
};

