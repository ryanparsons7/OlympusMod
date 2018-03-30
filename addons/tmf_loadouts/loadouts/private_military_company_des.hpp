/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"VSM_OGA_Crye_SS_grey_tan_pants_Camo"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {"VSM_Facemask_tan_Peltor","VSM_Facemask_tan_glasses","VSM_Balaclava2_tan_Goggles","VSM_balaclava_tan","rhsusf_shemagh2_gogg_tan","rhsusf_shemagh_tan","rhsusf_oakley_goggles_blk"};
       hmd[] = {"rhsusf_ANPVS_14"};
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
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"VSM_oga_OPS_2"};
    vest[] = {"VSM_RAV_operator_OGA","VSM_RAV_Breacher_OGA"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    attachment[] = {"rhsusf_acc_wmx_bk"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203"};
    magazines[] +=
    {
        LIST_5("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : r
{
    displayName = "Medic";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    items[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_smg_mp5a2"};
    scope[] = {};
    magazines[] =
    {
        LIST_6("hlc_30Rnd_9x19_B_MP5"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen"),
		"Laserbatteries"
    };
    linkedItems[] += {"Laserdesignator"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_15Rnd_9x19_JHP")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    radios[] = {"ACRE_PRC117F"};
};
class jtac : co
{
    displayName = "Joint Terminal Attack Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    vest[] = {"VSM_RAV_MG_OGA"};
    primaryWeapon[] = {"rhs_weap_m249_pip_S_vfg"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
		LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_15Rnd_9x19_JHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    backpackItems[] =
    {
		LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m14ebrri"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4"};
    magazines[] =
    {
        LIST_6("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_2("rhsusf_20Rnd_762x51_m62_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    scope[] = {"rhsusf_acc_ACOG_MDO"};
    vest[] = {"VSM_RAV_MG_OGA"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_15Rnd_9x19_JHP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] += {"Binocular"};
};
class matg : r
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"Binocular"};
};
class hatg : r
{
    displayName = "HAT Gunner";
    backPack[] = {"VSM_OGA_carryall"};
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpackItems[] = {
        "rhs_fgm148_magazine_AT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"VSM_OGA_carryall"};
    backpackItems[] = {
        "rhs_fgm148_magazine_AT"
    };
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] += {"Binocular"};
};
class mtrg : r
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    items[] += {
	"ACE_RangeTable_82mm"
	};
};
class mtrac : r
{
    displayName = "Mortar Assistant";
    backPack[] = {"B_Mortar_01_support_F"};
    items[] += {
	"ACE_RangeTable_82mm"
	};
};
class mtrag : r
{
    displayName = "Mortar Spotter";
    items[] += {
	"ACE_RangeTable_82mm"
	};
};
class samg : r
{
    displayName = "AA Missile Specialist";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_1("rhs_fim92_mag")
    };
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    backpackItems[] =
    {
        LIST_1("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"VSM_FullShemagh_Tan"};
    primaryWeapon[] = {"rhs_weap_XM2010"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    hmd[] = {};
    goggles[] = {};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_15Rnd_9x19_JHP")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    headgear[] = {"VSM_FullShemagh_Tan"};
    radios[] = {"ACRE_PRC117F"};
    hmd[] = {};
    goggles[] = {};
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhsusf_cvc_green_alt_helmet"};
    goggles[] = {"rhsusf_shemagh2_gogg_tan"};
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhsusf_cvc_green_alt_helmet"};
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    goggles[] = {"rhsusf_shemagh2_gogg_tan"};
	hmd[] = {};
    items[] += {
	"ToolKit"
	};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    headgear[] = {"rhsusf_cvc_green_alt_helmet"};
    goggles[] = {"rhsusf_shemagh2_gogg_tan"};
	hmd[] = {};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    backpack[] = {"VSM_OGA_Backpack_Kitbag"};
    headgear[] = {"rhsusf_hgu56p_visor_black"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    headgear[] = {"rhsusf_hgu56p_visor_mask_Empire_black","rhsusf_hgu56p_visor_mask_black_skull"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
	hmd[] = {};
	goggles[] = {};
    uniform[] = {"FIR_Fighter_Pilot_Nomex5"};
    vest[] = {"FIR_pilot_vest"};
    headgear[] = {"FIR_JHMCS_II"};
    backPack[] = {"B_AssaultPack_blk"};
    radios[] = {"ACRE_PRC117F"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_JHP")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "ACE_M26_Clacker",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : r
{
    displayName = "UAV Operator";
    backPack[] = {"B_rhsusf_B_BACKPACK"};
};