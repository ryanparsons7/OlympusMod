/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"OPTRE_UNSC_Army_Uniform_WDL"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {};
       hmd[] = {"OPTRE_NVG"};
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
    headgear[] = {"OPTRE_UNSC_CH252_Helmet_WDL"};
    vest[] = {"OPTRE_UNSC_M52A_Armor_Rifleman_WDL"};
    backPack[] = {"OPTRE_UNSC_Rucksack"};
    primaryWeapon[] = {"OPTRE_MA37"};
    magazines[] =
    {
        LIST_6("OPTRE_32Rnd_762x51_Mag"),
        LIST_1("OPTRE_M9_Frag"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"OPTRE_MA37GL"};
    magazines[] +=
    {
        LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"OPTRE_BR55HB"};
    scope[] = {"optre_br55hb_scope"};
    magazines[] =
    {
        LIST_6("OPTRE_36Rnd_95x40_Mag"),
        LIST_1("OPTRE_M9_Frag"),
        LIST_2("SmokeShell")
    };
};
class m : r
{
    displayName = "Medic";
    headgear[] = {"OPTRE_UNSC_CH252_Helmet2_WDL_MED"};
    vest[] = {"OPTRE_UNSC_M52A_Armor_Medic_WDL"};
    backPack[] = {"OPTRE_UNSC_Rucksack_Medic"};
    items[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"OPTRE_M7"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("OPTRE_60Rnd_5x23mm_Mag"),
        "OPTRE_M9_Frag",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"OPTRE_UNSC_M52A_Armor_TL_WDL"};
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
    sidearmWeapon[] = {"OPTRE_M6C"};
    magazines[] +=
    {
        LIST_3("OPTRE_12Rnd_127x40_Mag")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    backPack[] = {"OPTRE_ANPRC_521_Green"};
    radios[] = {"ACRE_PRC117F"};
};
class jtac : co
{
    displayName = "Joint Terminal Attack Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"OPTRE_UNSC_M52A_Armor_MG_WDL"};
    backPack[] = {"OPTRE_UNSC_Rucksack_Heavy"};
    primaryWeapon[] = {"OPTRE_M73"};
    scope[] = {"optre_m73_smartlink"};
    bipod[] = {"bipod_01_f_blk"};
    sidearmWeapon[] = {"OPTRE_M6C"};
    magazines[] =
    {
        LIST_3("OPTRE_200Rnd_95x40_Box"),
        "OPTRE_M9_Frag",
        "SmokeShell",
        LIST_2("OPTRE_12Rnd_127x40_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"OPTRE_UNSC_Rucksack_Heavy"};
    backpackItems[] =
    {
        LIST_3("OPTRE_200Rnd_95x40_Box")
    };
    linkedItems[] += {"OPTRE_Binoculars"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"OPTRE_M392_DMR"};
    scope[] = {"optre_m392_scope"};
    magazines[] =
    {
        LIST_7("OPTRE_15Rnd_762x51_Mag"),
        LIST_2("OPTRE_15Rnd_762x51_Mag_Tracer"),
        LIST_1("OPTRE_M9_Frag"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
};
class hmgg : ar
{
    displayName = "HMG Gunner";
};
class hmgac : aar
{
    displayName = "HMG Ammo Carrier";
};
class hmgag : aar
{
    displayName = "HMG Assistant Gunner";
};
class matg : r
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"OPTRE_M41_SSR"};
    backpackItems[] = {
        LIST_2("OPTRE_M41_Twin_HEAT"),
        "OPTRE_M41_Twin_HEAP"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] = {
        LIST_2("OPTRE_M41_Twin_HEAT"),
        "OPTRE_M41_Twin_HEAP"
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"OPTRE_Binoculars"};
};
class hatg : r
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"OPTRE_M41_SSR_G"};
    backpackItems[] = {
        LIST_2("OPTRE_M41_Twin_HEAT"),
        "OPTRE_M41_Twin_HEAP"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpackItems[] = {
        LIST_2("OPTRE_M41_Twin_HEAT"),
        "OPTRE_M41_Twin_HEAP"
    };
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] += {"OPTRE_Binoculars"};
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
    primaryWeapon[] = {"OPTRE_SRS99C"};
    scope[] = {"optre_srs99c_scope"};
    sidearmWeapon[] = {"OPTRE_M6C"};
    magazines[] =
    {
        LIST_4("OPTRE_4Rnd_145x114_APFSDS_Mag"),
        LIST_4("OPTRE_4Rnd_145x114_HEDP_Mag"),
        LIST_4("OPTRE_4Rnd_145x114_HVAP_Mag"),
        LIST_1("OPTRE_M9_Frag"),
        LIST_4("OPTRE_12Rnd_127x40_Mag")
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
class vc : r
{
    displayName = "Vehicle Commander";
    backPack[] = {"OPTRE_ANPRC_521_Green"};
    headgear[] = {"H_HelmetCrew_B"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
};
class vd : r
{
    displayName = "Vehicle Driver";
    headgear[] = {"H_HelmetCrew_B"};
	hmd[] = {};
    items[] += {
	"ToolKit"
	};
};
class vg : r
{
    displayName = "Vehicle Gunner";
    headgear[] = {"H_HelmetCrew_B"};
	hmd[] = {};
};
class pp : r
{
    displayName = "Helicopter Pilot";
    uniform[] = {"OPTRE_UNSC_Airforce_Uniform"};
    vest[] = {"OPTRE_UNSC_M52A_Armor_Pilot_AF"};
    headgear[] = {"OPTRE_UNSC_CH252_Helmet2_Vacuum_MAR"};
    backPack[] = {"OPTRE_ANPRC_521_Green"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : pp
{
    displayName = "Jet pilot";
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_4("C12_Remote_Mag"),
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_4("UNSCMine_Range_Mag"),
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class UAV : r
{
    displayName = "UAV Operator";
    backPack[] = {"B_rhsusf_B_BACKPACK"};
};