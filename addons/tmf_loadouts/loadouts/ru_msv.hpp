/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"rhs_uniform_emr_patchless"};
       vest[] = {};
       backpack[] = {"rhs_assault_umbts"};
       headgear[] = {};
       goggles[] = {""};
       hmd[] = {"rhs_1PN138"};
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
    headgear[] = {"rhs_6b47"};
    vest[] = {"rhs_6b23_digi_6sh92"};
    primaryWeapon[] = {"hlc_rifle_ak12"};
    scope[] = {"rhs_acc_1p87"};
    attachment[] = {"rhs_acc_2dpZenit_ris"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_AK"),
        LIST_2("rhs_mag_rgn"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"rhs_6b23_digi_6sh92_vog"};
    primaryWeapon[] = {"hlc_rifle_ak12GL"};
    magazines[] +=
    {
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_aku12"};
};
class m : r
{
    displayName = "Medic";
    vest[] = {"rhs_6b23_digi_medic"};
    backPack[] = {"rhs_assault_umbts_medic"};
    backpackItems[] = {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("rhs_30Rnd_545x39_AK"),
        "rhs_mag_rgn",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"rhs_6b23_digi_6sh92_vog_headset"};
    scope[] = {"optic_MRCO"};
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red"),
        LIST_2("rhs_mag_rdg2_white")
    };
    linkedItems[] += {"rhs_pdu4"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_3("rhs_mag_9x18_8_57N181S")
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
    primaryWeapon[] = {"rhs_weap_pkm"};
    vest[] = {"rhs_6b23_6sh116"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR"),
        LIST_1("rhs_100Rnd_762x54mmR_green"),
        "rhs_mag_rgn",
        "rhs_mag_rdg2_white",
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2(rhs_100Rnd_762x54mmR)
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svdp"};
    vest[] = {"rhs_6b23_sniper"};
    scope[] = {"rhs_acc_pso1m2"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rgn"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        "rhs_mag_rgn",
        "rhs_mag_rdg2_white",
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
    linkedItems[] += {"Binocular"};
};
class matg : r
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] = {
        LIST_2("rhs_rpg7_PG7V_mag"),
		"rhs_rpg7_PG7VL_mag",
		"rhs_rpg7_OG7V_mag"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] = {
        LIST_2("rhs_rpg7_PG7V_mag"),
		"rhs_rpg7_PG7VL_mag",
		"rhs_rpg7_OG7V_mag"
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
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] = {
        LIST_2("rhs_rpg7_PG7V_mag"),
		"rhs_rpg7_PG7VL_mag",
		"rhs_rpg7_OG7V_mag"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] = {
        LIST_2("rhs_rpg7_PG7V_mag"),
		"rhs_rpg7_PG7VL_mag",
		"rhs_rpg7_OG7V_mag"
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
	#include "mortaritems.hpp"
	};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
    items[] += {
	#include "mortaritems.hpp"
	};
};
class mtrag : r
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    items[] += {
	#include "mortaritems.hpp"
	};
};
class samg : r
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    magazines[] +=
    {
        LIST_1("rhs_mag_9k38_rocket")
    };
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    backpackItems[] =
    {
        LIST_1("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"rhs_uniform_gorka_r_y"};
    vest[] = {"rhs_6b23_digi_sniper"};
    backPack[] = {};
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
    bipod[] = {"rhs_acc_harris_swivel"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_9("rhs_5Rnd_338lapua_t5000"),
        LIST_2("rhs_mag_rgn"),
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    uniform[] = {"rhs_uniform_gorka_r_y"};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {"rhs_scarf"};
    radios[] = {"ACRE_PRC117F"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {"rhs_scarf"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {"rhs_scarf"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_6sh46"};
    headgear[] = {"rhs_zsh7a_mike_green_alt"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"FIR_pilot_vest"};
    headgear[] = {"rhs_zsh7a_alt"};
    backPack[] = {"B_AssaultPack_blk"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_1("DemoCharge_Remote_Mag"),
        LIST_1("SLAMDirectionalMine_Wire_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
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
    linkedItems[] += {"B_UavTerminal"};
};