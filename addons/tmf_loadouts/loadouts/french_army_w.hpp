/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"R3F_uniform_f1","R3F_uniform_apso"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {};
       hmd[] = {"NVGoggles_OPFOR"};
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
    headgear[] = {"R3F_casque_spectra"};
    vest[] = {"R3F_veste_ce300"};
    backpack[] = {"R3F_sac_moyen_CE"};
    primaryWeapon[] = {"R3F_Famas_F1"};
    scope[] = {"R3F_AIMPOINT"};
    attachment[] = {"R3F_LAMPE_SURB"};
    magazines[] =
    {
        LIST_8("R3F_25Rnd_556x45_FAMAS"),
        LIST_2("R3F_25Rnd_556x45_TRACER_FAMAS"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"R3F_Famas_F1_M203"};
    magazines[] +=
    {
        LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : r
{
    displayName = "Medic";
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
    scope[] = {"R3F_J4"};
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
    sidearmWeapon[] = {"R3F_PAMAS"};
    magazines[] +=
    {
        LIST_3("R3F_15Rnd_9x19_PAMAS")
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
    primaryWeapon[] = {"R3F_Minimi_762"};
    sidearmWeapon[] = {"R3F_PAMAS"};
    magazines[] =
    {
		LIST_6("R3F_100Rnd_762x51_MINIMI"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("R3F_15Rnd_9x19_PAMAS")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
		LIST_4("R3F_100Rnd_762x51_MINIMI")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"R3F_HK417L"};
    scope[] = {"R3F_J8_MILDOT"};
    magazines[] =
    {
        LIST_6("R3F_20Rnd_762x51_HK417"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"UK3CB_BAF_L7A2"};
    scope[] = {"R3F_J4"};
    magazines[] =
    {
        LIST_5("UK3CB_BAF_762_100Rnd"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("R3F_15Rnd_9x19_PAMAS")
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
    secondaryWeapon[] = {"R3F_ERYX"};
    backpackItems[] =
    {
        LIST_1("R3F_ERYX_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("R3F_ERYX_mag")
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
    backPack[] = {"B_Carryall_mcamo"};
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpackItems[] = {
        "rhs_fgm148_magazine_AT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_Carryall_mcamo"};
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
    uniform[] = {"U_B_GhillieSuit"};
    primaryWeapon[] = {"R3F_TAC50"};
    scope[] = {"R3F_J8_DES"};
    sidearmWeapon[] = {"R3F_PAMAS"};
    magazines[] =
    {
        LIST_9("R3F_5Rnd_127x99_TAC50"),
        LIST_1("HandGrenade"),
        LIST_4("R3F_15Rnd_9x19_PAMAS")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    uniform[] = {"U_B_GhillieSuit"};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"R3F_casque_equipage"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"R3F_casque_equipage"};
	hmd[] = {};
    items[] += {
	"ToolKit"
	};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"R3F_casque_equipage"};
	hmd[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhsusf_hgu56p"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    headgear[] = {"rhsusf_hgu56p_visor_mask"};
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
    sidearmWeapon[] = {"R3F_PAMAS"};
    magazines[] =
    {
        LIST_4("R3F_15Rnd_9x19_PAMAS")
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