/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
	   uniform[] = {};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {};
       hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] =
    {
		#include "basicitems.hpp"
        #include "basicmedical.hpp"
    };
	
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemGPS",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
};
class police : baseMan
{
    displayName = "Police Officer";
	uniform[] = {"sfp_police_uniform_modern"};
    vest[] = {"sfp_police_belt"};
    headgear[] = {"sfp_police_hat"};
    sidearmWeapon[] = {"hlc_pistol_P226US"};
    magazines[] =
    {
        LIST_2("hlc_15Rnd_9x19_B_P226")
    };
};
class paramedic : baseMan
{
    displayName = "Paramedic (No Weapons)";
	uniform[] = {"CUP_U_C_Rescuer_01"};
    vest[] = {"sfp_police_belt"};
    backpack[] = {"R3F_sac_moyen_medic_TAN"};
    items[] += {
        #include "medicalbackpack.hpp"
    };
};
class swat : baseMan
{
    displayName = "SWAT (Unarmed)";
	uniform[] = {"RM_SWAT_Uniform_01"};
    vest[] = {"RM_SWAT_Vest_Blue_01"};
    headgear[] = {"RM_SWAT_Helmet_01"};
    goggles[] = {"TRYK_kio_balaclava_ESS"};
    sidearmWeapon[] = {"hlc_pistol_P226US"};
    magazines[] =
    {
        LIST_2("hlc_15Rnd_9x19_B_P226"),
        LIST_2("ACE_M84")
    };
};
class swatm4 : swat
{
    displayName = "SWAT (M4)";
    primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
    attachment[] = {"rhsusf_acc_wmx_bk"};
    magazines[] +=
    {
        LIST_4("rhs_mag_30Rnd_556x45_M855A1_Stanag")
    };
};
class swatmp5 : swat
{
    displayName = "SWAT (MP5)";
    primaryWeapon[] = {"sfp_mp5"};
    scope[] = {};
    magazines[] +=
    {
        LIST_4("sfp_30Rnd_9mm_mp5")
    };
};
class swatshot : swat
{
    displayName = "SWAT (Shotgun)";
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    scope[] = {};
    magazines[] +=
    {
        LIST_4("rhsusf_8Rnd_00Buck")
    };
};
class m : swatmp5
{
    displayName = "SWAT Medic";
    backpack[] = {"B_AssaultPack_blk"};
    items[] += {
        #include "medicalbackpack.hpp"
    };
};
class swatsn : swat
{
    displayName = "SWAT Sniper";
    primaryWeapon[] = {"rhs_weap_m24sws_blk"};
    scope[] = {"rhsusf_acc_premier"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    magazines[] +=
    {
        LIST_5("rhsusf_5Rnd_762x51_m118_special_Mag")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class swatsp : swatm4
{
    displayName = "SWAT Spotter";
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class pilot : police
{
    displayName = "Helicopter Pilot";
    headgear[] = {"R3F_casque_pilote"};
};