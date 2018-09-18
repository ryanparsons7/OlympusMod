class CfgPatches {
	class ADDON
	{
        name = "ACRE Backpack Tweaks";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"us_military_units","fow_characters"};
	};
};

class CfgVehicles
{
	class Bag_Base;
	class usm_pack_st138_prc77: Bag_Base
	{
		maximumLoad = 200;
	};
};