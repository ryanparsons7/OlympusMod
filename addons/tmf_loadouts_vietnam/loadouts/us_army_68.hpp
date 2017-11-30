/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"UNS_ARMY_BDU"};
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
    headgear[] = {"UNS_M1_1A","UNS_M1_2A","UNS_M1_3A","UNS_M1_4A","UNS_M1_5A","UNS_M1_6A","UNS_M1_7A","UNS_M1_8A","UNS_M1_1B","UNS_M1_25"};
    vest[] = {"UNS_M1956_A1","UNS_M1956_A2","UNS_M1956_A3","UNS_M1956_A4","UNS_M1956_A5","UNS_M1956_A6","UNS_M1956_A7","UNS_M1956_A8","UNS_M1956_A9","UNS_M1956_A10","UNS_M1956_A11","UNS_M1956_A12"};
    backpack[] = {"UNS_Alice_F1","UNS_Alice_F2","UNS_Alice_F3","UNS_Alice_F4","UNS_Alice_F5","UNS_Alice_F6","UNS_Alice_F7","UNS_Alice_F8","UNS_Alice_F9"};
    primaryWeapon[] = {"uns_M16A1"};
    sidearmWeapon[] = {"uns_m1911"};
    magazines[] =
    {
        LIST_6("uns_30Rnd_556x45_Stanag"),
        LIST_2("uns_30Rnd_556x45_Stanag_T"),
		LIST_3("uns_m1911mag"),
        LIST_2("uns_m61gren"),
        LIST_2("uns_m18white")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"uns_m79"};
    magazines[] =
    {
		LIST_1("uns_m406vest"),
		LIST_2("uns_1Rnd_AB_M397"),
		LIST_1("uns_40mm_green"),
		LIST_1("uns_40mm_red"),
		LIST_3("uns_m1911mag"),
        LIST_2("uns_m61gren"),
        LIST_2("uns_m18white")
    };
};
class shotgun : r
{
    displayName = "Shotgunner";
    primaryWeapon[] = {"uns_model12"};
    magazines[] =
    {
        LIST_6("uns_12gaugemag_6"),
        LIST_4("uns_12gaugemag_6f"),
        LIST_2("uns_m61gren"),
        LIST_2("uns_m18white"),
		LIST_3("uns_m1911mag")
    };
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"UNS_ARMY_MED"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"uns_m3a1"};
    scope[] = {};
    magazines[] =
    {
        LIST_6("uns_m3a1mag"),
		LIST_3("uns_m1911mag"),
        "uns_m61gren",
        LIST_2("uns_m18white")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("uns_m18Green"),
        LIST_2("uns_m18Red")
	};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backPack[] = {"UNS_ARMY_RTO"};
    radios[] = {"ACRE_PRC117F"};
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
    primaryWeapon[] = {"uns_m60"};
    magazines[] =
    {
        LIST_3("uns_m60mag"),
        LIST_3("uns_m1911mag"),
        "uns_m61gren",
        "uns_m18white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("uns_m60mag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"uns_m72"};
    backpackItems[] = {
        LIST_1("uns_m72rocket")
	};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"uns_model70_iron"};
    scope[] = {"uns_o_RedfieldART_m70"};
    attachment[] = {"uns_b_m70_camo"};
    magazines[] =
    {
        LIST_6("uns_model70mag"),
        LIST_2("uns_model70mag_T"),
        LIST_2("uns_m61gren"),
        LIST_2("uns_m18white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"uns_m60support"};
    magazines[] =
    {
        LIST_4("uns_m60mag_200"),
		LIST_3("uns_m1911mag"),
        "uns_m61gren",
        "uns_m18white"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("uns_m60mag_200")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("uns_m60mag_200")
    };
    linkedItems[] += {"Binocular"};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"uns_m2_high_US_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"uns_m2_high_US_Bag"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"uns_Tripod_Bag"};
    linkedItems[] += {"Binocular"};
};
class matg : r
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"uns_m72"};
    backpackItems[] = {
        LIST_1("uns_m72rocket")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {"uns_m72"};
    backpackItems[] = {
        LIST_1("uns_m72rocket")
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
    secondaryWeapon[] = {"uns_m20_bazooka"};
    backpackItems[] = {
        LIST_3("uns_M28A2_mag")
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpackItems[] = {
        LIST_3("uns_M28A2_mag")
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
    backPack[] = {"uns_M2_60mm_mortar_US_Bag"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"uns_M2_60mm_mortar_US_Bag"};
};
class mtrag : r
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"uns_Tripod_Bag"};
};
class samg : r
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"uns_sa7b"};
    magazines[] +=
    {
        LIST_2("uns_sa7bmag")
    };
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    backpackItems[] =
    {
        LIST_2("uns_sa7bmag")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"UNS_TIGER2_BDU"};
    headgear[] = {"UNS_Boonie_TIG2"};
    primaryWeapon[] = {"uns_M40_base"};
    scope[] = {"uns_o_RedfieldART"};
    magazines[] =
    {
        LIST_9("uns_m40mag"),
        LIST_2("uns_m61gren"),
        LIST_4("uns_m1911mag")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
};
class sp : ftl
{
    displayName = "Spotter";
    uniform[] = {"UNS_TIGER2_BDU"};
    headgear[] = {"UNS_Boonie_TIG2"};
    radios[] = {"ACRE_PRC117F"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"UNS_ARMY_BDU_F"};
    vest[] = {"UNS_M1956_T1"};
    headgear[] = {"UNS_TC_1"};
    radios[] = {"ACRE_PRC117F"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"UNS_ARMY_BDU_F"};
    vest[] = {"UNS_M1956_T1"};
    headgear[] = {"UNS_TC_1"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    uniform[] = {"UNS_ARMY_BDU_F"};
    vest[] = {"UNS_M1956_T1"};
    headgear[] = {"UNS_TC_1"};
};
class pp : baseMan
{
    displayName = "Helicopter Pilot";
    uniform[] = {"UNS_ARMY_BDU_101stAB662ndlt"};
    vest[] = {"UNS_FLAK"};
    backPack[] = {"UNS_USMC_RTO"};
    headgear[] = {"UNS_HP_Helmet"};
    radios[] = {"ACRE_PRC117F"};
    sidearmWeapon[] = {"uns_38spec"};
    magazines[] =
    {
        LIST_4("uns_38specmag")
    };
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    radios[] = {};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"UNS_JPilot_BDU"};
    vest[] = {"UNS_JP_Vest"};
    headgear[] = {"UNS_JP_Helmet"};
    backPack[] = {"UNS_Alice_1"};
    radios[] = {"ACRE_PRC117F"};
    sidearmWeapon[] = {"uns_38spec"};
    magazines[] =
    {
        LIST_4("uns_38specmag")
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
        LIST_3("DemoCharge_Remote_Mag")
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