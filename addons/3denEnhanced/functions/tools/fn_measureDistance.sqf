/*
   Author: Revo

   Description:
   Measures the distance between two positions.

   Parameter(s):
   -
   Returns:
   true
*/

#define SPEED_COEF 14.15//Average speed of a soldier
#define POS_ARRAY [parseNumber ctrlText ((findDisplay 313) displayCtrl 1052),parseNumber ctrlText ((findDisplay 313) displayCtrl 1053),parseNumber ctrlText ((findDisplay 313) displayCtrl 1054)]

if (isNil "Enh_measureDistance_var") then
{
   Enh_measureDistance_var = POS_ARRAY;
   ["Select second point"] call BIS_fnc_3DENNotification;
}
else
{
   private _distance3D = Enh_measureDistance_var distance POS_ARRAY;
   private _distance2D = Enh_measureDistance_var distance2D POS_ARRAY;
   private _travelTime = [_distance3D / 1000 / SPEED_COEF] call BIS_fnc_timeToString;

   [
      format
      [
         "Distance 2D: %1 m Distance 3D: %2 m Travel Time (on foot): %3",
         _distance2D,
         _distance3D,
         _travelTime
      ],
      0,
      20
   ] call BIS_fnc_3DENNotification;

   Enh_measureDistance_var = nil;
};

true
