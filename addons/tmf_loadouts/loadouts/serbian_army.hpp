/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"rhssaf_uniform_m10_digital_summer"};
       vest[] = {};
       backpack[] = {};
       headgear[] = {"rhssaf_helmet_m97_digital"};
       goggles[] = {};
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
	vest[] = {"rhssaf_vest_md12_digital"};
    backpack[] = {"rhssaf_kitbag_digital"};
	goggles[] = {"rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_gogg_grn","rhsusf_shemagh2_gogg_grn"};
    primaryWeapon[] = {"rhs_weap_m21a"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("rhsgref_30Rnd_556x45_m21"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_m21a_pbg40"};
    magazines[] +=
    {
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m21s"};
    magazines[] =
    {
        LIST_8("rhsgref_30Rnd_556x45_m21"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white")
    };
};
class m : car
{
    displayName = "Medic";
    items[] += {
        #include "medicalbackpack.hpp"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_scorpion"};
    magazines[] =
    {
        LIST_6("rhsgref_20rnd_765x17_vz61"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"rhssaf_vest_md99_digital_rifleman_radio"};
	scope[] = {"rhs_acc_pkas"};
    magazines[] +=
    {
        LIST_1("rhs_VG40OP_green"),
        LIST_1("rhs_VG40OP_red"),
        LIST_1("rhssaf_mag_brd_m83_green"),
		LIST_1("rhssaf_mag_brd_m83_red"),
		"Laserbatteries"
    };
	linkedItems[] += {"ItemGPS","Laserdesignator"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"hlc_pistol_P226US"};
    magazines[] +=
    {
        LIST_2("hlc_15Rnd_9x19_B_P226")
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
    primaryWeapon[] = {"hlc_rifle_rpk74n"};
    sidearmWeapon[] = {"hlc_pistol_P226US"};
    magazines[] =
    {
        LIST_7("hlc_45Rnd_545x39_b_rpk"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white"),
        LIST_3("hlc_15Rnd_9x19_B_P226")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_6("hlc_45Rnd_545x39_b_rpk")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m80"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m76"};
	sidearmWeapon[] = {"hlc_pistol_P226US"};
    scope[] = {"rhs_acc_pso1m21"};
    magazines[] =
    {
        LIST_10("rhsgref_10Rnd_792x57_m76"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white"),
		LIST_3("hlc_15Rnd_9x19_B_P226")
    };
	linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m84"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white"),
        LIST_4("hlc_15Rnd_9x19_B_P226")
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
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
    linkedItems[] += {"Binocular"};
};
class matg : car
{
    displayName = "MAT Gunner";
	backPack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    backpackItems[] = {
        LIST_1("rhs_mag_smaw_HEAA"),
        LIST_1("rhs_mag_smaw_HEDP")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_smaw_HEAA"),
        LIST_1("rhs_mag_smaw_HEDP")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backPack[] = {"B_Carryall_oli"};
	backpackItems[] = {
        LIST_1("rhs_mag_smaw_HEAA"),
        LIST_1("rhs_mag_smaw_HEDP")
    };
    linkedItems[] += {"Binocular"};
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_Metis_Tripod_Bag"};
};
class hatag : car
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
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    magazines[] +=
    {
        LIST_1("rhs_mag_9k38_rocket")
    };
};
class samag : car
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
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
    bipod[] = {"rhs_acc_harris_swivel"};
    sidearmWeapon[] = {"hlc_pistol_P226US"};
    magazines[] =
    {
        LIST_9("rhs_5Rnd_338lapua_t5000"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white"),
        LIST_4("hlc_15Rnd_9x19_B_P226")
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
    headgear[] = {"rhssaf_helmet_m97_black_nocamo_black_ess"};
	vest[] = {"rhssaf_vest_md99_digital_radio"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
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
	uniform[] = {"rhssaf_uniform_heli_pilot"};
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"UK3CB_H_Pilot_Helmet"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"UK3CB_H_Pilot_Helmet"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhssaf_uniform_mig29_pilot"};
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"rhs_zsh7a_alt"};
	hmd[] = {"rhs_1PN138"};
    sidearmWeapon[] = {"hlc_pistol_P226US"};
    magazines[] =
    {
        LIST_4("hlc_15Rnd_9x19_B_P226")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_3("IEDLandSmall_Remote_Mag"),
        LIST_3("IEDUrbanSmall_Remote_Mag"),
        "IEDLandBig_Remote_Mag",
        "IEDUrbanBig_Remote_Mag",
        "ACE_Cellphone",
        "MineDetector",
        "ToolKit"
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
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
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};