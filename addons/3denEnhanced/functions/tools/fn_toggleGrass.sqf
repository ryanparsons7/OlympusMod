/*
	Author: Revo

	Description:
	A function to quickly disable grass while editing.

	Parameter(s):
	-
	Returns:
	true/false
*/

if !(is3DEN) exitWith {false};

disableSerialization;

if (isNil "Enh_eden_terrainGrid") then
{
 Enh_eden_terrainGrid = getTerrainGrid;
 setTerrainGrid 50;
}
else
{
 setTerrainGrid 3.125;
 Enh_eden_terrainGrid = nil;
};

["Enh_actionPerformed"] call BIS_fnc_3DENNotification;

true
