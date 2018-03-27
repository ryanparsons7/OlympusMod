/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"sfp_m90d_uniform"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {};
       goggles[] = {};
       hmd[] = {"NVGoggles"};
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
    headgear[] = {"sfp_m90d_helmet_nvg"};
    vest[] = {"sfp_kroppsskydd12"};
    backpack[] = {"B_AssaultPack_rgr"};
    primaryWeapon[] = {"sfp_ak5c_aimpoint_dbal2"};
    scope[] = {"sfp_optic_aimpoint"};
    attachment[] = {"rhsusf_acc_M952V"};
    magazines[] =
    {
        LIST_8("sfp_30Rnd_556x45_Stanag_plastic"),
        LIST_2("sfp_30Rnd_556x45_Stanag_tracer_plastic"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"sfp_ak5c_m203_plastic"};
    magazines[] +=
    {
        LIST_5("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : r
{
    displayName = "Medic";
    backpackItems[] += {
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
    vest[] = {"sfp_kroppsskydd12_tl"};
    scope[] = {"sfp_optic_3x_aimpoint"};
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
    sidearmWeapon[] = {"sfp_p88"};
    magazines[] +=
    {
        LIST_3("sfp_17Rnd_9x19_Mag")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    backPack[] = {"sfp_stridssack2000_ra_ksk12"};
    radios[] = {"ACRE_PRC117F"};
};
class jtac : co
{
    displayName = "Joint Terminal Attack Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"sfp_ksp90b"};
    scope[] = {};
    sidearmWeapon[] = {"sfp_p88"};
    magazines[] =
    {
		LIST_3("sfp_200Rnd_556x45_ksp90"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("sfp_17Rnd_9x19_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
		LIST_2("sfp_200Rnd_556x45_ksp90")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"sfp_ak5c_3xaimpoint_dbal2"};
    scope[] = {"sfp_optic_3x_aimpoint"};
    magazines[] =
    {
        LIST_7("sfp_30Rnd_556x45_Stanag_plastic"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"sfp_ksp58B2"};
    scope[] = {"sfp_optic_3x_aimpoint"};
    magazines[] =
    {
        LIST_5("sfp_100Rnd_762x51_ksp58"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("sfp_17Rnd_9x19_Mag")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("sfp_100Rnd_762x51_ksp58")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("sfp_100Rnd_762x51_ksp58")
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
    secondaryWeapon[] = {"sfp_grg86"};
    backpackItems[] =
    {
        LIST_2("sfp_grg_heat_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"sfp_backpack_grg_loader"};
    backpackItems[] =
    {
        LIST_2("sfp_grg_heat_mag")
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
    secondaryWeapon[] = {"sfp_rb57"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    secondaryWeapon[] = {"sfp_rb57"};
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
    displayName = "Mortar Ammo Carrier";
    items[] += {
	"ACE_RangeTable_82mm"
	};
};
class mtrag : r
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
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
    uniform[] = {"U_B_GhillieSuit"};
    primaryWeapon[] = {"sfp_psg90_camo"};
    scope[] = {"sfp_optic_kikarsikte90b_10x"};
    sidearmWeapon[] = {"sfp_p88"};
    magazines[] =
    {
        LIST_6("sfp_9Rnd_762x51_psg90"),
        LIST_2("HandGrenade"),
        LIST_4("sfp_17Rnd_9x19_Mag")
    };
    items[] += {
	#include "sniperitems.hpp"
	};
    linkedItems[] += {"ACE_VectorDay"};
};
class sp : ftl
{
    displayName = "Spotter";
    uniform[] = {"U_B_GhillieSuit"};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"Leupold_Mk4"};
    items[] += {
	#include "sniperitems.hpp"
	};
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_HelmetCrew_I"};
    radios[] = {"ACRE_PRC117F"};
	hmd[] = {};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"H_HelmetCrew_I"};
	hmd[] = {};
    items[] += {
	"ToolKit"
	};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    headgear[] = {"H_HelmetCrew_I"};
	hmd[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
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
    uniform[] = {"FIR_Fighter_Pilot_Nomex5"};
    vest[] = {"FIR_pilot_vest"};
    headgear[] = {"FIR_JHMCS_II"};
    backPack[] = {"B_AssaultPack_blk"};
    radios[] = {"ACRE_PRC117F"};
    sidearmWeapon[] = {"sfp_p88"};
    magazines[] =
    {
        LIST_4("sfp_17Rnd_9x19_Mag")
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