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
    uniform[] = {"fow_u_uk_bd40_commando_01_private"};
    headgear[] = {"fow_h_uk_beret_commando"};
    vest[] = {"fow_v_uk_base_green"};
    backpack[] = {"fow_b_uk_bergenpack"};
    primaryWeapon[] = {"fow_w_leeenfield_no4mk1"};
    magazines[] =
    {
        LIST_10("fow_10Rnd_303")
    };
};
class g : r
{
    displayName = "Rifleman (GL)";
    magazines[] +=
    {
        LIST_2("fow_e_no36mk1")
    };
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"fow_b_uk_bergenpack_medic"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
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
        LIST_2("fow_e_no36mk1"),
        LIST_1("SmokeShellGreen"),
        LIST_2("SmokeShell")
    };
    linkedItems[] += {"Binocular"};
};
class sl : asl
{
    displayName = "Squad Leader";
    backPack[] = {"B_LIB_US_Radio"};
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
    primaryWeapon[] = {"fow_w_bren"};
    magazines[] =
    {
		LIST_6("fow_30Rnd_303_bren"),
		LIST_2("fow_e_no36mk1")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"fow_b_uk_bergenpack"};
    backpackItems[] =
    {
		LIST_10("fow_30Rnd_303_bren")
    };
    linkedItems[] += {"Binocular"};
};
class mgg : ar
{
    displayName = "MG Gunner";
    primaryWeapon[] = {"fow_w_bren"};
    magazines[] =
    {
        LIST_6("fow_30Rnd_303_bren")
    };
};
class mgag : r
{
    displayName = "MG Assistant Gunner";
    backPack[] = {"fow_b_uk_bergenpack"};
    backpackItems[] =
    {
        LIST_10("fow_30Rnd_303_bren")
    };
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"fow_b_uk_vickers_weapon"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"fow_b_uk_vickers_support"};
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
    primaryWeapon[] = {"LEN_SMLE_No4Mk1T"};
    sidearmWeapon[] = {"fow_w_webley"};
    magazines[] =
    {
        LIST_9("LEN_10Rnd_303"),
        LIST_4("fow_6Rnd_455")
    };
};
class sp : sl
{
    displayName = "Spotter";
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