/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"LOP_U_UN_Fatigue_01"};
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
    headgear[] = {"LOP_H_6B27M_UN"};
    vest[] = {"LOP_V_6B23_Rifleman_UN"};
    backpack[] = {};
    primaryWeapon[] = {"rhs_weap_ak74m"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_AK"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_ak74m_gp25"};
    magazines[] +=
    {
        LIST_5("rhs_VOG25"),
        LIST_3("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74un"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_AK"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
    backPack[] = {"LOP_CDF_Kitbag_Med"};
    backpackItems[] = {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_aks74un"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_AK"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_VG40OP_green"),
        LIST_2("rhs_VG40OP_red"),
        LIST_2("SmokeShellGreen")
    };
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
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_pkm"};
    backPack[] = {"LOP_CDF_Fieldpack_PKM"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_5("rhs_100Rnd_762x54mmR"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"LOP_CDF_Fieldpack_PKM"};
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
        LIST_6("hlc_100Rnd_762x51_M_M60E4"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhs_mag_9x18_8_57N181S")
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
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_762x51_m118_special_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
};
class sp : ftl
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
	hmd[] = {};
    headgear[] = {"rhs_tsh4"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"rhs_assault_umbts_engineer"};
	hmd[] = {};
    headgear[] = {"rhs_tsh4"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
	hmd[] = {};
    headgear[] = {"rhs_tsh4"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"TRYK_OVERALL_nok_flesh"};
    vest[] = {"V_TacVestIR_blk"};
	hmd[] = {};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"TRYK_OVERALL_nok_flesh"};
    vest[] = {"V_TacVestIR_blk"};
	hmd[] = {};
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
	hmd[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"rhs_assault_umbts_engineer"};
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
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"rhs_assault_umbts_engineer"};
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