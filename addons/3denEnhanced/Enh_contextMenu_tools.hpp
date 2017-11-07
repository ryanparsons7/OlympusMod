class Items
{
	items[] +=
	{
		"Enh_MeasureDistance"
	};
	class Log
	{
		picture = "\3denEnhanced\data\Enh_icon_clipboard.paa";
		items[] +=
		{
			"Enh_LogFactions",
			"Enh_GetModuleDescription",
			"Enh_LogObjectInfo",
			"Enh_LogPositions"
		};
	};
	class Edit
	{
		items[] +=
		{
			"Enh_GarrisonBuildings",
			"Enh_DeleteCrew"
		};
	};
	class ConnectParent
	{
		items[] +=
		{
			"Enh_TriggerOwnerPlayer",
			//"Enh_GroupToPlayer"
		};
	};
	class Enh_LogFactions
	{
		text = $STR_ENH_tools_logFaction_displayName;
		action = "call Enh_fnc_logFactions";
		conditionShow = "hoverObject";
	};
	class Enh_GarrisonBuildings: Enh_LogFactions
	{
		action = "(findDisplay 313) createDisplay 'Enh_GarrisonBuildings'";
		Text = $STR_ENH_garrison_header;
	};
	class CreateComment;
	class Enh_MeasureDistance: CreateComment
	{
		action = "call Enh_fnc_measureDistance";
		Text = $STR_ENH_tools_measureDistance_displayName;
		picture = "\3denEnhanced\data\Enh_icon_ruler.paa";
		conditionShow = "1 - selected";
		data = "";
	};
	class Enh_TriggerOwnerPlayer
	{
		action = "add3DENConnection ['TriggerOwner',get3DENSelected 'Trigger',player]";
		Text = $STR_ENH_setTriggerOwnerPlayer;
		conditionShow = "hoverTrigger";
	};
	class Enh_GetModuleDescription
	{
		action = "call Enh_fnc_getModuleDescription";
		Text = $STR_ENH_getModuleDescription;
		conditionShow = "hoverLogic";
	};
	class Enh_LogObjectInfo: Enh_LogFactions
	{
		action = "call Enh_fnc_logObjectInfo";
		Text = "Log Object Info";
	};
	class Enh_DeleteCrew
	{
		action = "call Enh_fnc_deleteCrew";
		Text = $STR_ENH_deleteCrew;
		conditionShow = "hoverObjectVehicle";
	};
	class Enh_LogPositions
	{
		action = "call Enh_fnc_logPositions";
		Text = $STR_ENH_logPositions;
		conditionShow = "selectedObject + selectedWaypoint 	+ selectedLogic + selectedMarker + selectedTrigger";
	};
/*	class Enh_GroupToPlayer
	{
		action = "add3DENConnection ['Group',get3DENSelected 'Object',player]";
		Text = $STR_ENH_groupToPlayer;
		conditionShow = "hoverObject";
	};*/
};