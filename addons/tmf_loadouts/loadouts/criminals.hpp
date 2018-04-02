/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
	   uniform[] = {"sfp_criminal_uniform2","sfp_criminal_uniform3"};
       vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {"G_Balaclava_blk","G_Balaclava_oli","rhs_balaclava","rhs_balaclava1_olive"};
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
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {
		LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
	};
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
class criminalak : baseMan
{
    displayName = "Criminal (AK47)";
    primaryWeapon[] = {"rhs_weap_akm"};
    magazines[] +=
    {
        LIST_4("rhs_30Rnd_762x39mm")
    };
};
class criminalshot : baseMan
{
    displayName = "Criminal (Shotgun)";
    primaryWeapon[] += {"rhs_weap_Izh18"};
    magazines[] +=
    {
        LIST_20("rhsgref_1Rnd_00Buck")
    };
};
class criminalsn : baseMan
{
    displayName = "Criminal (Sniper)";
    primaryWeapon[] = {"rhs_weap_m38_rail"};
    scope[] = {"optic_LRPS"};
    magazines[] +=
    {
        LIST_7("rhsgref_5Rnd_762x54_m38")
    };
};
class criminaluzi : baseMan
{
    displayName = "Criminal (UZI)";
    sidearmWeapon[] = {"CUP_hgun_MicroUzi"};
    magazines[] =
    {
        LIST_5(CUP_30Rnd_9x19_UZI)
    };
};
class criminalmedic : criminaluzi
{
    displayName = "Criminal Medic";
    backpack[] = {"R3F_sac_moyen_medic_noir"};
    items[] += {
        #include "medicalbackpack.hpp"
    };
};