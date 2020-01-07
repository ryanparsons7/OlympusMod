/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
       uniform[] = {"UK3CB_BAF_U_Smock_DDPM"};
       vest[] = {};
       backpack[] = {"UK3CB_BAF_B_Bergen_DDPM_Rifleman_A"};
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
    headgear[] = {"UK3CB_BAF_H_Mk6_DDPM_A"};
    vest[] = {"UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM"};
    primaryWeapon[] = {"UK3CB_BAF_L1A1"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("UK3CB_BAF_762_20Rnd"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
	backpackItems[] =
    {
        LIST_1("UK3CB_M79"),
		LIST_4("1Rnd_HE_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";

};
class m : r
{
    displayName = "Medic";
    backPack[] = {"UK3CB_BAF_B_Bergen_DDPM_Rifleman_B"};
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
	backPack[] = {"UK3CB_BAF_B_Bergen_DDPM_SL_A"};
    magazines[] +=
    {
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    headgear[] = {"UK3CB_BAF_H_Beret_SG_PRR"};
    magazines[] +=
    {
        LIST_3("UK3CB_BAF_9_13Rnd"),
		"Laserbatteries"
    };
	linkedItems[] += {"Laserdesignator"};
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
    displayName = "GPMG Gunner";
    primaryWeapon[] = {"UK3CB_BAF_L7A2"};
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd"),
        LIST_1("UK3CB_BAF_762_100Rnd_T"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_4("UK3CB_BAF_9_13Rnd")
    };
};
class aar : r
{
    displayName = "Assistant GPMG Rifleman";
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
    secondaryWeapon[] = {"rhs_weap_m72a7"};
	backpackItems[] =
    {
        LIST_2("UK3CB_BAF_762_100Rnd")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"uk3cb_baf_suit"};
	linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd"),
        LIST_1("UK3CB_BAF_762_100Rnd_T")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    
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
        LIST_1("rhs_mag_maaws_HEAT"),
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
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
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
    primaryWeapon[] = {"UK3CB_Enfield_Rail"};
    scope[] = {"rhsusf_acc_m8541_low"};
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] =
    {
        LIST_9("UK3CB_Enfield_Mag"),
        LIST_1("HandGrenade"),
		LIST_1("SmokeShell"),
        LIST_4("UK3CB_BAF_9_13Rnd")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_B"};
    radios[] = {"ACRE_PRC117F"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_B"};
    items[] += {
	"ToolKit"
	};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_Army"};
    vest[] = {"UK3CB_BAF_V_Pilot_DDPM"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"UK3CB_BAF_V_Osprey_DDPM1"};
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
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] =
    {
        LIST_4("UK3CB_BAF_9_13Rnd")
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