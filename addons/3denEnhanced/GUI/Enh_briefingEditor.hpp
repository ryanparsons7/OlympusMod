class Enh_BriefingEditor
{
	idd = 50000;
	onLoad = "[] spawn Enh_fnc_briefingEditor_onLoad";
	movingEnable = true;
	class ControlsBackground
	{
		class IGUIBack_0: Enh_IGUIBack
		{
			x = 0.335938 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.308437 * safezoneW;
			h = 0.42 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.8};
		};
		class IGUIBack_1: Enh_IGUIBack
		{
			x = 0.769063 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class IGUIBack_2: Enh_IGUIBack
		{
			x = 0.650937 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.42 * safezoneH;
		};
		class IGUIBack_3: Enh_IGUIBack
		{
			x = 0.0996875 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.42 * safezoneH;
		};
		class Text_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_briefingText_displayName;
			x = 0.782188 * safezoneW + safezoneX;
			y = 0.276 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Expression_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_expression_displayName;
			x = 0.782188 * safezoneW + safezoneX;
			y = 0.388 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class BriefingEditor_Headline: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_headline_displayName;
			x = 0.335938 * safezoneW + safezoneX;
			y = 0.122 * safezoneH + safezoneY;
			w = 0.308437 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class Templates_Headline: Enh_RscText
		{	text = $STR_ENH_briefingEditor_templates_displayName;
			x = 0.217813 * safezoneW + safezoneX;
			y = 0.122 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class ColouredText_Headline: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_colourAndExpression_displayName;
			x = 0.769063 * safezoneW + safezoneX;
			y = 0.122 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] =
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
				1
			};
		};
		class AddText: Enh_RscButton
		{
			text = $STR_ENH_briefingEditor_addText_displayName;
			x = 0.782188 * safezoneW + safezoneX;
			y = 0.528 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_briefingEditor_addCustomText";
		};
		class Marker_Headline: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_marker_displayName;
			x = 0.650937 * safezoneW + safezoneX;
			y = 0.122 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class VariableName_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_variableName_displayName;
			x = 0.664063 * safezoneW + safezoneX;
			y = 0.164 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class MarkerName_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_markerText_displayName;
			x = 0.664063 * safezoneW + safezoneX;
			y = 0.276 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class AddMarker: Enh_RscButton
		{
			text = $STR_ENH_briefingEditor_addMarker_displayName;
			x = 0.664063 * safezoneW + safezoneX;
			y = 0.528 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_briefingEditor_addMarker";
		};
		class Subject_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_subject_displayName;
			x = 0.349063 * safezoneW + safezoneX;
			y = 0.164 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Title_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_briefingTitle_displayName;
			x = 0.349063 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Briefing_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_briefingText_displayName;
			x = 0.349063 * safezoneW + safezoneX;
			y = 0.276 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Linebreak: Enh_RscButton
		{
			text = $STR_ENH_briefingEditor_addLinebreak_displayName;
			x = 0.349063 * safezoneW + safezoneX;
			y = 0.528 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_briefingEditor_addLinebreak";
		};
		class Export: Enh_RscButton
		{
			text = $STR_ENH_briefingEditor_export_displayName;
			x = 0.4475 * safezoneW + safezoneX;
			y = 0.528 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_briefingEditor_export";
		};
		class CreateTemplate: Enh_RscButton
		{
			text = $STR_ENH_briefingEditor_createTemplate_displayName;
			x = 0.545937 * safezoneW + safezoneX;
			y = 0.528 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_briefingEditor_createTemplate";
		};
		class Image_Headline: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_picture_displayName;
			x = 0.0996875 * safezoneW + safezoneX;
			y = 0.122 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class Path_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_path_displayName;
			x = 0.112813 * safezoneW + safezoneX;
			y = 0.164 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class AddPicture: Enh_RscButton
		{
			text = $STR_ENH_briefingEditor_addPicture_displayName;
			x = 0.112813 * safezoneW + safezoneX;
			y = 0.528 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_briefingEditor_addPicture";
		};
		class Width_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_width_displayName;
			x = 0.112813 * safezoneW + safezoneX;
			y = 0.276 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Height_Text: Enh_RscText
		{
			text = $STR_ENH_briefingEditor_height_displayName;
			x = 0.112813 * safezoneW + safezoneX;
			y = 0.388 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
	};
	class Controls
	{
		class BriefingText_Value: Enh_RscEdit
		{
			idc = 10;
			x = 0.349063 * safezoneW + safezoneX;
			y = 0.332 * safezoneH + safezoneY;
			w = 0.282187 * safezoneW;
			h = 0.182 * safezoneH;
		};
		class Subject_Value: Enh_RscEdit
		{
			idc = 20;
			x = 0.440937 * safezoneW + safezoneX;
			y = 0.164 * safezoneH + safezoneY;
			w = 0.190312 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Title_Value: Enh_RscEdit
		{
			idc = 30;
			x = 0.440937 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.190312 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Path_Value: Enh_RscEdit
		{
			idc = 40;
			x = 0.112813 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;

		};
		class Width_Value: Enh_RscEdit
		{
			idc = 50;
			x = 0.112813 * safezoneW + safezoneX;
			y = 0.332 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class VariableName_Value: Enh_RscEdit
		{
			idc = 60;
			x = 0.664063 * safezoneW + safezoneX;
			y = 0.22 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class MarkerName_Value: Enh_RscEdit
		{
			idc = 70;
			x = 0.664063 * safezoneW + safezoneX;
			y = 0.332 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class TemplateList: Enh_RscListBox
		{
			idc = 80;
			x = 0.217813 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.42 * safezoneH;
			onKeyDown = "if ((_this select 1) == 211 ) then {(_this select 0) lbDelete (lbCurSel (_this select 0))}";
			onLBDblClick = "[_this select 0,_this select 1]call Enh_fnc_briefingEditor_getTemplate";
		};
		class Height_Value: Enh_RscEdit
		{
			idc = 90;
			x = 0.112813 * safezoneW + safezoneX;
			y = 0.444 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class ColourList: Enh_RscListBox
		{
			idc = 100;
			x = 0.769063 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.111562 * safezoneW;
			h = 0.098 * safezoneH;
		};
		class CustomText_Value: Enh_RscEdit
		{
			idc = 110;
			x = 0.782188 * safezoneW + safezoneX;
			y = 0.332 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.042 * safezoneH;
		};
		class Expression_Value: Enh_RscEdit
		{
			idc = 120;
			x = 0.782188 * safezoneW + safezoneX;
			y = 0.444 * safezoneH + safezoneY;
			w = 0.0853125 * safezoneW;
			h = 0.07 * safezoneH;
		};
	};
};