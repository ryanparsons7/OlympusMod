class Enh_AmbientFlyby
{
	collapsed = 1;
	displayName = $STR_ENH_ambientFlyby_headline;
	class Attributes
	{
		class Enh_Type
		{
			displayName = $STR_ENH_ambientFlyby_type_displayName;
			tooltip = $STR_ENH_ambientFlyby_type_tooltip;
			property = "Enh_ambientFlyby_type";
			control = "EditArray";
			expression =
			"\
				if (isServer && !is3DEN && !(_value isEqualTo [])) then\
				{\
					_value spawn\
					{\
						waitUntil {time > 0.2};\
						\
						private _startPos = missionNamespace getVariable 'Enh_ambientFlyby_startPos',\
						private _endPos = missionNamespace getVariable 'Enh_ambientFlyby_endPos',\
						private _alt = missionNamespace getVariable 'Enh_ambientFlyby_altitude',\
						private _speed = missionNamespace getVariable 'Enh_ambientFlyby_speed',\
						private _delay = missionNamespace getVariable 'Enh_ambientFlyby_delay';\
						private _iterations = missionNamespace getVariable 'Enh_ambientFlyby_iterations';\
						\
						for '_i' from 0 to _iterations do\
						{\
							sleep _delay;\
							[_startPos,_endPos,_alt,_speed,selectRandom _this] call BIS_fnc_ambientFlyby;\
						};\
					};\
				}";
			defaultValue = "[]";
		};
		class Enh_StartPos
		{
			displayName = $STR_ENH_ambientFlyby_startPosition_displayName;
			tooltip = "";
			property = "Enh_ambientFlyby_startPos";
			control = "EditXYZ";
			expression = "missionNamespace setVariable ['Enh_ambientFlyby_startPos',_value]";
			defaultValue = "[0,0,0]";
		};
		class Enh_EndPos
		{
			displayName = $STR_ENH_ambientFlyby_endPosition_displayName;
			tooltip = "";
			property = "Enh_ambientFlyby_endPos";
			control = "EditXYZ";
			expression = "missionNamespace setVariable ['Enh_ambientFlyby_endPos',_value]";
			defaultValue = "[1000,1000,0]";
		};
		class Enh_Altitude
		{
			displayName = $STR_ENH_ambientFlyby_altitude_displayName;
			tooltip = $STR_ENH_ambientFlyby_altitude_tooltip;
			property = "Enh_ambientFlyby_altitude";
			control = "EditZ";
			expression = "missionNamespace setVariable ['Enh_ambientFlyby_altitude',_value]";
			defaultValue = "100";
			typeName = "NUMBER";
		};
		class Enh_Speed
		{
			displayName = $STR_ENH_ambientFlyby_speed_displayName;
			tooltip = $STR_ENH_ambientFlyby_speed_tooltip;
			property = "Enh_ambientFlyby_speed";
			control = "Enh_speedMode";
			expression = "missionNamespace setVariable ['Enh_ambientFlyby_speed',_value]";
			defaultValue = "normal";
			typeName = "STRING";
		};
		class Enh_Iterations
		{
			displayName = $STR_ENH_ambientFlyby_iterations_displayName;
			tooltip = "";
			property = "Enh_ambientFlyby_iterations";
			control = "Edit";
			expression = "missionNamespace setVariable ['Enh_ambientFlyby_iterations',_value]";
			defaultValue = "1";
			typeName = "NUMBER";
		};
		class Enh_Delay
		{
			displayName = $STR_ENH_ambientFlyby_delay_displayName;
			tooltip = $STR_ENH_ambientFlyby_delay_tooltip;
			property = "Enh_ambientFlyby_Delay";
			control = "SliderTime";
			expression = "missionNamespace setVariable ['Enh_ambientFlyby_delay',_value]";
			defaultValue = "360";
			typeName = "NUMBER";
		};
	};
};
