class CfgPatches {
	class ADDON
	{
        name = "ACRE2 Backpack Radios Tweaks";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"acre_sys_prc117f","acre_sys_prc77"};
	};
};

class CfgWeapons {
    class ACRE_BaseRadio;
    class CBA_MiscItem_ItemInfo;

    class ACRE_PRC117F: ACRE_BaseRadio {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
         };
    };
	
	class ACRE_PRC77: ACRE_BaseRadio {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
         };
    };
};