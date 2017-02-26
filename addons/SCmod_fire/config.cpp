class CfgPatches
{
	class SCmod_fire
	{
		units[]=
		{
			"SCmod_fire",
			"burned_grd",
			"MI290_Taru_SC",
			"CH67_Huron_SC",
			"CH49_Mohawk_SC",
			"WY55_SC",
			"PO30_SC",
			"Zamak_fuel_SC",
			"HEMTT_supply_SC",
			"Pilot_SC",
			"Operator_SC",
			"Pilot_SC_1990",
			"Diver_SC",
			"Offroad_SC",
			"Tempest_SC_supply",
			"Tempest_SC_water",
			"Tempest_SC_transport",
			"heli_water_kit",
			"heli_water_kit_CH49",
			"heli_water_kit_MI290",
			"heli_water_kit_AS532",
			"heli_water_kit_SA330",
			"heli_water_kit_412",
			"heli_water_kit_HH67",
			"heli_bamby_bucket",
			"SCBasket",
			"flexible_tank",
			"sc_reflection_mirror",
			"sc_reflection_mirror_2",
			"sc_reflection_mirror_3",
			"sc_reflection_mirror_4",
			"sc_nose",
			"sc_winch",
			"sc_tanks",
			"sc_gear",
			"wtrkit_Pipe",
			"wtrkit_Pipe2",
			"wtrkit_Pipe3"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F_Beta_Heli_Transport_02"
		};
	};
};
class CfgVehicleClasses
{
	class SCmod
	{
		displayName="SCmod";
	};
	class SCmod90
	{
		displayName="SCmod 1990";
	};
};
class CfgSounds
{
	class SCPump
	{
		sound[]=
		{
			"\SCmod_fire\sound\SCpump.wss",
			0.80000001,
			1
		};
		name="SCPump";
		titles[]=
		{
			0,
			"device is submerged"
		};
	};
	class generic_garbled_1
	{
		sound[]=
		{
			"\SCmod_fire\sound\generic_garbled_1.wss",
			2.2,
			1
		};
		name="generic_garbled_1";
		titles[]={};
	};
	class generic_garbled_2
	{
		sound[]=
		{
			"\SCmod_fire\sound\generic_garbled_2.wss",
			2.2,
			1
		};
		name="generic_garbled_2";
		titles[]={};
	};
	class generic_garbled_3
	{
		sound[]=
		{
			"\SCmod_fire\sound\generic_garbled_3.wss",
			2.2,
			1
		};
		name="generic_garbled_3";
		titles[]={};
	};
	class generic_garbled_4
	{
		sound[]=
		{
			"\SCmod_fire\sound\generic_garbled_4.wss",
			2.2,
			1
		};
		name="generic_garbled_4";
		titles[]={};
	};
	class SCSiren
	{
		sound[]=
		{
			"\SCmod_fire\sound\SCSiren.wss",
			3.9000001,
			1.2
		};
		name="SCSiren";
		titles[]={};
	};
};
class CfgCloudlets
{
	class BigDestructionSmoke;
	class SCBigDestructionSmoke: BigDestructionSmoke
	{
		interval=0.079999998;
		circleRadius=1;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=90;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={6,64};
		color[]=
		{
			{0.88,0.88,0.88,0.28},
			{0.88,0.88,0.88,0.22},
			{0.88,0.88,0.88,0.2},
			{0.93000001,0.93000001,0.93000001,0.12},
			{0.93000001,0.93000001,0.93000001,0.059999999},
			{0.93000001,0.93000001,0.93000001,0.02},
			{0.94,0.94,0.94,0.059999999},
			{0.98000002,0.98000002,0.98000002,0.0099999998},
			{0.98000002,0.98000002,0.98000002,0}
		};
		colorCoef[]={0.92000002,0.92000002,0.92000002,0.40000001};
		animationSpeed[]={1,0.55000001,0.34999999};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=8;
		positionVar[]={0.15000001,0.15000001,0.15000001};
		MoveVelocityVar[]={0.25,0.5,0.25};
		rotationVelocityVar=0.5;
		sizeVar=0;
		colorVar[]={0,0,0,0.059999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class CfgAmmo
{
	class LaserBombCore;
	class water9000: LaserBombCore
	{
		hit=1;
		displayName="WATER";
		indirectHit=0;
		indirectHitRange=1;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		explosive="false";
		cost=30;
		airLock="false";
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class Laserbatteries: VehicleMagazine
	{
	};
	class water9000Mag: Laserbatteries
	{
		ammo="water9000";
		count=100;
		displayName="9000L_MAG";
		initSpeed=10000;
		autoFire="true";
	};
};
class CfgWeapons
{
	class Laserdesignator;
	class water9000: Laserdesignator
	{
		displayName="Universal waterkit fixed tank";
		sounds[]={};
		scope=2;
		burst=2;
		reloadTime=9.9999997e-010;
		autoFire="true";
		magazines[]=
		{
			"water9000Mag"
		};
		minRange=1;
		minRangeProbab=0.94999999;
		midRange=500;
		midRangeProbab=0.75;
		maxRange=850;
		maxRangeProbab=0.1;
		maxLeadSpeed=10000;
	};
	class water10000: water9000
	{
		displayName="Large waterkit fixed tank";
		sounds[]={};
		scope=2;
		burst=2;
		reloadTime=9.9999997e-010;
		autoFire="true";
		magazines[]=
		{
			"water9000Mag"
		};
		minRange=1;
		minRangeProbab=0.94999999;
		midRange=500;
		midRangeProbab=0.75;
		maxRange=850;
		maxRangeProbab=0.1;
		maxLeadSpeed=10000;
	};
	class water8000: water9000
	{
		displayName="Universal bucket bladder";
		sounds[]={};
		scope=2;
		burst=3;
		reloadTime=9.9999997e-010;
		autoFire="true";
		magazines[]=
		{
			"water9000Mag"
		};
		minRange=1;
		minRangeProbab=0.94999999;
		midRange=500;
		midRangeProbab=0.75;
		maxRange=850;
		maxRangeProbab=0.1;
		maxLeadSpeed=10000;
	};
	class water7000: water9000
	{
		displayName="Large waterkit fixed tank";
		sounds[]={};
		scope=2;
		burst=3;
		reloadTime=9.9999997e-010;
		autoFire="true";
		magazines[]=
		{
			"water9000Mag"
		};
		minRange=1;
		minRangeProbab=0.94999999;
		midRange=500;
		midRangeProbab=0.75;
		maxRange=850;
		maxRangeProbab=0.1;
		maxLeadSpeed=10000;
	};
	class water6000: water9000
	{
		displayName="Modular Airborne System";
		sounds[]={};
		scope=2;
		burst=3;
		reloadTime=9.9999997e-010;
		autoFire="true";
		magazines[]=
		{
			"water9000Mag"
		};
		minRange=1;
		minRangeProbab=0.94999999;
		midRange=500;
		midRangeProbab=0.75;
		maxRange=850;
		maxRangeProbab=0.1;
		maxLeadSpeed=10000;
	};
	class water5000: water9000
	{
		displayName="Belly mounted tank";
		sounds[]={};
		scope=2;
		burst=3;
		reloadTime=9.9999997e-010;
		autoFire="true";
		magazines[]=
		{
			"water9000Mag"
		};
		minRange=1;
		minRangeProbab=0.94999999;
		midRange=500;
		midRangeProbab=0.75;
		maxRange=850;
		maxRangeProbab=0.1;
		maxLeadSpeed=10000;
	};
};
class cfgSkeletons
{
	class heli_bamby_bucket_Skeleton
	{
		isDiscrete=1;
		skeletonInherit="";
		skeletonBones[]=
		{
			"water_0",
			"water_1",
			"water_2",
			"water_3",
			"water_4",
			"water_niv_0",
			"water_niv_1",
			"water_niv_2",
			"water_niv_3",
			"water_niv_4",
			"water_ins_0",
			"water_ins_1",
			"water_ins_2",
			"water_ins_3",
			"water_ins_4"
		};
	};
};
class CfgModels
{
	class Default
	{
		sectionsInherit="";
		sections[]={};
		skeletonName="";
	};
	class heli_bamby_bucket
	{
		sectionsInherit="";
		sections[]=
		{
			"water_0",
			"water_1",
			"water_2",
			"water_3",
			"water_4",
			"water_niv_0",
			"water_niv_1",
			"water_niv_2",
			"water_niv_3",
			"water_niv_4",
			"water_ins_0",
			"water_ins_1",
			"water_ins_2",
			"water_ins_3",
			"water_ins_4"
		};
		skeletonName="heli_bamby_bucket_Skeleton";
	};
};
class CfgVehicles
{
	class Heli_Transport_02_base_F;
	class CH49_Mohawk_SC: Heli_Transport_02_base_F
	{
		_generalMacro="B_Heli_Transport_02_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		side=3;
		faction="SCmod";
		displayName="HH-49";
		crew="Pilot_SC";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\CH49_SCmod_1.paa",
			"SCmod_fire\Data\CH49_SCmod_2.paa",
			"SCmod_fire\Data\CH49_SCmod_3.paa"
		};
		typicalCargo[]=
		{
			"Operator_SC"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		driverIsCommander=1;
		hasGunner=1;
		weapons[]={};
		magazines[]={};
		maxSpeed=319;
		liftForceCoef=1.0599999;
		cyclicAsideForceCoef=1;
		cyclicForwardForceCoef=0.85000002;
		backRotorForceCoef=0.77999997;
		extCameraPosition[]={0,2.2,-22.5};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_mirror.sqs""; _this execVM ""\SCmod_fire\script\SCmod_CH49_doors_x.sqf"";";
		};
	};
	class B_Heli_Transport_03_unarmed_F;
	class CH67_Huron_SC: B_Heli_Transport_03_unarmed_F
	{
		_generalMacro="B_Heli_Transport_03_unarmed_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		side=3;
		faction="SCmod";
		displayName="HH-67";
		crew="Pilot_SC";
		gearRetracting="false";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\Huron_SCmod_1.paa",
			"SCmod_fire\Data\Huron_SCmod_2.paa"
		};
		typicalCargo[]=
		{
			"Operator_SC"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		weapons[]={};
		magazines[]={};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew.sqs""; _this execVM ""\SCmod_fire\script\SCmod_CH67_doors_x.sqf"";";
		};
	};
	class O_Heli_Transport_04_F;
	class MI290_Taru_SC: O_Heli_Transport_04_F
	{
		_generalMacro="O_Heli_Transport_04_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		side=3;
		faction="SCmod";
		displayName="MI-292";
		crew="Pilot_SC";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		weapons[]={};
		magazines[]={};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_3.sqs""; _this execVM ""\SCmod_fire\script\SCmod_MI290_doors_x.sqf"";";
		};
	};
	class O_Heli_Light_02_unarmed_F;
	class PO30_SC: O_Heli_Light_02_unarmed_F
	{
		_generalMacro="O_Heli_Light_02_unarmed_F;";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		side=3;
		faction="SCmod";
		displayName="PO-32";
		crew="Pilot_SC";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		weapons[]={};
		magazines[]={};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_4.sqs"";";
		};
	};
	class I_Truck_02_fuel_F;
	class Zamak_fuel_SC: I_Truck_02_fuel_F
	{
		_generalMacro="C_SUV_01_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		displayName="Zamak supply";
		side=3;
		faction="SCmod";
		vehicleclass="Support";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		crew="Operator_SC";
		preferRoads="true";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\SCmod_Zamak.paa",
			"SCmod_fire\Data\SCmod_Zamak_fuel.paa"
		};
		availableForSupportTypes[]={};
		transportRepair=1e+012;
		transportFuel=1e+012;
	};
	class B_Truck_01_fuel_F;
	class HEMTT_supply_SC: B_Truck_01_fuel_F
	{
		_generalMacro="C_SUV_01_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		displayName="HEMTT water";
		side=3;
		faction="SCmod";
		vehicleclass="Support";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		crew="Operator_SC";
		preferRoads="true";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\SCmod_HEMTT.paa",
			"SCmod_fire\Data\SCmod_HEMTT_truck.paa",
			"SCmod_fire\Data\SCmod_HEMTT_fuel.paa"
		};
		availableForSupportTypes[]={};
		transportRepair=1e+012;
	};
	class C_man_pilot_F;
	class Pilot_SC: C_man_pilot_F
	{
		scope=2;
		author="CheyenneAH56";
		displayName="Pilot";
		side=3;
		faction="SCmod";
		vehicleclass="Men";
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_pilot.sqs""";
		};
	};
	class Pilot_SC_1990: Pilot_SC
	{
		scope=2;
		author="CheyenneAH56";
		displayName="Pilot";
		side=3;
		faction="SCmod90";
		vehicleclass="Men";
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_pilot_2.sqs""";
		};
	};
	class Diver_SC: C_man_pilot_F
	{
		scope=2;
		author="CheyenneAH56";
		displayName="Diver";
		side=3;
		faction="SCmod";
		vehicleclass="Men";
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_diver.sqs""";
		};
	};
	class C_Marshal_F;
	class Operator_SC: C_Marshal_F
	{
		scope=2;
		author="CheyenneAH56";
		displayName="Crew";
		side=3;
		faction="SCmod";
		vehicleclass="Men";
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_operator.sqs""";
		};
	};
	class C_Offroad_01_F;
	class Offroad_SC: C_Offroad_01_F
	{
		_generalMacro="C_Offroad_01_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		displayName="Offroad";
		side=3;
		faction="SCmod";
		vehicleclass="Car";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		crew="Operator_SC";
		preferRoads="true";
		availableForSupportTypes[]={};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_offroad.sqs""";
		};
	};
	class O_Truck_03_ammo_F;
	class Tempest_SC_supply: O_Truck_03_ammo_F
	{
		_generalMacro="O_Truck_03_ammo_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		displayName="Tempest supply";
		side=3;
		faction="SCmod";
		vehicleclass="Support";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		crew="Operator_SC";
		preferRoads="true";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\tempest_SC_01.paa",
			"SCmod_fire\Data\tempest_SC_02.paa",
			"SCmod_fire\Data\tempest_SC_03.paa"
		};
		availableForSupportTypes[]={};
		transportRepair=1e+012;
		transportAmmo=0;
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_tempest.sqs""";
		};
	};
	class O_Truck_03_repair_F;
	class Tempest_SC_water: O_Truck_03_repair_F
	{
		_generalMacro="O_Truck_03_repair_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		displayName="Tempest water";
		side=3;
		faction="SCmod";
		vehicleclass="Support";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		crew="Operator_SC";
		preferRoads="true";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\tempest_SC_01.paa",
			"SCmod_fire\Data\tempest_SC_02.paa",
			"SCmod_fire\Data\tempest_SC_04.paa"
		};
		availableForSupportTypes[]={};
		transportRepair=1e+012;
		transportAmmo=1e+012;
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_tempest.sqs""";
		};
	};
	class O_Truck_03_transport_F;
	class Tempest_SC_transport: O_Truck_03_transport_F
	{
		_generalMacro="O_Truck_03_transport_F";
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		displayName="Tempest transport";
		side=3;
		faction="SCmod";
		vehicleclass="Car";
		typicalCargo[]=
		{
			"Operator_SC"
		};
		crew="Operator_SC";
		preferRoads="true";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\tempest_SC_01.paa",
			"SCmod_fire\Data\tempest_SC_02.paa",
			"SCmod_fire\Data\tempest_SC_06.paa"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		transportRepair=1e+012;
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_tempest.sqs""";
		};
	};
	class I_Heli_light_03_unarmed_F;
	class WY55_SC: I_Heli_light_03_unarmed_F
	{
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		side=3;
		faction="SCmod";
		displayName="HH-56";
		crew="Pilot_SC";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\Data\SCmod_Hellcat.paa"
		};
		typicalCargo[]=
		{
			"Operator_SC"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		weapons[]={};
		magazines[]={};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_2.sqs""";
		};
	};
	class Land_MetalBarrel_empty_F;
	class SCmod_fire: Land_MetalBarrel_empty_F
	{
		model="\SCmod_fire\data\SCfire.p3d";
		scope=1;
		Icon="\SCmod_fire\data\SCfire.paa";
		coefInside=2;
		coefInsideHeur=4.3000002;
		vehicleClass="SCmod";
		displayName="Bushfire";
		soundEngine[]={};
		soundEnviron[]={};
		mapSize=0.30000001;
		side="TEnemy";
		accuracy=1;
		animated="false";
		Audible=100;
		irtarget="true";
		lasertarget="true";
		armor=9000;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		cost=150000;
		threat[]={1,1,1};
		class DestructionEffects
		{
		};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_fire.sqs""";
		};
	};
	class NonStrategic;
	class HeliH: NonStrategic
	{
	};
	class burned_grd: HeliH
	{
		_generalMacro="Helipad_base_F";
		mapSize=11.92;
		scope=1;
		scopeCurator=1;
		displayName="burned_grd";
		model="\SCmod_fire\data\burned_grd.p3d";
		icon="iconObject_circle";
		vehicleClass="SCmod";
		destrType="DestructNo";
		accuracy=0.2;
		animated=0;
		cost=0;
	};
	class heli_water_kit: C_Offroad_01_F
	{
		model="\SCmod_fire\data\heli_water_kit.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="heli waterkit";
		cost=400000;
		slingLoadMemoryPoint="SlingLoad0";
		slingLoadMaxCargoMass=60000;
		class eventhandlers
		{
		};
	};
	class heli_water_kit_CH49: heli_water_kit
	{
		model="\SCmod_fire\data\heli_water_kit_CH49.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="heli waterkit for CH49";
		cost=600000;
		slingLoadMemoryPoint="SlingLoad0";
		slingLoadMaxCargoMass=60000;
		class eventhandlers
		{
		};
	};
	class heli_water_kit_MI290: heli_water_kit
	{
		model="\SCmod_fire\data\heli_water_kit_MI290.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="heli waterkit for MI290";
		cost=600000;
		slingLoadMemoryPoint="SlingLoad0";
		slingLoadMaxCargoMass=60000;
		class eventhandlers
		{
		};
	};
	class heli_water_kit_AS532: heli_water_kit
	{
		model="\SCmod_fire\data\heli_water_kit_AS532.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="heli waterkit for AS-532";
		cost=600000;
		slingLoadMemoryPoint="SlingLoad0";
		slingLoadMaxCargoMass=60000;
		class eventhandlers
		{
		};
	};
	class heli_water_kit_SA330: heli_water_kit
	{
		model="\SCmod_fire\data\heli_water_kit_SA330.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="heli waterkit for SA-330";
		cost=600000;
		slingLoadMemoryPoint="SlingLoad0";
		slingLoadMaxCargoMass=60000;
		class eventhandlers
		{
		};
	};
	class heli_water_kit_412: heli_water_kit
	{
		model="\SCmod_fire\data\heli_water_kit_412.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="heli waterkit for HH-412";
		cost=600000;
		slingLoadMemoryPoint="SlingLoad0";
		slingLoadMaxCargoMass=60000;
		class eventhandlers
		{
		};
	};
	class heli_water_kit_HH67: heli_water_kit
	{
		model="\SCmod_fire\data\heli_water_kit_HH67.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="heli waterkit for HH-67";
		cost=600000;
		slingLoadMemoryPoint="SlingLoad0";
		slingLoadMaxCargoMass=60000;
		class eventhandlers
		{
		};
	};
	class CargoNet_01_box_F;
	class heli_bamby_bucket: CargoNet_01_box_F
	{
		model="\SCmod_fire\data\heli_bamby_bucket.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="bamby bucket";
		hiddenSelections[]=
		{
			"water_0",
			"water_1",
			"water_2",
			"water_3",
			"water_4",
			"water_niv_0",
			"water_niv_1",
			"water_niv_2",
			"water_niv_3",
			"water_niv_4",
			"water_ins_0",
			"water_ins_1",
			"water_ins_2",
			"water_ins_3",
			"water_ins_4"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_fire\data\bucket_texture.paa",
			"SCmod_fire\data\bucket_texture.paa",
			"SCmod_fire\data\bucket_texture.paa",
			"SCmod_fire\data\bucket_texture.paa",
			"SCmod_fire\data\bucket_texture.paa",
			"SCmod_fire\data\water_flx.paa",
			"SCmod_fire\data\water_flx.paa",
			"SCmod_fire\data\water_flx.paa",
			"SCmod_fire\data\water_flx.paa",
			"SCmod_fire\data\water_flx.paa",
			"#(rgb,8,8,3)color(0,0,0,1)",
			"#(rgb,8,8,3)color(0,0,0,1)",
			"#(rgb,8,8,3)color(0,0,0,1)",
			"#(rgb,8,8,3)color(0,0,0,1)",
			"#(rgb,8,8,3)color(0,0,0,1)"
		};
		cost=300000;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_bucket_lvl.sqs""";
		};
	};
	class Land_Pod_Heli_Transport_04_covered_F;
	class SCBasket: Land_Pod_Heli_Transport_04_covered_F
	{
		model="\SCmod_fire\data\SCBasket.p3d";
		vehicleClass="SCmod";
		author="CheyenneAH56";
		_generalMacro="Land_Pod_Heli_Transport_04_covered_F";
		cost=900000;
		canFloat="true";
		typicalCargo[]=
		{
			"C_Marshal_F"
		};
		crew="Operator_SC";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoDoors[]={};
		cargoAction[]={};
		memoryPointSupply="pos supply";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		waterLeakiness=125;
		waterLinearDampingCoefY=0.25;
		waterLinearDampingCoefX=0.25;
		waterResistance=0.1;
		waterResistanceCoef=0.0099999998;
		maximumLoad=1000;
		transportMaxBackpacks=2;
		transportMaxMagazines=10;
		transportMaxWeapons=1;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		scope=0;
		scopeCurator=0;
		displayName="Rescue Basket";
		icon="iconObject_1x2";
		accuracy=1000;
		supplyRadius=5;
		transportSoldier=1;
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={1};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};
	class Land_WaterTank_F;
	class flexible_tank: Land_WaterTank_F
	{
		author="CheyenneAH56";
		model="\SCmod_fire\data\flexible_tank.p3d";
		vehicleClass="SCmod";
		scope=2;
		displayName="Flexible tank";
		cost=900000;
	};
	class sc_reflection_mirror: Land_WaterTank_F
	{
		model="\SCmod_fire\data\heli_mirror.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="Heli Mirror";
		cost=900000;
		hiddenSelections[]=
		{
			"mirror_pip"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class sc_reflection_mirror_2: Land_WaterTank_F
	{
		model="\SCmod_fire\data\heli_mirror_2.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="Heli Mirror 2";
		cost=900000;
		hiddenSelections[]=
		{
			"mirror_pip"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class sc_reflection_mirror_3: Land_WaterTank_F
	{
		model="\SCmod_fire\data\heli_mirror_3.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="Heli Mirror 3";
		cost=900000;
		hiddenSelections[]=
		{
			"mirror_pip"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class sc_reflection_mirror_4: Land_WaterTank_F
	{
		model="\SCmod_fire\data\heli_mirror_4.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="Heli Mirror 4";
		cost=900000;
		hiddenSelections[]=
		{
			"mirror_pip"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class sc_nose: Land_WaterTank_F
	{
		model="\SCmod_fire\data\SCNose.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="HH-56 Nose";
		cost=900000;
	};
	class sc_tanks: Land_WaterTank_F
	{
		model="\SCmod_fire\data\SCTanks.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="HH-67 Tanks";
		cost=900000;
	};
	class sc_gear: Land_WaterTank_F
	{
		model="\SCmod_fire\data\SCGear.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="HH-67 Gear";
		cost=900000;
	};
	class sc_winch: Land_WaterTank_F
	{
		model="\SCmod_fire\data\SCwinch.p3d";
		vehicleClass="SCmod";
		scope=1;
		displayName="HH-67 Winch";
		cost=900000;
	};
	class RoadCone_L_F;
	class wtrkit_Pipe: C_Offroad_01_F
	{
		scope=1;
		vehicleClass="SCmod";
		model="\SCmod_fire\data\wtrkit_pipe.p3d";
		displayName="waterkit pipe";
		destructype="Destructno";
		cost=0;
		armor=999999;
		animated=1;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
	};
	class wtrkit_Pipe2: C_Offroad_01_F
	{
		scope=1;
		vehicleClass="SCmod";
		model="\SCmod_fire\data\wtrkit_pipe2.p3d";
		displayName="waterkit pipe2";
		destructype="Destructno";
		cost=0;
		armor=999999;
		animated=1;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
	};
	class wtrkit_Pipe3: C_Offroad_01_F
	{
		scope=1;
		vehicleClass="SCmod";
		model="\SCmod_fire\data\wtrkit_pipe3.p3d";
		displayName="waterkit pipe3";
		destructype="Destructno";
		cost=0;
		armor=999999;
		animated=1;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
	};
};
class cfgMods
{
	author="76561198015646777";
	timepacked="1479673514";
};
