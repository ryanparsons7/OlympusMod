class Enh_AmbientAnimDescription
{
	control = "SubCategoryDesc2";
	data = "AttributeSystemSubcategory";
	displayName = $STR_ENH_ambAnimations_headline;
	description = $STR_ENH_ambAnimations_description;
	condition = "objectBrain";
};
class Enh_ambientAnimParams
{
	control = "Enh_AmbientAnimation";
	property = "Enh_ambientAnimParams";
	expression =
	"\
	if (is3DEN) then {_this call BIS_fnc_ambientAnim__terminate};\
	[_this,_value] spawn\
	{\
		sleep 0.1;\
		private _unit = _this select 0;\
		private _value = _this select 1;\
		if (!(_value select 0 == '') && !isMultiplayer) then\
		{\
			[_unit,_value select 0,_value select 1,objNull,false,false] call BIS_fnc_ambientAnim;\
		};\
	}";
	condition = "objectBrain";
	defaultValue = ["",""];
};

