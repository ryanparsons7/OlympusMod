/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"UK3CB_TKA_O_U_CombatUniform_01_ADPM"};
       vest[] = {"UK3CB_TKA_O_V_6b23_ml_Oli_TKA_Brush"};
       backpack[] = {};
       headgear[] = {"UK3CB_TKA_O_H_6b27m_ADPM","UK3CB_TKA_O_H_6b27m_ESS_ADPM"};
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
    backpack[] = {"UK3CB_TKA_O_B_RIF_Khk"};
    primaryWeapon[] = {"rhs_weap_akm"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_762x39mm"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"UK3CB_TKA_O_V_6b23_ml_6sh92_vog_Oli_TKA_Brush"};
    primaryWeapon[] = {"rhs_weap_akm_gp25"};
    magazines[] +=
    {
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_akms"};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_762x39mm"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
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
    primaryWeapon[] = {"rhs_weap_aks74u"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_AK"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_1("rhs_VG40OP_green"),
        LIST_1("rhs_VG40OP_red"),
        LIST_1("rhs_mag_nspn_green")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9x18_8_57N181S")
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
    primaryWeapon[] = {"rhs_weap_pkm"};
    backPack[] = {"rhs_sidor"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        "rhs_mag_rgd5",
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
    scope[] = {"rhs_acc_pso1m2"};
    magazines[] =
    {
        LIST_10("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rgd5"),
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
        "rhs_mag_rgd5",
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
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7V_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7V_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7V_mag")
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
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_1("rhs_fim92_mag")
    };
};
class samag : car
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
    primaryWeapon[] = {"rhs_weap_svdp_wd"};
    scope[] = {"rhs_acc_pso1m21"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_9("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rgd5"),
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
    headgear[] = {"UK3CB_H_Crew_Cap"};
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
    uniform[] = {"UK3CB_TKA_O_U_H_Pilot_01_ADD"};
    vest[] = {"UK3CB_TKA_O_V_6b23_vydra_3m_ADD"};
	hmd[] = {};
    headgear[] = {"UK3CB_TKA_O_H_zsh7a_mike_Des"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"UK3CB_TKA_O_U_H_Pilot_01_ADD"};
    vest[] = {"UK3CB_TKA_O_V_6b23_vydra_3m_ADD"};
	hmd[] = {};
    headgear[] = {"UK3CB_TKA_O_H_zsh7a_mike_Des_alt"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"UK3CB_TKA_O_U_J_Pilot_Digi"};
    vest[] = {"V_TacVest_khk"};
    headgear[] = {"UK3CB_TKA_O_H_zsh7a_Des_alt"};
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