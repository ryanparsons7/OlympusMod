class Enh_AdvancedDamageVehicle
{
	displayName = $STR_ENH_advancedDamage_headline;
	collapsed = 1;
	class Attributes
	{
		class Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_engine;
			tooltip = "";
			property = "Enh_damageEngine";
			control = "Slider";
			expression = "_this setHitPointDamage ['hitEngine',_value]";
			defaultValue = "0";
			condition = "objectVehicle";
		};
		class Enh_Gun: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_gun;
			property = "Enh_damageGun";
			expression = "_this setHitPointDamage ['hitGun',_value]";
		};
		class Enh_FuelTank: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_fuelTank;
			property = "Enh_damageFuelTank";
			expression = "_this setHitPointDamage ['hitFuel',_value]";
		};
		class Enh_Turret: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_turret;
			property = "Enh_damageTurret";
			expression = "_this setHitPointDamage ['hitTurret',_value]";
		};
		class Enh_Windows: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_windows;
			property = "Enh_damageWindows";
			expression = "{_this setHitPointDamage [_x,_value]} forEach ['HitGlass1','HitGlass2','HitGlass3','HitGlass4','HitRGlass','HitLGlass','HitGlass5','HitGlass6']";
		};
		class Enh_LFWheel: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_LFWheel;
			property = "Enh_damageLFWheel";
			expression = "_this setHitPointDamage ['hitLFWheel',_value]";
		};
		class Enh_RFWheel: Enh_Engine
		{
			displayName =$STR_ENH_advancedDamageVeh_RFWheel;
			property = "Enh_damageRFWheel";
			expression = "_this setHitPointDamage ['hitRFWheel',_value]";
		};
		class Enh_LF2Wheel: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_LF2Wheel;
			property = "Enh_damageLF2Wheel";
			expression = "_this setHitPointDamage ['HitLF2Wheel',_value]";
		};
		class Enh_RF2Wheel: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_RF2Wheel;
			property = "Enh_damageRF2Wheel";
			expression = "_this setHitPointDamage ['HitRF2Wheel',_value]";
		};
		class Enh_LMWheel: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_LMWheel;
			property = "Enh_damageLMWheel";
			expression = "_this setHitPointDamage ['HitLMWheel',_value]";
		};
		class Enh_RMWheel: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_RMWheel;
			property = "Enh_damageRMWheel";
			expression = "_this setHitPointDamage ['HitRMWheel',_value]";
		};
		class Enh_LBWheel: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_LBWheel;
			property = "Enh_damageLBWheel";
			expression = "_this setHitPointDamage ['HitLBWheel',_value]";
		};
		class Enh_RBWheel: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_RBWheel;
			property = "Enh_damageRBWheel";
			expression = "_this setHitPointDamage ['HitRBWheel',_value]";
		};
		class Enh_vehBody: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_body;
			property = "Enh_damageVehBody";
			expression = "_this setHitPointDamage ['hitBody',_value]";
		};
		class Enh_LTrack: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_LTrack;
			property = "Enh_damageLTrack";
			expression = "_this setHitPointDamage ['hitLTrack',_value]";
		};
		class Enh_RTrack: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_RTrack;
			property = "Enh_damageRTrack";
			expression = "_this setHitPointDamage ['hitRTrack',_value]";
		};
		class Enh_Hull: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_hull;
			property = "Enh_damageHull";
			expression = "_this setHitPointDamage ['hitHull',_value]";
		};
		class Enh_Avionics: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_avionics;
			property = "Enh_damageAvionics";
			expression = "_this setHitPointDamage ['hitAvionics',_value]";
		};
		class Enh_MainRotor: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_mainRotor;
			property = "Enh_damageMainRotor";
			expression = "_this setHitPointDamage ['hitRRotor',_value]";
		};
		class Enh_TailRotor: Enh_Engine
		{
			displayName = $STR_ENH_advancedDamageVeh_tailRotor;
			property = "Enh_damageTailRotor";
			expression = "_this setHitPointDamage ['hitVRotor',_value]";
		};
	};
};
