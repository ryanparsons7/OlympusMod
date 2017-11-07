class Enh_WeaponSway
{
	displayName = $STR_ENH_weaponSway_displayName;
	tooltip = $STR_ENH_weaponSway_tooltip;
	control = "Slider";
	property = "Enh_weaponSway";
	expression =
	"\
	_this setVariable ['Enh_weaponSway',_value];\
	_this setCustomAimCoef _value;\
	_this addEventHandler\
	[\
		'Respawn',\
		{\
			(_this select 0) setCustomAimCoef ((_this select 0) getVariable 'Enh_weaponSway')\
		}\
	]";
	defaultValue = "1";
	conditioin = "objectBrain";
};