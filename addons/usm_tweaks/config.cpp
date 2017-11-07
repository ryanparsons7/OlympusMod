class CfgPatches {
	class ADDON
	{
        name = "USM Tweaks";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"us_military_units"};
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
