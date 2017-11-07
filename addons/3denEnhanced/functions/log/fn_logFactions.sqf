/*
	Author: Revo

	Description:
	Logs faction class names of selected objects to clipboard

	Parameter(s):
	-
	Returns:
   true
*/

private _selection = get3DENSelected "object";
private _faction_array = [];

if (count _selection == 0) exitWith {false};

if ((count _selection) == 1) then
{
   copyToClipboard str (faction (_selection select 0));
}
else
{
   {
      private _faction_x = faction _x;
      _faction_array pushBackUnique _faction_x;
      false;
   } count _selection;

   copyToClipboard str _faction_array;
};

["Enh_DataCopied"] call BIS_fnc_3DENNotification;

true
