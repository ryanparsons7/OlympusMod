class Tools
{
	items[] +=
	{
		"Enh_ToolFolder_Main"
	};
};
class Enh_ToolFolder_Main
{
	text = $STR_ENH_toolFolder_main_displayName;
	items[] +=
	{
		"Enh_ToolFolder_Placement",
		"Enh_ToolFolder_Debug",
		"Enh_ToolFolder_Loadout",
		"Enh_ToolFolder_Utilities",
		"Separator",
		"Enh_nameObjects",
		"Enh_BriefingEditor",
		"Enh_3denRadio",
		"Enh_SwitchTime",
		"Enh_ToggleGrass"
	};
};
class Enh_ToolFolder_Placement
{
	text = $STR_ENH_toolFolder_placement_displayName;
	picture = "\a3\3DEN\Data\CfgWaypoints\Scripted_ca.paa";
	items[] +=
	{
		"Enh_LinePattern",
		"Enh_CircularPattern",
		"Enh_SetRandomDir",
		"Enh_ReverseDirection",
		"Enh_FillArea",
		"Enh_OrientateNorth",
		"Enh_OrientateEast",
		"Enh_OrientateSouth",
		"Enh_OrientateWest"
	};
};
class Enh_ToolFolder_Debug
{
	text = $STR_ENH_toolFolder_debug_displayName;
	picture = "\a3\Ui_f\data\GUI\RscCommon\RscDebugConsole\performance_ca.paa";
	items[] +=
	{
		"Enh_MissionStats",
		"Enh_ProductInfo",
		"Enh_RecompileFunctions",
		"Enh_ToggleMapIDs",
		"Enh_ToggleFPS",
		"Enh_ExportCameraParams",
		"Enh_PasteCameraParams",
		"Enh_ExportGUIBaseClasses",
		"Enh_GUITestGrids",
		"Enh_DebugTriggers",
		"Enh_ColourPicker"
	};
};
class Enh_ToolFolder_Loadout
{
	text = $STR_ENH_toolFolder_loadout_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa";
	items[] +=
	{
		"Enh_CopyLoadout",
		"Enh_ApplyLoadout",
		"Enh_ExportLoadoutConfig"
	};
};
class Enh_ToolFolder_Utilities
{
	text = $STR_ENH_toolFolder_utilities_displayName;
	picture = "";
	items[] +=
	{
		"Enh_Utilities_MoonPhases",
		"Enh_Utilities_Jukebox",
		"Enh_Utilities_PrintConfig",
		"Enh_Utilities_CfgDisabledCommands"
	};
};
class Enh_Utilities_MoonPhases
{
	text = $STR_ENH_tools_moonPhases;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_moonPhases.sqf'";
};
class Enh_Utilities_Jukebox
{
	text = $STR_ENH_tools_jukebox;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_jukebox.sqf'";
};
class Enh_Utilities_PrintConfig
{
	text = $STR_ENH_tools_printConfig;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_printConfig.sqf'";
};
class Enh_Utilities_CfgDisabledCommands
{
	text = $STR_ENH_tools_CfgDisabledCommands;
	action = "_nil = [] execVM 'A3\Functions_F\Debug\Utilities\utility_cfgDisabledCommands.sqf'";
};
class Enh_ToggleMapIDs
{
	text = $STR_ENH_tools_showMapIDs_displayName;
	picture = "\3denEnhanced\data\Enh_icon_id.paa";
	action = "call Enh_fnc_toggleMapIDs";
};
class Enh_CopyLoadout
{
	text = $STR_ENH_tools_copyLoadouts_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa";
	shortcuts[] = {"512 + 2048 + 0x2E"};
	action = "'copy' call Enh_fnc_loadoutTool";
};
class Enh_ApplyLoadout: Enh_copyLoadout
{
	text = $STR_ENH_tools_applyLoadouts_displayName;
	shortcuts[] = {"512 + 2048 + 0x1E"};
	action = "'apply' call Enh_fnc_loadoutTool";
};
class Enh_ExportLoadoutConfig
{
	text = $STR_ENH_tools_exportLoadoutConfig_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa";
	action = "call Enh_fnc_exportInventory";
};
class Enh_RecompileFunctions
{
	text = $STR_ENH_tools_recompileFunctions_displayName;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\functions_ca.paa";
	action = "1 call BIS_fnc_recompile; ['Enh_actionPerformed'] call BIS_fnc_3DENNotification";
	shortcuts[] = {"512 + 2048 + 0x13"};
};
class Enh_SetRandomDir
{
	action = "call Enh_fnc_setRandomDir";
	Text = $STR_ENH_tools_randomDir_displayName;
	picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
	conditionShow = "selectedObject + selectedWaypoint + selectedLogic + selectedMarker";
	shortcuts[] = {"512 + 0x51"};
};
class Enh_LinePattern
{
	text = $STR_ENH_tools_linePattern_displayName;
	picture = "\3denEnhanced\data\Enh_icon_linePattern.paa";
	action = "(findDisplay 313) createDisplay 'Enh_PatternTool'; missionNamespace setVariable ['Enh_pattern_type','line']";
};
class Enh_CircularPattern
{
	text = $STR_ENH_tools_circularPattern_displayName;
	picture = "\3denEnhanced\data\Enh_icon_circularPattern.paa";
	action = "(findDisplay 313) createDisplay 'Enh_PatternTool'; missionNamespace setVariable ['Enh_pattern_type','circular']";
};
class Enh_FillArea
{
	text = $STR_ENH_tools_fillArea_displayName;
	picture = "\3denEnhanced\data\Enh_icon_fillArea.paa";
	action = "(findDisplay 313) createDisplay 'Enh_PatternTool'; missionNamespace setVariable ['Enh_pattern_type','fillArea']";
};
class Enh_ReverseDirection
{
	text = $STR_ENH_tools_reverseDirection_displayName;
	picture = "\A3\ui_f\data\igui\rsctitles\mpprogress\respawn_ca.paa";
	action = "call Enh_fnc_reverseDirection";
	shortcuts[] = {"512 + 0x47"};
};
class Enh_MissionStats
{
	text = $STR_ENH_tools_showMissionStats_displayName;
	picture = "\3denEnhanced\data\Enh_icon_missionStats.paa";
	action = "call Enh_fnc_showMissionStats";
};
class Enh_ProductInfo
{
	text = $STR_ENH_tools_productInfo_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\intel_ca.paa";
	action = "call Enh_fnc_productInfo";
};
class Enh_BriefingEditor
{
	text = $STR_ENH_tools_briefingEditor_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\whiteboard_ca.paa";
	action = "(findDisplay 313) createDisplay 'Enh_briefingEditor'";
	shortcuts[] = {"512 + 0x30"};
};
class Enh_3denRadio
{
	text = "3den Radio";
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\types\radio_ca.paa";
	action = "(findDisplay 313) createDisplay 'Enh_3denRadio'";
	shortcuts[] = {"2048 + 0x13"};
};
class Enh_SwitchTime
{
	text = $STR_ENH_tools_switchTime_displayName;
	picture = "\A3\ui_f\data\igui\cfg\actions\settimer_ca.paa";
	action = "call Enh_fnc_switchTime";
	shortcuts[] = {"512 + 0xC8"};
};
class Enh_OrientateNorth
{
	text = $STR_ENH_tools_orientateNorth_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\N_ca.paa";
	action = "0 call Enh_fnc_setOrientation";
	shortcuts[] = {"512 + 0x48"};
};
class Enh_OrientateEast: Enh_orientateNorth
{
	text = $STR_ENH_tools_orientateEast_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\E_ca.paa";
	action = "90 call Enh_fnc_setOrientation";
	shortcuts[] = {"512 + 0x4D"};
};
class Enh_OrientateSouth: Enh_orientateNorth
{
	text = $STR_ENH_tools_orientateSouth_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\S_ca.paa";
	action = "180 call Enh_fnc_setOrientation";
	shortcuts[] = {"512 + 0x50"};
};
class Enh_OrientateWest: Enh_orientateNorth
{
	text = $STR_ENH_tools_orientateWest_displayName;
	picture = "\A3\ui_f\data\igui\cfg\simpleTasks\letters\W_ca.paa";
	action = "270 call Enh_fnc_setOrientation";
	shortcuts[] = {"512 + 0x4B"};
};
class Enh_ToggleFPS
{
	text = $STR_ENH_tools_FPSGauge_displayName;
	picture = "\a3\Ui_f\data\GUI\RscCommon\RscDebugConsole\performance_ca.paa";
	action = "true call Enh_fnc_showFPS";
};
class Enh_ExportCameraParams
{
	text = $STR_ENH_tools_exportCameraParams_displayName;
	picture = "\3denEnhanced\data\Enh_icon_camera.paa";
	action = "'export' call Enh_fnc_3DENCameraParams";
};
class Enh_PasteCameraParams: Enh_exportCameraParams
{
	text = $STR_ENH_tools_importCameraParams_displayName;
	action = "'paste' call Enh_fnc_3DENCameraParams";
};
class Enh_ToggleGrass
{
	text = $STR_ENH_tools_toggleGrass_displayName;
	action = "[] spawn Enh_fnc_toggleGrass";
	shortcuts[] = {"512 + 0xD0"};
};
class Enh_ExportGUIBaseClasses
{
	text = $STR_ENH_tools_exportGUIBaseClasses;
	picture = "\3denEnhanced\data\Enh_icon_GUI.paa";
	action = "'' call BIS_fnc_exportGUIBaseClasses; ['Enh_DataCopied'] call BIS_fnc_3DENNotification";
};
class Enh_GUITestGrids: Enh_ExportGUIBaseClasses
{
	text = $STR_ENH_tools_GUITestGrids;
	action = "(findDisplay 313) createDisplay 'RscTestGrids'";
};
class Enh_DebugTriggers
{
	text = $STR_ENH_tools_debugTriggers;
	picture = "\a3\Ui_f\data\IGUI\Cfg\IslandMap\iconSensor_ca.paa";
	action = "call Enh_fnc_debugTriggers";
};
class Enh_NameObjects
{
	text = $STR_ENH_nameObjects_header;
	action = "(findDisplay 313) createDisplay 'Enh_nameObjects'";
	shortcuts[] = {"2048 + 0x31"};
};
class Enh_ColourPicker
{
	text = $STR_ENH_colourPicker;
	action = "(findDisplay 313) createDisplay 'Enh_colourPicker'";
};