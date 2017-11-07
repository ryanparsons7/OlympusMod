class Enh_AddObjectsToZeus
{
	displayName = $STR_ENH_editableObjZeus_displayName;
	tooltip = $STR_ENH_editableObjZeus_tooltip;
	property = "Enh_dynamicGroups";
	control = "Checkbox";
	expression =
	"\
		if (!is3DEN && isServer && _value && (count allCurators > 0)) then\
		{\
			[] spawn\
			{\
				while {true} do\
				{\
					{\
						 _x addCuratorEditableObjects\
						 [\
						 	entities [[],['Logic'],true],\
						  	true\
						 ];\
					} count allCurators;\
					sleep 60;\
				};\
			};\
		}";
	defaultValue = "false";
};
