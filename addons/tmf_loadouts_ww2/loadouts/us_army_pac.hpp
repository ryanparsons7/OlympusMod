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
    uniform[] = {"fow_u_us_hbt_01_private","fow_u_us_hbt_02_private"};
    headgear[] = {"fow_h_us_m1","fow_h_us_m1_closed","fow_h_us_m1_folded"};
    vest[] = {"fow_v_us_garand"};
    backpack[] = {"fow_b_us_bandoleer"};
    primaryWeapon[] = {"fow_w_m1_garand"};
    magazines[] =
    {
        LIST_10("fow_8Rnd_762x63")
    };
};
class g : r
{
    displayName = "Rifleman (GL)";
    vest[] = {"fow_v_us_grenade"};
    magazines[] +=
    {
        LIST_6("fow_1Rnd_m9a1"),
        LIST_2("fow_e_mk2")
    };
};
class m : r
{
    displayName = "Medic";
    headgear[] = {"fow_h_us_m1_medic"};
    vest[] = {"fow_v_us_medic"};
    backPack[] = {"B_LIB_USA_Backpack_Vide"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"fow_v_us_thompson"};
    primaryWeapon[] = {"fow_w_m3"};
    magazines[] =
    {
        LIST_5("fow_30Rnd_45acp")
    };
};
class asl : r
{
    displayName = "Assistant Squad Leader Leader";
    primaryWeapon[] = {"fow_w_m1a1_thompson"};
    magazines[] =
    {
        LIST_5("fow_30Rnd_45acp"),
        LIST_2("fow_e_mk2"),
        LIST_1("SmokeShellGreen"),
        LIST_2("SmokeShell")
    };
    linkedItems[] += {"Binocular"};
};
class sl : asl
{
    displayName = "Squad Leader";
    headgear[] = {"fow_h_us_m1_nco"};
    backPack[] = {"B_LIB_US_Radio"};
    vest[] = {"fow_v_us_thompson_nco"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"fow_h_us_m1_officer"};
};
class ps : co
{
    displayName = "Platoon Sergeant";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"fow_v_us_bar"};
    primaryWeapon[] = {"fow_w_m1918a2_acc"};
    attachment[] = {"fow_w_acc_m1918a2_bipod"};
    magazines[] =
    {
		LIST_10("fow_20Rnd_762x63"),
		LIST_2("fow_e_mk2")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"fow_v_us_asst_mg"};
    backPack[] = {"fow_b_us_m1928_asst_bar"};
    backpackItems[] =
    {
		LIST_6("fow_20Rnd_762x63")
    };
    linkedItems[] += {"Binocular"};
};
class mgg : ar
{
    displayName = "MG Gunner";
    primaryWeapon[] = {"fow_w_m1919a6"};
    magazines[] =
    {
        LIST_6("fow_50Rnd_762x63")
    };
};
class mgag : r
{
    displayName = "MG Assistant Gunner";
    backPack[] = {"fow_b_us_m1928_asst_bar"};
    backpackItems[] =
    {
        LIST_3("fow_50Rnd_762x63")
    };
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"fow_b_usa_m1919_weapon"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"fow_b_usa_m1919_support"};
};
class atg : r
{
    displayName = "AT Gunner";
    backPack[] = {"fow_b_us_rocket_bag_at"};
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
    backpackItems[] =
    {
        LIST_2("fow_1Rnd_m6a1")
    };
};
class atac : r
{
    displayName = "AT Assistant Gunner";
    backPack[] = {"fow_b_us_rocket_bag_at"};
    backpackItems[] =
    {
        LIST_2("fow_1Rnd_m6a1")
    };
};
class hatg : r
{
    displayName = "HAT Gunner";
    backPack[] = {"fow_b_us_rocket_bag_at"};
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
    backpackItems[] =
    {
        LIST_2("fow_1Rnd_m6a1")
    };
};
class hatac : r
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"fow_b_us_rocket_bag_at"};
    backpackItems[] =
    {
        LIST_2("fow_1Rnd_m6a1")
    };
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
    vest[] = {"fow_v_us_45"};
    headgear[] = {"fow_h_us_m1_net"};
    primaryWeapon[] = {"fow_w_m1903A1_sniper"};
    sidearmWeapon[] = {"fow_w_m1911"};
    magazines[] =
    {
        LIST_7("fow_5Rnd_762x63"),
        LIST_4("fow_7Rnd_45acp")
    };
};
class sp : sl
{
    displayName = "Spotter";
    headgear[] = {"fow_h_us_m1_net"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_LIB_US_Helmet_Tank"};
    goggles[] = {"fow_g_gloves5"};
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
    sidearmWeapon[] = {"LIB_Colt_M1911"};
    magazines[] =
    {
        LIST_3("LIB_7Rnd_45ACP")
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};