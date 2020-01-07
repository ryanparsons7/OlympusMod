/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"rhs_uniform_emr_des_patchless"};
       vest[] = {};
       backpack[] = {"UK3CB_TKA_O_B_RIF_TAN"};
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
    headgear[] = {"UK3CB_TKA_O_H_6b7_1m_bala2_Surpat"};
    vest[] = {"UK3CB_TKA_O_V_6b23_ml_Surpat_02"};
    primaryWeapon[] = {"hlc_rifle_ak12"};
    scope[] = {"rhs_acc_1p87"};
    attachment[] = {"rhs_acc_2dpZenit_ris"};
    magazines[] =
    {
        LIST_8("hlc_30Rnd_545x39_B_AK"),
        LIST_1("rhs_mag_rgn"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"UK3CB_TKA_O_V_6b23_ml_6sh92_vog_Surpat"};
    primaryWeapon[] = {"hlc_rifle_ak12GL"};
    magazines[] +=
    {
        LIST_3("hlc_VOG25_AK"),
        LIST_3("hlc_GRD_White")
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
    vest[] = {"UK3CB_TKA_O_V_6b23_medic_Surpat"};
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
    scope[] = {"optic_MRCO"};
    magazines[] =
    {
		LIST_8("hlc_30Rnd_545x39_B_AK"),
		LIST_3("hlc_VOG25_AK"),
        LIST_3("hlc_GRD_White"),
		LIST_2("hlc_GRD_Green"),
        LIST_2("hlc_GRD_Red"),
        LIST_2("rhs_mag_rdg2_white")
    };
    linkedItems[] += {"rhs_pdu4"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"UK3CB_TKA_O_V_6b23_ML_6sh92_radio_Surpat"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
		LIST_8("hlc_30Rnd_545x39_B_AK"),
		LIST_3("hlc_VOG25_AK"),
        LIST_2("hlc_GRD_White"),
		LIST_1("hlc_GRD_Green"),
        LIST_1("hlc_GRD_Red"),
        LIST_2("rhs_mag_rdg2_white"),
		LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	magazines[] =
    {
		LIST_5("hlc_30Rnd_545x39_B_AK"),
		LIST_3("hlc_VOG25_AK"),
        LIST_2("hlc_GRD_White"),
		LIST_1("hlc_GRD_Green"),
        LIST_1("hlc_GRD_Red"),
        LIST_2("rhs_mag_rdg2_white"),
		LIST_2("rhs_mag_9x18_8_57N181S")
    };
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
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR"),
        LIST_2("rhs_100Rnd_762x54mmR_green"),
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
        LIST_2("rhs_100Rnd_762x54mmR")
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
    vest[] = {"UK3CB_TKA_O_V_6b23_ml_sniper_Surpat"};
    scope[] = {"rhs_acc_pso1m2"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rgn"),
        LIST_2("rhs_mag_rdg2_white")
    };
	linkedItems[] += {"Binocular"};
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
    linkedItems[] += {"Binocular"};
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
    vest[] = {"UK3CB_TKA_O_V_6b23_ml_sniper_Surpat"};
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
    items[] += {
	"ToolKit"
	};
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