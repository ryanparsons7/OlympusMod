class Enh_IntroText_Category
{
	collapsed = 1;
	displayName = $STR_ENH_introText_displayName;
	class Attributes
	{
		class Enh_IntroText
		{
			property = "Enh_introText";
			control = "Enh_IntroText";
			expression =
			"\
				if (!is3DEN && (_value select 0) > 0 && hasInterface) then\
				{\
					_value spawn\
					{\
						waitUntil {time > (_this select 0)};\
						if !(_this select 4) then\
						{\
							private _text = parseText format\
							[\
								""<t align='right' size='1.6'><t font='PuristaBold' size='1.8'>%1<br/></t>%2<br/>%3</t>"",\
								_this select 1,\
								_this select 2,\
								_this select 3\
							];\
							[_text,true] spawn BIS_fnc_textTiles;\
						}\
						else\
						{\
							[_this select 1,_this select 2,_this select 3] spawn BIS_fnc_EXP_camp_SITREP;\
						};\
					};\
				}";
			defaultValue = "[0,'','','',false]";
		};
	};
};