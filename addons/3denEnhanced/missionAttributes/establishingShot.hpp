class Enh_EstablishingShot
{
	collapsed = 1;
	displayName = $STR_ENH_establishingShot_headline;
	class Attributes
	{
		class Enh_EstablishingShot
		{
			property = "Enh_establisingShot";
			control = "Enh_EstablishingShot";
			expression = "if (!(_value select 0 isEqualTo [0,0,0]) && hasInterface && !is3DEN) then {0 = _value spawn BIS_fnc_establishingShot}";
			defaultValue = "[[0,0,0],toUpper worldName,150,300,45]";
		};
	};
};
