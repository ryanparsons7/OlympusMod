/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"fow_u_us_m37_01_private"};
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
    headgear[] = {"fow_h_us_m1","fow_h_us_m1_closed","fow_h_us_m1_folded"};
    vest[] = {"fow_v_us_grenade"};
    backpack[] = {"fow_b_us_m1928"};
    primaryWeapon[] = {"fow_w_m1_garand"};
    magazines[] =
    {
        LIST_10("fow_8Rnd_762x63"),
        LIST_2("fow_e_mk2"),
        LIST_2("LIB_US_M18")
    };
};
class g : r
{
    displayName = "Grenadier";
    magazines[] +=
    {
		LIST_5("fow_1Rnd_m9a1")
    };
};
class car : r
{
    displayName = "Carbiner";
    primaryWeapon[] = {"fow_w_m1_carbine"};
    magazines[] =
    {
        LIST_5("fow_15Rnd_762x33"),
        LIST_2("fow_e_mk2"),
        LIST_2("LIB_US_M18")
    };
};
class m : car
{
    displayName = "Medic";
    headgear[] = {"fow_h_us_m1_medic"};
    vest[] = {"fow_v_us_medic"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"fow_v_us_thompson"};
    primaryWeapon[] = {"fow_w_m1_thompson"};
    magazines[] =
    {
        LIST_5("fow_30Rnd_45acp"),
        LIST_2("fow_e_mk2"),
        LIST_2("LIB_US_M18")
    };
};
class ftl : smg
{
    displayName = "Fireteam Leader";
    vest[] = {"fow_v_us_thompson_nco"};
    headgear[] = {"fow_h_us_m1_nco"};
    sidearmWeapon[] = {"fow_w_m1911"};
    magazines[] +=
    {
        LIST_2("fow_7Rnd_45acp"),
        LIST_1("LIB_US_M18_Green"),
        LIST_1("LIB_US_M18_Red")
	};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"fow_h_us_m1_officer"};
    backPack[] = {"fow_b_us_radio"};
};
class co : sl
{
    displayName = "Platoon Leader";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"fow_v_us_ab_bar"};
    primaryWeapon[] = {"fow_w_m1918a2"};
    sidearmWeapon[] = {"fow_w_m1911"};
    magazines[] =
    {
        LIST_3("fow_30Rnd_45acp"),
        LIST_5("fow_20Rnd_762x63"),
        LIST_3("fow_7Rnd_45acp"),
        "fow_e_mk2",
        "LIB_US_M18"
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"fow_v_us_asst_mg"};
    backpackItems[] =
    {
        LIST_5("fow_20Rnd_762x63")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
    backpackItems[] = {
        LIST_1("fow_1Rnd_m6a1")
	};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"fow_w_m1919a6"};
    magazines[] =
    {
        LIST_3("fow_100Rnd_762x63"),
		LIST_3("fow_7Rnd_45acp"),
        "fow_e_mk2",
        "LIB_US_M18"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("fow_100Rnd_762x63")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("fow_100Rnd_762x63")
    };
    linkedItems[] += {"Binocular"};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"fow_b_usa_m1919_weapon"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"fow_b_usa_m1919_weapon"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"fow_b_usa_m1919_support"};
    linkedItems[] += {"Binocular"};
};
class matg : r
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
    backpackItems[] = {
        LIST_1("fow_1Rnd_m6a1")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
    backpackItems[] = {
        LIST_1("fow_1Rnd_m6a1")
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
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
    backpackItems[] = {
        LIST_3("fow_1Rnd_m6a1")
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpackItems[] = {
        LIST_3("fow_1Rnd_m6a1")
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
    backPack[] = {"fow_b_us_m2_mortar_weapon"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"fow_b_us_m2_mortar_weapon"};
};
class mtrag : r
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"fow_b_us_m2_mortar_support"};
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
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"fow_w_m1903A1_sniper"};
    sidearmWeapon[] = {"fow_w_m1911"};
    magazines[] =
    {
        LIST_9("fow_5Rnd_762x63"),
        LIST_2("fow_e_mk2"),
        LIST_4("fow_7Rnd_45acp")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
};
class sp : ftl
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"fow_u_us_pilot_01"};
    vest[] = {"fow_v_us_thompson"};
    headgear[] = {"fow_h_us_m1_closed"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"fow_u_us_pilot_01"};
    vest[] = {"fow_v_us_thompson"};
    headgear[] = {"fow_h_us_m1_closed"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    uniform[] = {"fow_u_us_pilot_01"};
    vest[] = {"fow_v_us_thompson"};
    headgear[] = {"fow_h_us_m1_closed"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"fow_u_us_pilot_02"};
    vest[] = {"fow_v_usmc_45"};
    headgear[] = {"fow_h_us_flight_helmet"};
    backPack[] = {"fow_b_us_radio"};
    sidearmWeapon[] = {"fow_w_m1911"};
    magazines[] =
    {
        LIST_4("fow_7Rnd_45acp")
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
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