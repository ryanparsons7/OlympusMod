/*
	Author: Revo

	Description:
	Switches time quickly to 12 o'clock for editing and sets fog, overcast and rain to 0. Calling the function again, will reset the time to the original one.

	Parameter(s):
	-
	Returns:
	true
*/

if (isNil "Enh_savedEnvironment") then
{
	Enh_savedEnvironment = [daytime,fog,overcast,rain];
	0 setFog 0;
	0 setOvercast 0;
	0 setRain 0;
	skipTime (12 - daytime);
}
else
{
	0 setFog (Enh_savedEnvironment select 1);
	0 setOvercast (Enh_savedEnvironment select 2);
	0 setRain (Enh_savedEnvironment select 3);
	skipTime ((Enh_savedEnvironment select 0) - daytime);
	Enh_savedEnvironment = nil;
};

["Enh_actionPerformed"] call BIS_fnc_3DENNotification;

true