/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"usm_bdu_dcu"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {};
       hmd[] = {"CUP_NVG_PVS7"};
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
    headgear[] = {"rhsusf_protech_helmet_rhino"};
    vest[] = {"TRYK_V_ArmorVest_Delta"};
    goggles[] = {"rhsusf_shemagh_gogg_tan","rhsusf_shemagh2_gogg_tan",""};
    backpack[] = {"B_AssaultPack_blk"};
    primaryWeapon[] = {"hlc_rifle_Colt727"};
    scope[] = {"rhsusf_acc_compm4"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"hlc_rifle_Colt727_GL"};
    magazines[] +=
    {
        LIST_5("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
    backpackItems[] = {
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
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class jtac : co
{
    displayName = "Joint Terminal Attack Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"hlc_lmg_M249E2"};
    backPack[] = {"usm_pack_762x51_bandoliers"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("hlc_200rnd_556x45_M_SAW"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_2("hlc_200rnd_556x45_M_SAW")
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
    primaryWeapon[] = {"hlc_rifle_M14_Bipod"};
    scope[] = {"hlc_optic_artel_m14"};
    magazines[] =
    {
        LIST_10("hlc_20Rnd_762x51_B_M14"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("hlc_100Rnd_762x51_M_M60E4"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_M_M60E4")
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
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] += {"Binocular"};
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    linkedItems[] += {"Binocular"};
};
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    linkedItems[] += {"Binocular"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backpack[] = {"usm_pack_alice"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_1("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_1("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"rhs_weap_m24sws"};
    scope[] = {"rhsusf_acc_M8541_low_wd"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_762x51_m118_special_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    linkedItems[] += {"Leupold_Mk4"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    goggles[] = {};
	hmd[] = {};
    headgear[] = {"usm_helmet_cvc"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
    backpack[] = {"usm_pack_alice"};
    items[] += {
	"ToolKit"
	};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    goggles[] = {};
       hmd[] = {"CUP_NVG_PVS7"};
    uniform[] = {"TRYK_OVERALL_nok_flesh"};
    vest[] = {"V_TacVestIR_blk"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    goggles[] = {};
       hmd[] = {"CUP_NVG_PVS7"};
    uniform[] = {"TRYK_OVERALL_nok_flesh"};
    vest[] = {"V_TacVestIR_blk"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"TRYK_OVERALL_SAGE_BLKboots"};
    vest[] = {"FIR_pilot_vest"};
    headgear[] = {"FIR_USHelmetType2_USAF_80s"};
    goggles[] = {"FIR_Visor_Clear_down"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
	hmd[] = {};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"usm_pack_alice"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"usm_pack_alice"};
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
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};