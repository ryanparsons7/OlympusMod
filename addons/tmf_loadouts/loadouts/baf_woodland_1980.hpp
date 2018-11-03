/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
       uniform[] = {"UK3CB_BAF_U_Smock_DPMW"};
       vest[] = {};
       backpack[] = {"UK3CB_BAF_B_Bergen_DPMW_Rifleman_A"};
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
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"UK3CB_BAF_H_Mk6_DPMW_A"};
    vest[] = {"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW"};
    primaryWeapon[] = {"UK3CB_BAF_L1A1"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("UK3CB_BAF_762_20Rnd"),
        LIST_1("HandGrenade"),
        "SmokeShell"
    };
};
class g : r
{
    displayName = "Grenadier";
};
class car : r
{
    displayName = "Carabinier";
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"UK3CB_BAF_B_Carryall_DPMW"};
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
    magazines[] +=
    {
        LIST_2("SmokeShellGreen"),
		"Laserbatteries"
    };
    linkedItems[] += {"UK3CB_BAF_Soflam_Laserdesignator"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    headgear[] = {"UK3CB_BAF_H_Beret_RM_Bootneck_PRR"};
    backPack[] = {"UK3CB_BAF_B_Bergen_DPMW_SL_A"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_7x45acp_MHP")
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
    backPack[] = {"UK3CB_BAF_B_Bergen_DPMW_JTAC_A"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"UK3CB_BAF_L110A1"};
    vest[] = {"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_3("UK3CB_BAF_556_200Rnd"),
        LIST_1("UK3CB_BAF_556_200Rnd_T"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2("UK3CB_BAF_556_200Rnd")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"hlc_optic_suit"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"UK3CB_BAF_L7A2"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd"),
        LIST_1("UK3CB_BAF_762_100Rnd_T"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd")
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
    secondaryWeapon[] = {"rhs_weap_maaws"};
    magazines[] +=
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HEDP"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    magazines[] +=
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HEDP"
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
    backPack[] = {"Redd_Milan_Static_Barrel"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"Redd_Milan_Static_Barrel"};
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"Redd_Milan_Static_Tripod"};
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
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
    primaryWeapon[] = {"UK3CB_BAF_L115A3_Ghillie"};
    scope[] = {"RKSL_optic_PMII_525_wdl"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_9("UK3CB_BAF_338_5Rnd"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_B"};
    radios[] = {"ACRE_PRC117F"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_B"};
    items[] += {
	"ToolKit"
	};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RN"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RAF"};
    vest[] = {"FIR_pilot_vest"};
    headgear[] = {"FIR_JHMCS_II"};
    backPack[] = {"B_AssaultPack_blk"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A"};
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
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A"};
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
    linkedItems[] += {"B_UavTerminal"};
};