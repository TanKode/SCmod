_veh = _this select 0;
while {alive _veh} do {
sleep 0.5;
if (isEngineOn _veh) then {
_veh animateDoor ['Door_1_source',0];
_veh animateDoor ['Door_2_source',0];
_veh animateDoor ['Door_3_source',0];
} else {
_veh animateDoor ['Door_1_source',1];
_veh animateDoor ['Door_2_source',1];
_veh animateDoor ['Door_3_source',1];
};
};
