#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
	class 1TAC_ADMIN_CONSOLE
	{
		units[] = {};
		weapons[] = {};
		worlds[] = {};
		requiredAddons[] = {"a3_data_f","a3data","cba_main"};
		requiredVersion = 1.0;
		author = "Snippers";
		url = "www.teamonetactical.com";
	};
};

#include "defines.hpp"
#include "dialogs.hpp"
#include "CfgEventHandlers.hpp"

class CfgFunctions
{
    class A3 {
        class Debug {
            class isDebugConsoleAllowed {
                file = "\admin_menu\func\fn_isDebugConsoleAllowed.sqf";
            };
        };
    };
	class tac1_admin
	{
		class adminMenu
		{
			file="admin_menu\func";
			class actionAiHuntPlayers {};
			class actionGiveZeus {};
			class actionGiveZeusSelf {};
			class actionGroupTeleport {};
			class actionPlayerTeleport {};
			class actionZeusAddAllObjects {};
			class endMissionInstant {};
			class endMissionSmooth {};
			class fillMissionEndingBox {};
			class fillPlayerListBox {};
			class keyPressed {};
			class zeusAddAllObjects {};
			class zeusServerMake {};
			class zeusServerObjectPlacedSync {};
			class zeusSetupSync {};
			class teleportDrawMapIcons {};
			class teleportMapClick {};
			class teleportMapLoaded {};
			class messageAdmin {};
			class aiHuntPlayers {};
		};
		class scripts
		{
			file="admin_menu\scripts";
			class checkMods {};
		};
	};
};
