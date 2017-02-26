_veh = _this select 0;
while {alive _veh} do {
sleep 0.5;
if (isEngineOn _veh) then {
_veh animateDoor ['Door_L_source',0];
} else {
_veh animateDoor ['Door_L_source',1];
};
};
