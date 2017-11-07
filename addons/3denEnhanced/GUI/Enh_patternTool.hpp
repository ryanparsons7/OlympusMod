/* #Cuheto
$[
	1.063,
	["ToolGUI",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[2200,"Background",[1,"",["0.414687 * safezoneW + safezoneX","0.29 * safezoneH + safezoneY","0.1575 * safezoneW","0.462 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"Header",[1,"Pattern Placement Editor",["0.414687 * safezoneW + safezoneX","0.262 * safezoneH + safezoneY","0.1575 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"TextSpacing",[1,"Spacing",["0.42125 * safezoneW + safezoneX","0.374 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"LinePatternHeader",[1,"Line Pattern",["0.42125 * safezoneW + safezoneX","0.318 * safezoneH + safezoneY","0.144375 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1003,"CircularPatternHeader",[1,"Circular Pattern",["0.42125 * safezoneW + safezoneX","0.43 * safezoneH + safezoneY","0.144375 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1004,"TextRadius",[1,"Radius",["0.42125 * safezoneW + safezoneX","0.486 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1005,"FillAreaHeader",[1,"Fill Area Tool",["0.42125 * safezoneW + safezoneX","0.542 * safezoneH + safezoneY","0.144375 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1006,"Text_A",[1,"A",["0.42125 * safezoneW + safezoneX","0.598 * safezoneH + safezoneY","0.013125 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1007,"Text_B",[1,"B",["0.5 * safezoneW + safezoneX","0.598 * safezoneH + safezoneY","0.013125 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1400,"ValueA",[1,"",["0.434375 * safezoneW + safezoneX","0.598 * safezoneH + safezoneY","0.0525 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1401,"ValueB",[1,"",["0.513125 * safezoneW + safezoneX","0.598 * safezoneH + safezoneY","0.0525 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1008,"TextObjectCount",[1,"Object Count",["0.42125 * safezoneW + safezoneX","0.654 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1402,"ValueObjCount",[1,"",["0.5 * safezoneW + safezoneX","0.654 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1403,"ValueSpacing",[1,"",["0.5 * safezoneW + safezoneX","0.374 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1404,"ValueRadius",[1,"",["0.5 * safezoneW + safezoneX","0.486 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"ButtonOK",[1,"OK",["0.5 * safezoneW + safezoneX","0.71 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"Close",[1,"Close",["0.42125 * safezoneW + safezoneX","0.71 * safezoneH + safezoneY","0.065625 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

class Enh_PatternTool
{
	idd = 100000;
	movingEnable = true;
	class Controls
	{
		class Background: Enh_IGUIBack
		{
			x = 0.414687 * safezoneW + safezoneX;
			y = 0.29 * safezoneH + safezoneY;
			w = 0.1575 * safezoneW;
			h = 0.462 * safezoneH;
		};
		class Header: Enh_RscText
		{
			text = $STR_ENH_patternTools_header;
			x = 0.414687 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.1575 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class TextSpacing: Enh_RscText
		{
			text = $STR_ENH_patternTool_spacing;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.374 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class LinePatternHeader: Enh_RscText
		{
			text = $STR_ENH_patternTools_linePattern_header;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class CircularPatternHeader: Enh_RscText
		{
			text = $STR_ENH_patternTools_circular_header;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.43 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class TextRadius: Enh_RscText
		{
			text = $STR_ENH_patternTools_radius;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.486 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class FillAreaHeader: Enh_RscText
		{
			text = $STR_ENH_patternTools_fillArea_header;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.542 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class Text_A: Enh_RscText
		{
			text = $STR_ENH_patternTools_A;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.598 * safezoneH + safezoneY;
			w = 0.013125 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {0.77,0.18,0.1,1};//RED
		};
		class Text_B: Enh_RscText
		{
			text = $STR_ENH_patternTools_B;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.598 * safezoneH + safezoneY;
			w = 0.013125 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {0.58,0.82,0.22,1};//GREEN
		};
		class ValueA: Enh_RscEdit
		{
			idc = 1400;
			x = 0.434375 * safezoneW + safezoneX;
			y = 0.598 * safezoneH + safezoneY;
			w = 0.0525 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = "(_this select 0) ctrlSetText (profileNamespace getVariable ['Enh_patternTool_a','150'])";
		};
		class ValueB: Enh_RscEdit
		{
			idc = 1401;
			x = 0.513125 * safezoneW + safezoneX;
			y = 0.598 * safezoneH + safezoneY;
			w = 0.0525 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = "(_this select 0) ctrlSetText (profileNamespace getVariable ['Enh_patternTool_b','150'])";
		};
		class TextObjectCount: Enh_RscText
		{
			text = $STR_ENH_colourPicker_numObjects;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class ValueObjCount: Enh_RscEdit
		{
			idc = 1402;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = "(_this select 0) ctrlSetText (profileNamespace getVariable ['Enh_patternTool_count','10'])";
		};
		class ValueSpacing: Enh_RscEdit
		{
			idc = 1403;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.374 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = "(_this select 0) ctrlSetText (profileNamespace getVariable ['Enh_patternTool_spacing','3'])";
		};
		class ValueRadius: Enh_RscEdit
		{
			idc = 1404;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.486 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			onLoad = "(_this select 0) ctrlSetText (profileNamespace getVariable ['Enh_patternTool_radius','3'])";
		};
		class OK: Enh_RscButton
		{
			text = $STR_ENH_nameObjects_OK;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			action = "call Enh_fnc_patternTool; (findDisplay 100000) closeDisplay 0";
		};
		class Close: Enh_RscButton
		{
			text = $STR_ENH_garrison_close;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.065625 * safezoneW;
			h = 0.028 * safezoneH;
			action = "(findDisplay 100000) closeDisplay 0";
		};
	};
};