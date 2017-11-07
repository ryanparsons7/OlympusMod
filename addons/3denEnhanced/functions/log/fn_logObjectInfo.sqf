/*
   Author: Revo

   Description:
   Collects various information about the selected object and copies them to the clipboard.

   Parameter(s):
   -

   Returns:
   true/false
*/

_obj = (get3DENSelected "Object") select 0;

private _class = typeOf _obj;
private _pos = str getPosATL _obj;
private _dir = str getDir _obj;

private _size = boundingBoxReal _obj;
private _p1 = _size select 0;
private _p2 = _size select 1;
private _maxWidth = abs ((_p2 select 0) - (_p1 select 0));
private _maxLength = abs ((_p2 select 1) - (_p1 select 1));
private _maxHeight = abs ((_p2 select 2) - (_p1 select 2));

_size = str [_maxWidth,_maxHeight,_maxLength];

private _selectionNames = str selectionNames _obj;
private _kind = "N/A";
private _parents = str ([configfile >> "CfgVehicles" >> _class, true] call BIS_fnc_returnParents);
private _modelInfo = str getModelInfo _obj;
private _objType = str getObjectType _obj;
private _materials = str getObjectMaterials _obj;
private _textures = str getObjectTextures _obj;
private _objParent = str objectParent _obj;
private _animationNames = str animationNames _obj;

{
	if (_obj isKindOf _x) then {_kind = _x};
} forEach ["Air","Land","Sea","Tank","Man"];

private _text =
[
	"************************CLASS************************" + endl + _class,
	"************************POSITION ATL************************" + endl + _pos,
	"************************DIRECTION************************" + endl + _dir,
	"************************SIZE************************" + endl + _size,
	"************************SELECTION NAMES************************"  + endl + _selectionNames,
	"************************KIND OF************************" + endl + _kind,
	"************************PARENTS************************" + endl + _parents,
	"************************MODEL INFO************************" + endl + _modelInfo,
	"************************OBJECT TYPE************************" + endl + _objType,
	"************************MATERIALS************************" + endl + _materials,
	"************************TEXTURES************************" + endl + _textures,
	"************************OBJECT PARENT************************" + endl + _objParent,
	"************************ANIMATION NAMES************************" + endl + _animationNames
] joinString endl;

copyToClipboard _text;

["Enh_DataCopied"] call BIS_fnc_3DENNotification;

