/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"rhs_uniform_g3_mc"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {"rhsusf_shemagh_gogg_tan","rhsusf_shemagh2_gogg_tan"};
       hmd[] = {"rhsusf_ANPVS_15"};
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
    headgear[] = {"rhsusf_opscore_mc_cover_pelt_nsw"};
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"rhsusf_falconii_mc"};
    primaryWeapon[] = {"rhs_weap_mk18_d"};
    scope[] = {"rhsusf_acc_g33_xps3_flip"};
	bipod[] = {"rhsusf_acc_grip2_tan"};
    attachment[] = {"rhsusf_acc_anpeq15"};
	silencer[] = {"rhsusf_acc_nt4_tan"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"rhsusf_spcs_ocp_grenadier"};
    primaryWeapon[] = {"rhs_weap_mk18_m320"};
	scope[] = {"rhsusf_acc_g33_xps3_flip"};
	bipod[] = {"rhsusf_acc_grip2_tan"};
    attachment[] = {"rhsusf_acc_anpeq15"};
	silencer[] = {"rhsusf_acc_nt4_tan"};
    magazines[] +=
    {
        LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : r
{
    displayName = "Medic";
    vest[] = {"rhsusf_spcs_ocp_medic"};
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    items[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_smg_mp5a2"};
    scope[] = {};
    magazines[] =
    {
        LIST_6("hlc_30Rnd_9x19_B_MP5"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	scope[] = {"rhsusf_acc_su230a_c_3d"};
	vest[] = {"rhsusf_spcs_ocp_teamleader_alt"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen"),
		"Laserbatteries"
    };
    linkedItems[] += {"Laserdesignator"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"rhsusf_spcs_ocp_squadleader"};
    sidearmWeapon[] = {"hlc_Pistol_M11A1"};
    magazines[] +=
    {
        LIST_3("hlc_13Rnd_9x19_B_P228")
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
    vest[] = {"rhsusf_spcs_ocp_saw"};
    primaryWeapon[] = {"hlc_lmg_mk46mod1"};
	scope[] = {"rhsusf_acc_elcan"};
    sidearmWeapon[] = {"hlc_Pistol_M11A1"};
    magazines[] =
    {
        LIST_4("hlc_200rnd_556x45_M_SAW"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("hlc_13Rnd_9x19_B_P228")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] =
    {
        LIST_4("hlc_200rnd_556x45_M_SAW"),
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
	vest[] = {"rhsusf_spcs_ocp_sniper"};
    primaryWeapon[] = {"rhs_weap_sr25_d"};
    scope[] = {"rhsusf_acc_leupoldmk4_2_d"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
	silencer[] = {"rhsusf_acc_sr25s_d"};
    magazines[] =
    {
        LIST_6("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
        LIST_2("rhsusf_20Rnd_762x51_SR25_m62_Mag"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
		"ACE_RangeCard"
    };
	linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    scope[] = {"rhsusf_acc_ACOG_MDO"};
    vest[] = {"rhsusf_spcs_ocp_machinegunner"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("hlc_13Rnd_9x19_B_P228")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] += {"Binocular"};
};
class matg : r
{
    displayName = "MAT Gunner";
    backPack[] = {"B_Carryall_mcamo"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    backpackItems[] = {
        LIST_2("rhs_mag_smaw_HEAA"),
        LIST_3("rhs_mag_smaw_SR")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] = {
        LIST_2("rhs_mag_smaw_HEAA"),
        LIST_3("rhs_mag_smaw_SR")
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
    backPack[] = {"B_Carryall_mcamo"};
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpackItems[] = {
        "rhs_fgm148_magazine_AT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] = {
        "rhs_fgm148_magazine_AT"
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
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_1("rhs_fim92_mag")
    };
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    backpackItems[] =
    {
        LIST_1("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {"rhsusf_spcs_ocp_sniper"};
    primaryWeapon[] = {"rhs_weap_m40a5_d"};
    scope[] = {"rhsusf_acc_M8541_low_d"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    sidearmWeapon[] = {"hlc_Pistol_M11A1"};
    magazines[] =
    {
        LIST_9("rhsusf_10Rnd_762x51_m118_special_Mag"),
        LIST_1("HandGrenade"),
        LIST_4("hlc_13Rnd_9x19_B_P228")
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
class vc : car
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spc_crewman"};
    headgear[] = {"rhsusf_cvc_green_helmet"};
    goggles[] = {"rhs_ess_black"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
};
class vd : car
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_spc_crewman"};
    headgear[] = {"rhsusf_cvc_green_helmet"};
    goggles[] = {"rhs_ess_black"};
	hmd[] = {};
    items[] += {
	"ToolKit"
	};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhsusf_spc_crewman"};
    headgear[] = {"rhsusf_cvc_green_helmet"};
    goggles[] = {"rhs_ess_black"};
	hmd[] = {};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    vest[] = {"rhsusf_spc_crewman"};
    headgear[] = {"rhsusf_hgu56p"};
    radios[] = {"ACRE_PRC117F"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    headgear[] = {"rhsusf_hgu56p_visor_mask"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
	hmd[] = {};
	goggles[] = {};
    uniform[] = {"FIR_Fighter_Pilot_USN_Nomex5"};
    vest[] = {"FIR_pilot_vest"};
    headgear[] = {"FIR_JHMCS_II"};
    backPack[] = {"B_AssaultPack_blk"};
    radios[] = {"ACRE_PRC117F"};
    sidearmWeapon[] = {"hlc_Pistol_M11A1"};
    magazines[] =
    {
        LIST_4("hlc_13Rnd_9x19_B_P228")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
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
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
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
class UAV : r
{
    displayName = "UAV Operator";
    backPack[] = {"B_rhsusf_B_BACKPACK"};
};