/*
   Author: Revo

   Description:
   Gets the size of the currently selected object. (Code taking from the wiki).

   Parameter(s):
   -

   Returns:
   true
*/

private _object = (get3DENSelected "object") select 0;


private _bbr = boundingBoxReal _object;
private _p1 = _bbr select 0;
private _p2 = _bbr select 1;
private _width = abs ((_p2 select 0) - (_p1 select 0));
private _length = abs ((_p2 select 1) - (_p1 select 1));
private _height = abs ((_p2 select 2) - (_p1 select 2));
private _class = typeOf _object;
private _displayName = getText (configfile >> "CfgVehicles" >> _class >> "displayName");

systemChat format ["Name: %1",_displayName];
systemChat format ["Width: %1 m",_width];
systemChat format ["Length: %1 m",_length];
systemChat format ["Hight: %1 m",_height];

true