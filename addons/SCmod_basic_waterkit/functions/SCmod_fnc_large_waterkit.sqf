private ["_logic", "_units", "_activated"];
_logic = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_units = [_this, 1, [], [[]]] call BIS_fnc_param;
_activated = [_this, 2, true, [true]] call BIS_fnc_param;

if (_activated) then {

	{[_x] exec "\SCmod_basic_waterkit\functions\SCmod_waterkit_CH49.sqs";} forEach _units;
	{[_x] exec "\SCmod_basic_waterkit\functions\SCmod_flexible_tank_CH49.sqs";} forEach _units;
};
true;