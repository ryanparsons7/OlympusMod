class Enh_FeatureType
{
	displayName = $STR_ENH_featureType_displayName;
	tooltip = $STR_ENH_featureType_displayName;
	property = "Enh_featureType";
	control = "Enh_FeatureType";
	expression = "_this setFeatureType (parseNumber _value)";
	condition = "objectVehicle + objectSimulated + objectDestructable";
	defaultValue = "0";
};
