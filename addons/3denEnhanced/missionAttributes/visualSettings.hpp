class Enh_VisualSettings
{
	collapsed = 1;
	displayName = $STR_ENH_visualSettings_headline;
	class Attributes
	{
		class Enh_ViewDistance
		{
			displayName = $STR_ENH_viewDistance_displayName;
			tooltip = $STR_ENH_viewDistance_tooltip;
			property = "Enh_viewDistance";
			control = "Edit";
			expression = "if (_value > 0 && !is3DEN) then {setViewDistance _value}";
			defaultValue = "-1";
			typeName = "NUMBER";
		};
		class Enh_ObjViewDistance: Enh_ViewDistance
		{
			displayName = $STR_ENH_objViewDistance_displayName;
			property = "Enh_objViewDistance";
			expression = "if (_value > 0 && !is3DEN) then {setObjectViewDistance _value}";
		};
		class Enh_DisableGrass: Enh_ViewDistance
		{
			displayName = $STR_ENH_disableGrass_displayName;
			tooltip = "";
			property = "Enh_disableGrass";
			control = "Enh_TerrainGrid";
			expression = "if (((parseNumber _value) > 0) && !is3DEN) then {setTerrainGrid (parseNumber _value)}";
		};
	};
};
