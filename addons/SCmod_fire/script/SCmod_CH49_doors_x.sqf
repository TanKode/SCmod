_veh = _this select 0;
while {alive _veh} do {
sleep 0.5;
if (isEngineOn _veh) then {
_veh animateDoor ['door_back_L',0];
} else {
_veh animateDoor ['door_back_L',1];
};
};
