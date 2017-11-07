class Display3DEN
{
	class Controls
	{
		class StatusBar: ctrlControlsGroupNoScrollbars
		{
			class Controls
			{
				class Version;
				class Enh_SessionTime: Version
				{
					idc = 668;
					tooltip = $STR_ENH_display3DEN_sessionTime_tooltip;
					x = "(safezoneW - 60 * (pixelW * pixelGrid * 0.50)) - (2 * 4 + 21) * (pixelW * pixelGrid * 0.50) - (20 * (pixelW * pixelGrid * 0.50) + 2 * pixelW)";
					onLoad = "(_this select 0) ctrlEnable false";
				};
			};
		};
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				#include "Enh_menuStrip_tools.hpp"
				#include "Enh_menuStrip_help.hpp"
			};
		};
	};
	class ContextMenu: ctrlMenu
	{
		#include "Enh_contextMenu_tools.hpp"
	};
};
