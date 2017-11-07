class Enh_MakeHostage: Enh_SetCaptive
{
	displayName = $STR_ENH_makeHostage_displayName;
	tooltip = $STR_ENH_makeHostage_tooltip;
	property = "Enh_makeHostage";
	expression =
	"\
		if (isServer && _value) then\
		{\
			Enh_fnc_makeHostage =\
			{\
				if (_this getVariable ['Enh_isHostage',true]) then\
				{\
					_this switchMove 'Acts_AidlPsitMstpSsurWnonDnon04';\
					[\
					  _this,\
					  'Free Hostage',\
					  'A3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_unbind_ca.paa',\
					  'A3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_unbind_ca.paa',\
					  '_target getVariable [''Enh_isHostage'',true]',\
					  'true',\
					  {},\
					  {},\
					  {\
					  	[_this select 0,'AmovPercMstpSnonWnonDnon'] remoteExec ['playMoveNow',0];\
					  	[_this select 0,_this select 2] remoteExec ['BIS_fnc_holdActionRemove',0];\
					  	(_this select 0) setVariable ['Enh_isHostage',false,true];\
					  }\
					 ] call BIS_fnc_holdActionAdd;\
				};\
			};\
			[_this,Enh_fnc_makeHostage] remoteExec ['call',0,true];\
		};\
	";
};