class Enh_EstablishingShot: Title
{
	attributeLoad =
	"\
		_center = _value param [0,[0,0,0],[[]],3];\
		_text = _value param [1,toUpper worldName,['']];\
		_alt = _value param [2,150,[0]];\
		_r = _value param [3,300,[0]];\
		_angle = _value param [4,45,[0]];\
		\
		_ctrlCenter = _this controlsGroupCtrl 100;\
		_ctrlText = _this controlsGroupCtrl 101;\
		_ctrlAltitude = _this controlsGroupCtrl 102;\
		_ctrlRadius = _this controlsGroupCtrl 103;\
		_ctrlAngle  = _this controlsGroupCtrl 104;\
		\
		_ctrlCenter ctrlSetText str _center;\
		_ctrlText ctrlSetText _text;\
		_ctrlAltitude ctrlSetText str _alt;\
		_ctrlRadius ctrlSetText str _r;\
		_ctrlAngle ctrlSetText str _angle";

	attributeSave =
	"\
		_ctrlCenter = _this controlsGroupCtrl 100;\
		_ctrlText = _this controlsGroupCtrl 101;\
		_ctrlAltitude = _this controlsGroupCtrl 102;\
		_ctrlRadius = _this controlsGroupCtrl 103;\
		_ctrlAngle  = _this controlsGroupCtrl 104;\
		\
		_value =\
		[\
			call compile ctrlText _ctrlCenter,\
			ctrlText _ctrlText,\
			parseNumber ctrlText _ctrlAltitude,\
			parseNumber ctrlText _ctrlRadius,\
			parseNumber ctrlText _ctrlAngle\
		];\
		_value";

	h = ATTRIBUTE_CONTENT_W * GRID_W / 1.85;
	class Controls: Controls
	{
		class CenterTitle: Title
		{
			text = $STR_ENH_establishingShot_centerPos_displayName;
			tooltip = $STR_ENH_establishingShot_centerPos_tooltip;
		};
		class TextTitle: Title
		{
			y = SIZE_M * GRID_H + 5 * pixelH;
			text = $STR_ENH_establishingShot_displayedText;
		};
		class AltitudeTitle: Title
		{
			y = 2 * SIZE_M * GRID_H + 10 * pixelH;
			text = $STR_ENH_establishingShot_altitude_displayName;
		};
		class RadiusTitle: Title
		{
			y = 3 * SIZE_M * GRID_H + 15 * pixelH;
			text = $STR_ENH_establishingShot_radius_displayName;
		};
		class AngleTitle: Title
		{
			y = 4 * SIZE_M * GRID_H + 20 * pixelH;
			text = $STR_ENH_establishingShot_viewingAngle_displayName;
		};
		class CenterValue: ctrlEdit
		{
			idc = 100;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			w = ATTRIBUTE_CONTENT_W * GRID_W;
			h = SIZE_M * GRID_H;
		};
		class TextValue: CenterValue
		{
			idc = 101;
			y = SIZE_M * GRID_H + 5 * pixelH;
		};
		class AltitudeValue: CenterValue
		{
			idc = 102;
			y = 2 * SIZE_M * GRID_H + 10 * pixelH;
		};
		class RadiusValue: CenterValue
		{
			idc = 103;
			y = 3 * SIZE_M * GRID_H + 15 * pixelH;
		};
		class AngleValue: CenterValue
		{
			idc = 104;
			y = 4 * SIZE_M * GRID_H + 20 * pixelH;
		};
	};
};