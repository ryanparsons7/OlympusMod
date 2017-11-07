/*
	Author: Revo

	Description:
	Retrieves data of currently used Arma 3 version and formats this information so it can directly be used in bug reports or similar.

	Parameter(s):
	-
	Returns:
	true
*/

private _lb = toString [0x0D, 0x0A];//[Carriage Return, new line]

copyToClipboard format
[
	"Game: %1" + _lb + "Version: %2" + _lb + "Build: %3" + _lb + "Branch: %4" + _lb + "Mods enabled: %5" + _lb + "Operating System: %6" + _lb + "Architecture: %10" + _lb + _lb + "Resolution:" + _lb + "Width: %7" + _lb + "Height: %8" + _lb + "UI Scale: %9",
	productVersion select 0,
	(productVersion select 2) / 100,
	productVersion select 3,
	productVersion select 4,
	productVersion select 5,
	productVersion select 6,
	getResolution select 0,
	getResolution select 1,
	getResolution select 5,
	productVersion select 7
];

["Enh_DataCopied"] call BIS_fnc_3DENNotification;

true