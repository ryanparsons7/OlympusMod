/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"rhs_uniform_flora_patchless"};
       vest[] = {};
       backpack[] = {"rhs_sidor"};
       headgear[] = {};
       goggles[] = {"rhs_scarf"};
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
    headgear[] = {"rhs_ssh68"};
    vest[] = {"rhs_6b5"};
    primaryWeapon[] = {"rhs_weap_ak74"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N6_AK"),
        LIST_1("rhs_mag_rgn"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_ak74_gp25"};
    magazines[] +=
    {
        LIST_3("rhs_VOG25"),
        LIST_3("rhs_VG40MD_White")
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"rhs_weap_aks74u"};
};
class m : r
{
    displayName = "Medic";
    vest[] = {"rhs_6b5_medic"};
    items[] += {
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
    magazines[] +=
    {
        LIST_2("rhs_VG40MD_Green"),
        LIST_2("rhs_VG40MD_Red"),
        LIST_2("rhs_mag_rdg2_white")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"rhs_6b5_officer"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9x18_8_57N181S"),
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    radios[] = {"ACRE_PRC117F"};
	magazines[] =
    {
        LIST_2("rhs_VOG25"),
        LIST_2("rhs_VG40MD_White"),
		LIST_2("rhs_VG40MD_Green"),
        LIST_2("rhs_VG40MD_Red"),
        LIST_1("rhs_mag_rdg2_white"),
		LIST_2("rhs_mag_9x18_8_57N181S"),
		LIST_6("rhs_30Rnd_545x39_AK"),
    };
};
class jtac : co
{
    displayName = "Joint Terminal Attack Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"hlc_rifle_rpk74n"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_5("hlc_45Rnd_545x39_b_rpk"),
        LIST_2("hlc_45Rnd_545x39_m_rpk"),
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
        LIST_4("hlc_45Rnd_545x39_b_rpk"),
        LIST_2("hlc_45Rnd_545x39_m_rpk")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
	backPack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	magazines[] +=
    {
        LIST_1("rhs_rpg7_PG7V_mag"),
		LIST_1("rhs_rpg7_OG7V_mag")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svdp"};
    vest[] = {"rhs_6b5_sniper"};
    scope[] = {"rhs_acc_pso1m2"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        LIST_1("rhs_mag_rgn"),
        LIST_2("rhs_mag_rdg2_white")
    };
	linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	backPack[] = {"B_Carryall_oli"};
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
	backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"B_Carryall_oli"};
    linkedItems[] += {"Binocular","ItemGPS"};
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
    linkedItems[] += {"Binocular","ItemGPS"};
};
class hatg : r
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_Metis_Tripod_Bag"};
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] += {"Binocular","ItemGPS"};
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
	linkedItems[] += {"Binocular","ItemGPS"};
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
	linkedItems[] += {"Binocular","ItemGPS"};
};
class sn : r
{
    displayName = "Sniper";
	uniform[] = {"rhs_uniform_gorka_r_g"};
    vest[] = {"rhs_6b5_sniper"};
    primaryWeapon[] = {"rhs_weap_svdp_wd_npz"};
    scope[] = {"rhs_acc_dh520x56"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_9("rhs_10Rnd_762x54mmR_7N1"),
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
    uniform[] = {"rhs_uniform_gorka_r_g"};
	backPack[] = {"B_Carryall_oli"};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"Leupold_Mk4","ItemGPS"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhs_6b5_khaki"};
	headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {"rhs_scarf"};
    radios[] = {"ACRE_PRC117F"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhs_6b5_khaki"};
	headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {"rhs_scarf"};
    items[] += {
	"ToolKit"
	};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhs_6b5_khaki"};
    headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {"rhs_scarf"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_6b5_khaki"};
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