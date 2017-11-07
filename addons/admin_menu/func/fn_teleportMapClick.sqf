params["_fullmapWindow","_type","_x","_y"];

if (_type == 0) then { // left click
	// teleport the unit.
	
	private _target = adminMenu_teleportTarget;
	private _pos =  _fullmapWindow posScreenToWorld [_x,_y];  // 0 is the height on which you tele too 


	if (_target isEqualType grpNull) then {
		private _group = _target;
		{
			_pos set [1,(_pos select 1)+1.2];
			_x setPos _pos;  
		} forEach (units _group);
		 hint format ["%1 and their group was teleported.",name (leader _group)];
	} else { // is Unit
		_target setPos _pos;
		hint format ["%1 was teleported.",(name _target)];
	};
	
    closeDialog 1949;
};