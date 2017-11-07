class Enh_Changelog
{
	idd = 70000;
	movingEnable = true;
	class Controls
	{
		class Background: Enh_IGUIBack
		{
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.178 * safezoneH + safezoneY;
			w = 0.525 * safezoneW;
			h = 0.672 * safezoneH;
		};
		class Header: Enh_RscText
		{
			text = $STR_ENH_changelog_header;
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.511875 * safezoneW;
			h = 0.028 * safezoneH;
   			colorBackground[] = COLOUR_USER_PRESET;
		};
		class Close: Enh_RscButton
		{
			text = "X";
			x = 0.749375 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.013125 * safezoneW;
			h = 0.028 * safezoneH;
			action = "(findDisplay 70000) closeDisplay 0";
		};
		class ControlsGroup: Enh_RscControlsGroup
		{
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.178 * safezoneH + safezoneY;
			w = 0.525 * safezoneW;
			h = 0.672 * safezoneH;
			class Controls
			{
				class Changelog: Enh_RscHTML
				{
					x = 0 * safezoneW;
					y = 0 * safezoneH;
					w = 5;			//Scrolling Width
					h = 15;			//Scrolling Height
					onLoad = "(_this select 0) htmlLoad '\3denEnhanced\changelog.html'";
				};
			};
		};
	};
};