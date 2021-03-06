/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {};
       hmd[] = {"UK3CB_BAF_HMNVS"};
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
    headgear[] = {"UK3CB_BAF_H_Mk7_Net_D"};
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A","UK3CB_BAF_V_Osprey_Rifleman_B","UK3CB_BAF_V_Osprey_Rifleman_C","UK3CB_BAF_V_Osprey_Rifleman_D","UK3CB_BAF_V_Osprey_Rifleman_E","UK3CB_BAF_V_Osprey_Rifleman_F"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B"};
    primaryWeapon[] = {"UK3CB_BAF_L85A2_RIS"};
    scope[] = {"RKSL_optic_LDS"};
    attachment[] = {"uk3cb_baf_llm_flashlight_black"};
    magazines[] =
    {
        LIST_8("UK3CB_BAF_556_30Rnd"),
        LIST_2("UK3CB_BAF_556_30Rnd_T"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"UK3CB_BAF_V_Osprey_Grenadier_A","UK3CB_BAF_V_Osprey_Grenadier_B"};
    primaryWeapon[] = {"UK3CB_BAF_L85A2_UGL"};
    magazines[] +=
    {
        LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"UK3CB_BAF_L22"};
    magazines[] =
    {
        LIST_8("UK3CB_BAF_556_30Rnd"),
        LIST_2("UK3CB_BAF_556_30Rnd_T"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : r
{
    displayName = "Medic";
    vest[] = {"UK3CB_BAF_V_Osprey_Medic_A","UK3CB_BAF_V_Osprey_Medic_B","UK3CB_BAF_V_Osprey_Medic_C","UK3CB_BAF_V_Osprey_Medic_D"};
    backPack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_L_A","UK3CB_BAF_B_Bergen_MTP_Medic_L_B","UK3CB_BAF_B_Bergen_MTP_Medic_H_A","UK3CB_BAF_B_Bergen_MTP_Medic_H_B"};
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
    vest[] = {"UK3CB_BAF_V_Osprey_SL_C"};
    scope[] = {"RKSL_optic_LDS"};
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
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    backPack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_H_A","UK3CB_BAF_B_Bergen_MTP_Radio_H_B","UK3CB_BAF_B_Bergen_MTP_Radio_L_A","UK3CB_BAF_B_Bergen_MTP_Radio_L_B"};
    magazines[] +=
    {
        LIST_3("UK3CB_BAF_9_17Rnd"),
		"Laserbatteries"
    };
	linkedItems[] += {"UK3CB_BAF_Soflam_Laserdesignator"};
};
class co : sl
{
    displayName = "Platoon Leader";
    radios[] = {"ACRE_PRC117F"};
};
class jtac : co
{
    displayName = "Joint Terminal Attack Controller";
    backPack[] = {"UK3CB_BAF_B_Bergen_MTP_JTAC_H_A"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"UK3CB_BAF_V_Osprey_MG_B"};
    primaryWeapon[] = {"UK3CB_BAF_L7A2"};
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    magazines[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd"),
        LIST_1("UK3CB_BAF_762_100Rnd_T"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_4("UK3CB_BAF_9_17Rnd")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd"),
        LIST_1("UK3CB_BAF_762_100Rnd_T")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
	backpackItems[] =
    {
        LIST_2("UK3CB_BAF_762_100Rnd")
    };
    secondaryWeapon[] = {"UK3CB_BAF_AT4_CS_AT_Launcher"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"UK3CB_BAF_L129A1"};
	sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    scope[] = {"uk3cb_baf_ta648_308"};
    magazines[] =
    {
        LIST_6("UK3CB_BAF_762_L42A1_20Rnd"),
        LIST_2("UK3CB_BAF_762_L42A1_20Rnd_T"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_4("UK3CB_BAF_9_17Rnd"),
		"ACE_RangeCard"
    };
	linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"UK3CB_BAF_L7A2"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("UK3CB_BAF_762_100Rnd"),
        LIST_2("UK3CB_BAF_762_100Rnd_T"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("UK3CB_BAF_9_17Rnd")
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
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
	secondaryWeapon[] = {"launch_NLAW_F"};
    linkedItems[] += {"Binocular"};
};
class hatg : r
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backPack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A"};
    magazines[] +=	
	{
        LIST_2("rhs_fgm148_magazine_AT")
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
   backPack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A"};
   magazines[] +=	
	{
        LIST_2("rhs_fgm148_magazine_AT")
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
	linkedItems[] += {"Binocular"};
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
        LIST_2("rhs_fim92_mag")
    };
	linkedItems[] += {"Binocular"};
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
    primaryWeapon[] = {"UK3CB_BAF_L115A3_Ghillie"};
    scope[] = {"rhsusf_acc_m8541_low_wd"};
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    magazines[] =
    {
        LIST_9("UK3CB_BAF_338_5Rnd"),
        LIST_1("HandGrenade"),
        LIST_4("UK3CB_BAF_9_17Rnd")
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
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_A"};
    backPack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
    radios[] = {"ACRE_PRC117F"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_A"};
    backPack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
    items[] += {
	"ToolKit"
	};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_A"};
    backPack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
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
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    magazines[] =
    {
        LIST_4("UK3CB_BAF_9_17Rnd")
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