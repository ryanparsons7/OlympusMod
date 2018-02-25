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
    uniform[] = {"U_LIB_SOV_Strelok"};
    headgear[] = {"H_LIB_SOV_RA_Helmet"};
    vest[] = {"V_LIB_SOV_RA_MosinBelt"};
    backpack[] = {"B_LIB_SOV_RA_GasBag"};
    primaryWeapon[] = {"LIB_M9130"};
    magazines[] =
    {
        LIST_12("LIB_5Rnd_762x54")
    };
};
class g : r
{
    displayName = "Rifleman (GL)";
    magazines[] +=
    {
        LIST_2("fow_e_mk2")
    };
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"B_LIB_SOV_RA_MedicalBag"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"V_LIB_SOV_RA_PPShBelt"};
    primaryWeapon[] = {"LIB_PPSh41_d"};
    magazines[] =
    {
        LIST_4("LIB_71Rnd_762x25")
    };
};
class asl : r
{
    displayName = "Assistant Squad Leader Leader";
    uniform[] = {"U_LIB_SOV_Sergeant"};
    primaryWeapon[] = {"LIB_PPSh41_m"};
    magazines[] =
    {
        LIST_5("LIB_35Rnd_762x25"),
        LIST_2("fow_e_mk2"),
        LIST_1("SmokeShellGreen"),
        LIST_2("SmokeShell")
    };
    linkedItems[] += {"Binocular"};
};
class sl : asl
{
    displayName = "Squad Leader";
    backPack[] = {"B_LIB_SOV_RA_Radio"};
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
    vest[] = {"V_LIB_SOV_RA_MGBelt"};
    primaryWeapon[] = {"LIB_DP28"};
    magazines[] =
    {
		LIST_5("LIB_47Rnd_762x54"),
		LIST_2("fow_e_mk2")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"fow_v_us_asst_mg"};
    backPack[] = {"B_LIB_SOV_RA_MGAmmoBag"};
    backpackItems[] =
    {
		LIST_5("LIB_47Rnd_762x54")
    };
    linkedItems[] += {"Binocular"};
};
class mgg : ar
{
    displayName = "MG Gunner";
    primaryWeapon[] = {"LIB_DT_OPTIC"};
    magazines[] =
    {
        LIST_7("LIB_63Rnd_762x54")
    };
};
class mgag : r
{
    displayName = "MG Assistant Gunner";
    backPack[] = {"B_LIB_SOV_RA_MGAmmoBag"};
    backpackItems[] =
    {
        LIST_4("LIB_63Rnd_762x54")
    };
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"LIB_Maxim_Bar"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"LIB_Maxim_Bag"};
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
    headgear[] = {};
    uniform[] = {"U_LIB_SOV_Sniper"};
    vest[] = {"V_LIB_SOV_RA_SniperVest"};
    primaryWeapon[] = {"LIB_M9130PU"};
    sidearmWeapon[] = {"LIB_TT33"};
    magazines[] =
    {
        LIST_9("LIB_5Rnd_762x54"),
        LIST_4("LIB_8Rnd_762x25")
    };
};
class sp : sl
{
    displayName = "Spotter";
    headgear[] = {};
    uniform[] = {"U_LIB_SOV_Sniper"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"U_LIB_SOV_Tank_ryadovoi"};
    vest[] = {"V_LIB_SOV_RA_Belt"};
    headgear[] = {"H_LIB_SOV_TankHelmet"};
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