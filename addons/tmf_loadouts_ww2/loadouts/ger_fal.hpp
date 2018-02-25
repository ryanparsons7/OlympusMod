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
    uniform[] = {"fow_u_ger_fall_03_private"};
    headgear[] = {"fow_h_ger_m40_fall_01_camo"};
    vest[] = {"fow_v_fall_bandoleer"};
    primaryWeapon[] = {"fow_w_k98"};
    magazines[] =
    {
        LIST_10("fow_5Rnd_792x57")
    };
};
class g : r
{
    displayName = "Rifleman (GL)";
    vest[] = {"fow_v_fall_bandoleer"};
    magazines[] +=
    {
        LIST_2("fow_e_m24")
    };
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"B_LIB_GER_Rucksack_Medic"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"fow_v_heer_mp40"};
    primaryWeapon[] = {"fow_w_mp40"};
    magazines[] =
    {
        LIST_5("fow_32Rnd_9x19_mp40")
    };
};
class asl : r
{
    displayName = "Assistant Squad Leader Leader";
    uniform[] = {"fow_u_ger_fall_03_sergeant"};
    vest[] = {"fow_v_heer_mp44"};
    primaryWeapon[] = {"fow_w_stg44"};
    magazines[] =
    {
        LIST_5("fow_30Rnd_792x33"),
        LIST_2("fow_e_m24"),
        LIST_1("SmokeShellGreen"),
        LIST_2("SmokeShell")
    };
    linkedItems[] += {"Binocular"};
};
class sl : asl
{
    displayName = "Squad Leader";
    uniform[] = {"fow_u_ger_fall_03_sergeant"};
    backPack[] = {"B_LIB_GER_Radio"};
};
class co : sl
{
    displayName = "Platoon Leader";
};
class ps : co
{
    displayName = "Platoon Sergeant";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"fow_v_heer_mg"};
    primaryWeapon[] = {"fow_w_fg42"};
    magazines[] =
    {
		LIST_6("fow_20Rnd_792x57")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"fow_b_ammoboxes"};
    magazines[] +=
    {
		LIST_7("fow_20Rnd_792x57")
    };
    linkedItems[] += {"Binocular"};
};
class mgg : ar
{
    displayName = "MG Gunner";
    vest[] = {"fow_v_heer_mg"};
    primaryWeapon[] = {"fow_w_mg42"};
    magazines[] =
    {
        LIST_4("fow_50Rnd_792x57")
    };
};
class mgag : r
{
    displayName = "MG Assistant Gunner";
    backPack[] = {"fow_b_ammoboxes"};
    magazines[] +=
    {
        LIST_6("fow_50Rnd_792x57")
    };
};
class hmgg : r
{
    displayName = "HMG Gunner";
    vest[] = {"fow_v_heer_mg"};
    primaryWeapon[] = {"fow_w_mg42"};
    magazines[] =
    {
        LIST_4("fow_50Rnd_792x57")
    };
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"fow_b_ammoboxes"};
    magazines[] +=
    {
        LIST_6("fow_50Rnd_792x57")
    };
};
class atg : r
{
    displayName = "AT Gunner";
    secondaryWeapon[] = {"fow_w_pzfaust_30"};
};
class atac : r
{
    displayName = "AT Assistant Gunner";
    secondaryWeapon[] = {"fow_w_pzfaust_30"};
};
class hatg : r
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"fow_w_pzfaust_30"};
};
class hatac : r
{
    displayName = "HAT Assistant Gunner";
    secondaryWeapon[] = {"fow_w_pzfaust_30"};
};
class mtrg : r
{
    displayName = "Mortar Gunner";
    backPack[] = {"fow_b_us_m2_mortar_weapon"};
};
class mtrac : r
{
    displayName = "Mortar Assistant";
    backPack[] = {"fow_b_us_m2_mortar_support"};
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"fow_w_k98_scoped"};
    sidearmWeapon[] = {"fow_w_p08"};
    magazines[] =
    {
        LIST_12("fow_5Rnd_792x57"),
        LIST_4("fow_8Rnd_9x19")
    };
};
class sp : sl
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"fow_u_ger_tankcrew_01"};
    headgear[] = {"fow_h_ger_feldmutze_panzer"};
    goggles[] = {"fow_g_gloves4"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
};
class vg : vc
{
    displayName = "Vehicle Gunner";
};
class p : baseMan
{
    displayName = "Pilot";
    uniform[] = {"U_LIB_US_Pilot"};
    vest[] = {"V_LIB_US_LifeVest"};
    headgear[] = {"H_LIB_US_Helmet_Pilot"};
    backPack[] = {"B_LIB_US_TypeA3"};
    sidearmWeapon[] = {"fow_w_p08"};
    magazines[] =
    {
        LIST_3("fow_8Rnd_9x19")
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};