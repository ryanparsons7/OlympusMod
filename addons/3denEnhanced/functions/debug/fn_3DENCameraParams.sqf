/*
	Author: Revo

	Description:
	Exports Eden camera params. Exported params can also be pasted to place the camera precisely. Useful to track bugs or remember good locations.
	Exported params can also be used in the "Splendid Camera" (BIS_fnc_camera)

	Parameter(s):
	0: STRING: Input - Can either be "export" or "paste" (not case sensitive)

	Returns:
	true/false
*/

private _input = param [0,"Export",[""]];
if !(is3DEN) exitWith {};

switch (toUpper _input) do
{
	case "EXPORT":
	{
		private _cam = get3DENCamera;
		private _camPos = getPosATL _cam;
		private _camPitchBank = _cam call BIS_fnc_getPitchBank;
		private _world = worldName;
		private _camDir = direction _cam;
		private _accTime = accTime;

		copyToClipboard format ["[%1,%2,%3,0.7,%4,0,0,%5,%6,%7,1,0,1]",str _world,_camPos,_camDir,_camPitchBank,daytime * 60,overcast,_accTime];
		["Enh_DataCopied"] call BIS_fnc_3DENNotification;
		true
	};
	case "PASTE":
	{
		private _params = call compile copyFromClipboard;
		private _cam = get3DENCamera;
		private _world = _params param [0,worldName,[""]];
		private _pos = _params param [1,[0,0,0],[[]]];
		private _dir = _params param [2,[0],[0]];
		private _pitchBank = _params param [4,[[0,0]],[[]]];

		if !(worldName isEqualTo _world) exitWith
		{
			[
				format
				[
					"Camera params are for world ""%1"", you're currently on ""%2""",
					toUpper _world,
					toUpper worldname
				],
				1
			] call BIS_fnc_3DENNotification
		};

		_cam setPosATL _pos;
		_cam setDir _dir;
		[_cam,_pitchBank select 0,_pitchBank select 1] call BIS_fnc_setPitchBank;
		["Enh_actionPerformed"] call BIS_fnc_3DENNotification;

	};
	default {false};
};

