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
    uniform[] = {"fow_u_ija_type98_snlf"};
    headgear[] = {"fow_h_ija_type90_snlf"};
    backPack[] = {"fow_b_ija_backpack"};
    vest[] = {"fow_v_ija_rifle"};
    primaryWeapon[] = {"fow_w_type99"};
    magazines[] =
    {
        LIST_10("fow_5Rnd_77x58")
    };
};
class g : r
{
    displayName = "Rifleman (GL)";
    vest[] = {"fow_v_ija_grenadier"};
    magazines[] +=
    {
        LIST_2("fow_e_type97")
    };
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"fow_b_ija_ammobox_wood"};
    backpackItems[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"fow_w_type100"};
    magazines[] =
    {
        LIST_5("fow_32Rnd_8x22")
    };
};
class asl : r
{
    displayName = "Assistant Squad Leader Leader";
    vest[] = {"fow_v_ija_nco"};
    primaryWeapon[] = {"fow_w_type100"};
    magazines[] =
    {
        LIST_5("fow_32Rnd_8x22"),
        LIST_2("fow_e_type97"),
        LIST_1("SmokeShellGreen"),
        LIST_2("SmokeShell")
    };
    linkedItems[] += {"Binocular"};
};
class sl : asl
{
    displayName = "Squad Leader";
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
    vest[] = {"fow_v_ija_mg"};
    primaryWeapon[] = {"fow_w_type99_lmg"};
    magazines[] =
    {
		LIST_6("fow_30Rnd_77x58")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"fow_b_ija_backpack"};
    magazines[] +=
    {
		LIST_7("fow_30Rnd_77x58")
    };
    linkedItems[] += {"Binocular"};
};
class mgg : ar
{
    displayName = "MG Gunner";
    vest[] = {"fow_v_ija_mg"};
    primaryWeapon[] = {"fow_w_type99_lmg"};
    magazines[] =
    {
        LIST_5("fow_30Rnd_77x58")
    };
};
class mgag : r
{
    displayName = "MG Assistant Gunner";
    backPack[] = {"fow_b_ija_backpack"};
    magazines[] +=
    {
        LIST_6("fow_30Rnd_77x58")
    };
};
class hmgg : r
{
    displayName = "HMG Gunner";
    vest[] = {"fow_v_ija_mg"};
    primaryWeapon[] = {"fow_w_type99_lmg"};
    magazines[] =
    {
        LIST_5("fow_30Rnd_77x58")
    };
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"fow_b_ija_backpack"};
    magazines[] +=
    {
        LIST_6("fow_30Rnd_77x58")
    };
};
class atg : r
{
    displayName = "AT Gunner";
    magazines[] +=
    {
        LIST_4("fow_e_type99_at")
    };
};
class atac : r
{
    displayName = "AT Assistant Gunner";
    magazines[] +=
    {
        LIST_4("fow_e_type99_at")
    };
};
class hatg : r
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"fow_w_m1a1_bazooka"};
    magazines[] +=
    {
        LIST_2("fow_1Rnd_m6a1")
    };
};
class hatac : r
{
    displayName = "HAT Assistant Gunner";
    magazines[] +=
    {
        LIST_3("fow_1Rnd_m6a1")
    };
};
class mtrg : r
{
    displayName = "Mortar Gunner";
    backPack[] = {"fow_b_ija_type97_mortar_weapon"};
};
class mtrac : r
{
    displayName = "Mortar Assistant";
    backPack[] = {"fow_b_ija_type97_mortar_support"};
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"fow_w_type99_sniper"};
    sidearmWeapon[] = {"fow_w_type14"};
    magazines[] =
    {
        LIST_12("fow_5Rnd_77x58"),
        LIST_4("fow_8Rnd_8x22")
    };
};
class sp : sl
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"fow_u_ija_type98_short"};
    headgear[] = {"fow_h_ija_tank_helmet"};
    goggles[] = {"fow_g_gloves6"};
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
    sidearmWeapon[] = {"fow_w_type14"};
    magazines[] =
    {
        LIST_3("fow_8Rnd_8x22")
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};