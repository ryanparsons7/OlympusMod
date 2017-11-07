class Enh_DynamicGroups
{
	collapsed = 1;
	displayName = "Dynamic Groups";
	class Attributes
	{
		class Enh_EnableDynamicGroups
		{
			displayName = $STR_ENH_enable_displayName;
			tooltip = $STR_ENH_dynamicGroups_tooltip;
			property = "Enh_dynamicGroups";
			control = "Checkbox";
			expression =
			"\
				if (!is3DEN && isMultiplayer && _value) then\
				{\
					if (isServer) then {['Initialize'] call BIS_fnc_dynamicGroups};\
					if (hasInterface) then\
					{\
						[] spawn\
						{\
							waitUntil {sleep 1; !isNull player};\
							['InitializePlayer', [player]] call BIS_fnc_dynamicGroups;\
						};\
					};\
				};\
			";
			defaultValue = "false";
		};
	};
};