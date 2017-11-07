class Enh_DisableTeamSwitch
{
	displayName = $STR_ENH_disableTeamSwitch_displayName;
	property = "Enh_disableTeamSwitch";
	control = "Checkbox";
	expression = "if (!is3DEN && !isMultiplayer) then {enableTeamSwitch _value}";
	defaultValue = "true";
};