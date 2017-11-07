class Enh_SaveLoadout
{
   displayName = $STR_ENH_saveLoadout_displayName;
   tooltip = $STR_ENH_saveLoadout_tooltip;
   property = "Enh_saveLoadout";
   control = "Checkbox";
   expression =
   "\
      if (!is3DEN && hasInterface && _value) then\
      {\
         [] spawn\
         {\
            waitUntil {sleep 1; !isNull player};\
            if (isNil {player getVariable 'Enh_savedLoadout'}) then\
            {\
               player setVariable ['Enh_savedLoadout',getUnitloadout player];\
               player addEventHandler ['Respawn',{player setUnitLoadout (player getVariable 'Enh_savedLoadout')}];\
            };\
         };\
      };\
   ";
   defaultValue = "false";
};
