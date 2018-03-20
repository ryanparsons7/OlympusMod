/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"BWA3_Uniform_idz_Tropen"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {};
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
    headgear[] = {"BWA3_OpsCore_Tropen"};
    vest[] = {"BWA3_Vest_Rifleman1_Tropen"};
    backpack[] = {"BWA3_Kitbag_Tropen"};
    primaryWeapon[] = {"BWA3_G36_equipped"};
    scope[] = {"BWA3_optic_ZO4x30"};
    attachment[] = {"BWA3_acc_VarioRay_irlaser"};
    magazines[] =
    {
        LIST_8("BWA3_30Rnd_556x45_G36"),
        LIST_2("BWA3_30Rnd_556x45_G36_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"BWA3_Vest_Grenadier_Tropen"};
    primaryWeapon[] = {"BWA3_G36_AG"};
    magazines[] +=
    {
        LIST_5("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"BWA3_G36K"};
    magazines[] =
    {
        LIST_8("BWA3_30Rnd_556x45_G36"),
        LIST_2("BWA3_30Rnd_556x45_G36_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"BWA3_Kitbag_Tropen_Medic"};
    vest[] = {"BWA3_Vest_Medic_Tropen"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {};
    secondaryWeapon[] = {"BWA3_MP7"};
    scope[] = {"BWA3_optic_RSAS"};
    magazines[] =
    {
        LIST_3("BWA3_40Rnd_46x30_MP7"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"BWA3_Vest_Leader_Tropen"};
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
    sidearmWeapon[] = {"BWA3_P8"};
    magazines[] +=
    {
        LIST_3("BWA3_15Rnd_9x19_P8")
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
    vest[] = {"BWA3_Vest_Autorifleman_Tropen"};
    primaryWeapon[] = {"BWA3_MG4_equipped"};
    sidearmWeapon[] = {"BWA3_P8"};
    magazines[] =
    {
		LIST_3("BWA3_200Rnd_556x45"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("BWA3_15Rnd_9x19_P8")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
		LIST_2("BWA3_200Rnd_556x45")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"BWA3_Pzf3"};
    magazines[] += {
        "BWA3_Pzf3_IT"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"BWA3_G28_Standard_equipped"};
    scope[] = {"BWA3_optic_20x50"};
    magazines[] =
    {
        LIST_10("BWA3_10Rnd_762x51_G28"),
        LIST_2("BWA3_10Rnd_762x51_G28_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"BWA3_MG5_equipped"};
    vest[] = {"BWA3_Vest_Autorifleman_Tropen"};
    magazines[] =
    {
        LIST_4("BWA3_120Rnd_762x51_soft"),
        LIST_2("BWA3_120Rnd_762x51_Tracer_soft"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("BWA3_15Rnd_9x19_P8")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("BWA3_120Rnd_762x51_soft")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("BWA3_120Rnd_762x51_soft")
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
    secondaryWeapon[] = {"BWA3_RGW90"};
    magazines[] += {
        "BWA3_RGW90_HH"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {"BWA3_RGW90"};
    magazines[] += {
        "BWA3_RGW90_HH"
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"Binocular"};
};
class hatg : r
{
    displayName = "HAT Gunner";
    backPack[] = {"VSM_Multicam_carryall"};
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpackItems[] = {
        "rhs_fgm148_magazine_AT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"VSM_Multicam_carryall"};
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
    displayName = "Mortar Ammo Carrier";
    items[] += {
	"ACE_RangeTable_82mm"
	};
};
class mtrag : r
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    items[] += {
	"ACE_RangeTable_82mm"
	};
};
class samg : r
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_1("rhs_fim92_mag")
    };
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    backpackItems[] =
    {
        LIST_1("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"BWA3_Uniform_Ghillie_idz_Tropen"};
    primaryWeapon[] = {"UK3CB_BAF_L115A3_Ghillie"};
    scope[] = {"optic_LRPS"};
    sidearmWeapon[] = {"BWA3_P8"};
    magazines[] =
    {
        LIST_9("UK3CB_BAF_338_5Rnd"),
        LIST_2("HandGrenade"),
        LIST_4("BWA3_15Rnd_9x19_P8")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    uniform[] = {"BWA3_Uniform_Ghillie_idz_Tropen"};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
    goggles[] = {"BWA3_G_Combat_Clear"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
    goggles[] = {"BWA3_G_Combat_Clear"};
	hmd[] = {};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
    goggles[] = {"BWA3_G_Combat_Clear"};
	hmd[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    hmd[] = {};
    headgear[] = {"BWA3_Knighthelm"};
    uniform[] = {"BWA3_Uniform_Helipilot"};
    vest[] = {"BWA3_Vest_Tropen"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
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
    sidearmWeapon[] = {"BWA3_P8"};
    magazines[] =
    {
        LIST_4("BWA3_15Rnd_9x19_P8")
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
    backPack[] = {"B_UAV_01_backpack_F"};
};