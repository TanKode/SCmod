class BIS_AddonInfo
{
	author="76561198015646777";
	timepacked="1446392820";
};
class CfgPatches
{
	class SCmod_cougar
	{
		units[]=
		{
			"SCmod_cougar"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Air_F"
		};
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class All
	{
	};
	class AllVehicles: All
	{
	};
	class Air: AllVehicles
	{
	};
	class Helicopter: Air
	{
		class NewTurret;
		class AnimationSources;
		class ViewPilot;
		class Turrets;
		class MainTurret;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Reflectors
		{
			class Right;
			class Left;
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class NewTurret;
		class Reflectors
		{
			class Right;
			class Left;
		};
	};
	class SCmod_cougar_base: Helicopter_Base_H
	{
		scope=0;
		author="CheyenneAH56";
		mapSize=16.01;
		type=2;
		armor=30;
		sensitivity=2;
		altFullForce=4000;
		altNoForce=6000;
		cost=10000000;
		vehicleClass="Air";
		accuracy=0.5;
		initCargoAngleY=10;
		minCargoAngleY=-60;
		maxCargoAngleY=120;
		maxSpeed=251;
		enableSweep=0;
		supplyRadius=2.5;
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="SCmod_cougar\RTD_SCmod_cougar.xml";
			autoHoverCorrection[]={4.6999998,3.8,0};
			defaultCollective=0.66500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=6014;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=185000;
			maxTailRotorStress=30000;
		};
		maximumLoad=10000;
		cargoCanEject=1;
		driverCanEject=0;
		mainBladeRadius=9.1999998;
		tailBladeRadius=1.5;
		maxFordingDepth=1.65;
		bodyFrictionCoef=1.05;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		radarType=4;
		slingLoadMemoryPoint="slingLoad0";
		slingLoadMaxCargoMass=10000;
		liftForceCoef=2.5;
		extCameraPosition[]={0,3,-23};
		gearRetracting=1;
		gearUpTime=1;
		gearDownTime=1;
		damageResistance=0.0055499999;
		memoryPointsGetInDriver="pos_driver";
		memoryPointsGetInDriverDir="pos_driver_dir";
		memoryPointsGetInCargo="pos_cargo";
		memoryPointsGetInCargoDir="pos_cargo_dir";
		cargoAction[]=
		{
			"passenger_low01"
		};
		mainRotorSpeed=1;
		backRotorSpeed=1;
		minMainRotorDive=9;
		maxMainRotorDive=-14;
		neutralMainRotorDive=4;
		weapons[]={};
		magazines[]={};
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		lockDetectionSystem="8 + 4";
		incommingMisslieDetectionSystem=16;
		transportMaxMagazines=150;
		transportMaxWeapons=30;
		viewCargoShadow=1;
		enableManualFire=1;
		threat[]={0.60000002,0.1,0};
		canfloat=1;
		transportSoldier=10;
		waterLeakiness=20;
		numberPhysicalWheels=3;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="pedal_1";
		driverRightLegAnimName="pedal_2";
		class Exhausts
		{
			class Exhaust01
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust02
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=14;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\open",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"SCmod_cougar\Sound\Encendido_int.ogg",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"SCmod_cougar\Sound\Encendido_ext.ogg",
			0.79432821,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"SCmod_cougar\Sound\Apagado_int.ogg",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"SCmod_cougar\Sound\Apagado_ext.ogg",
			0.79432821,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		occludeSoundsWhenIn=0.56234133;
		obstructSoundsWhenIn=0.31622776;
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			300
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"SCmod_cougar\Sound\cougar_engine_ext.ogg",
					0.40000001,
					1
				};
				frequency="rotorSpeed";
				volume="camPos*(rotorSpeed-0.72)*4";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"SCmod_cougar\Sound\cougar_rotor_low_ext.ogg",
					1.1220185,
					1,
					1200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"SCmod_cougar\Sound\cougar_rotor_high_ext.ogg",
					1.1220185,
					1,
					1500
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineInt
			{
				sound[]=
				{
					"SCmod_cougar\Sound\cougar_engine_int.ogg",
					1.1220185,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed-0.75)*4";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"SCmod_cougar\Sound\cougar_rotor_low_int.ogg",
					1.1220185,
					1
				};
				frequency="rotorSpeed";
				volume="2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"SCmod_cougar\Sound\cougar_rotor_high_int.ogg",
					1.1220185,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[40,60])";
			};
			class Distance
			{
				sound[]=
				{
					"SCmod_cougar\Sound\Distance.ogg",
					3,
					1,
					3000
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,2,0.5};
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"SCmod_cougar\Sound\cougar_engine_ext.ogg",
						0.40000001,
						1
					};
					frequency="rotorSpeed";
					volume="camPos*(rotorSpeed-0.72)*4";
				};
				class RotorLowOut
				{
					sound[]=
					{
						"SCmod_cougar\Sound\cougar_rotor_low_ext.ogg",
						1.1220185,
						1,
						1200
					};
					frequency="rotorSpeed";
					volume="camPos*(0 max (rotorSpeed-0.1))";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorHighOut
				{
					sound[]=
					{
						"SCmod_cougar\Sound\cougar_rotor_high_ext.ogg",
						1.1220185,
						1,
						1500
					};
					frequency="rotorSpeed";
					volume="camPos*10*(0 max (rotorThrust-0.9))";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class EngineIn
				{
					sound[]=
					{
						"SCmod_cougar\Sound\cougar_engine_int.ogg",
						1,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorLowIn
				{
					sound[]=
					{
						"SCmod_cougar\Sound\cougar_rotor_low_int.ogg",
						1.1220185,
						1
					};
					frequency="rotorSpeed";
					volume="2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
				};
				class RotorHighIn
				{
					sound[]=
					{
						"SCmod_cougar\Sound\cougar_rotor_high_int.ogg",
						1.2589254,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*3*(rotorThrust-0.9)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[40,60])";
				};
				class Distance
				{
					sound[]=
					{
						"SCmod_cougar\Sound\Distance.ogg",
						3,
						1,
						3000
					};
					frequency="rotorSpeed";
					volume="camPos*(0 max (rotorSpeed-0.1))";
					cone[]={1.6,3.1400001,2,0.5};
				};
			};
		};
		class MFD
		{
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				primaryGunner=1;
				CanEject=1;
				commanding=-2;
				isCopilot=0;
				showHMD=1;
				turretCanSee="1 + 2 + 4 + 8 + 16";
				copilotHasFlares=1;
				weapons[]={};
				magazines[]={};
				LockDetectionSystem="1 + 2 + 4 + 8";
				incomingMissileDetectionSystem=16;
			};
			class MainTurret: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				minElev=-50;
				maxElev=5;
				initElev="-15";
				minTurn=15;
				maxTurn=160;
				initTurn=90;
				stabilizedInAxes=0;
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerForceOptics=0;
				weapons[]={};
				magazines[]={};
				commanding=-3;
				primaryGunner=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.60000002;
					minFov=0.30000001;
					maxFov=0.75;
				};
				turretCanSee="1 + 2 + 4 + 8 + 16";
				LockDetectionSystem="1 + 2 + 4 + 8";
				incomingMissileDetectionSystem=16;
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-160;
				maxTurn=-15;
				initTurn=-90;
				weapons[]={};
				commanding=-4;
				primaryGunner=0;
				turretCanSee="1 + 2 + 4 + 8 + 16";
				LockDetectionSystem="1 + 2 + 4 + 8";
				incomingMissileDetectionSystem=16;
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				visual="zbytek";
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=1;
				radius=0.25;
				minimalHit=0.050000001;
			};
			class HitAvionics: HitAvionics
			{
				armor=2;
				radius=0.40000001;
				minimalHit=0.050000001;
			};
			class HitMissiles: HitMissiles
			{
				armor=1;
				radius=0.15000001;
				minimalHit=0.050000001;
			};
			class HitEngine1: HitEngine
			{
				armor=0.69999999;
				radius=0.40000001;
				explosionShielding=3;
				minimalHit=0.1;
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				name="engine_hit";
				convexComponent="engine_hit";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor=4;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=3;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
			class HitGlass1: HitGlass1
			{
				name="glass1";
				visual="glass1";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				visual="glass2";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				visual="glass3";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				visual="glass4";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				visual="glass5";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				visual="glass6";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
				visual="glass7";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
				visual="glass8";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
				visual="glass9";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
				visual="glass10";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass11: HitGlass1
			{
				name="glass11";
				visual="glass11";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass12: HitGlass1
			{
				name="glass12";
				visual="glass12";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass13: HitGlass1
			{
				name="glass13";
				visual="glass13";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass14: HitGlass1
			{
				name="glass14";
				visual="glass14";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass15: HitGlass1
			{
				name="glass15";
				visual="glass15";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass16: HitGlass1
			{
				name="glass16";
				visual="glass16";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass17: HitGlass1
			{
				name="glass17";
				visual="glass17";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass18: HitGlass1
			{
				name="glass18";
				visual="glass18";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass19: HitGlass1
			{
				name="glass19";
				visual="glass19";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass20: HitGlass1
			{
				name="glass20";
				visual="glass20";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass21: HitGlass1
			{
				name="glass21";
				visual="glass21";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass22: HitGlass1
			{
				name="glass22";
				visual="glass22";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass23: HitGlass1
			{
				name="glass23";
				visual="glass23";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
			class HitGlass24: HitGlass1
			{
				name="glass24";
				visual="glass24";
				armor=2;
				radius=0.40000001;
				explosionShielding=6;
			};
		};
		class Reflectors: Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R_hitpoint";
				selection="Light_R";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class Left: Right
			{
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		class MarkerLights
		{
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.30000001,0.029999999,0.029999999};
				ambient[]={0.029999999,0.003,0.003};
				useFlare=0;
				intensity=60;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
			};
			class GreenStill
			{
				name="zeleny pozicni";
				color[]={0.029999999,0.30000001,0.029999999};
				ambient[]={0.003,0.029999999,0.003};
				intensity=60;
				useFlare=0;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
			};
			class lb1
			{
				color[]={0.30000001,0.029999999,0.029999999};
				ambient[]={0.029999999,0.003,0.003};
				size=1;
				intensity=25;
				name="luz_int";
				hitpoint="";
				useFlare=0;
				flareSize=1;
				flareMaxDistance=20;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=1;
					linear=1;
					quadratic=1;
					hardLimitStart=0;
					hardLimitEnd=1.5;
				};
			};
			class WhiteStill
			{
				name="bily pozicni";
				color[]={0.30000001,0.30000001,0.30000001,1};
				ambient[]={0.029999999,0.029999999,0.029999999,1};
				intensity=60;
				useFlare=0;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
			};
			class RedBlinking
			{
				name="cerveny pozicni blik";
				color[]={0.5,0.050000001,0.050000001,1};
				ambient[]={0.050000001,0.0049999999,0.0049999999,1};
				intensity=70;
				useFlare=0;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=1;
				dayLight=0;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"SCmod_cougar\data\cougar_glass.rvmat",
				"SCmod_cougar\data\cougar_glass_damage.rvmat",
				"SCmod_cougar\data\cougar_glass_damage.rvmat",
				"SCmod_cougar\data\cougar.rvmat",
				"SCmod_cougar\data\cougar_damage.rvmat",
				"SCmod_cougar\data\cougar_destruct.rvmat"
			};
		};
		class Eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_cougar.sqs""";
		};
	};
	class SCmod_cougar: SCmod_cougar_base
	{
		forceInGarage=1;
		scope=2;
		author="CheyenneAH56";
		side=3;
		faction="SCmod";
		model="\SCmod_cougar\SCmod_cougar";
		displayName="EC-225";
		picture="\SCmod_cougar\ico\cougar_ca.paa";
		icon="\SCmod_cougar\ico\cougar_ico.paa";
		hasGunner=0;
		crew="Pilot_SC";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_cougar\data\cougar_co_SC.paa",
			"SCmod_cougar\data\cougar_co_SC.paa"
		};
		typicalCargo[]=
		{
			"B_HeliPilot_F"
		};
		driverAction="driver_cougar";
		getInAction="ChopperLight_L_In_H";
		driverCompartments="Compartment1";
		getOutAction="ChopperLight_L_Out_H";
		cargoGetInAction[]=
		{
			"GetInHelicopterCargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutHelicopterCargo"
		};
		cargoProxyIndexes[]={1,2,5,6,7,9,10,11,12,14};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanright",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanright",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};
		availableForSupportTypes[]=
		{
			"Transport"
		};
		cargoCompartments[]=
		{
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="driver_cougar";
				gunnerInAction="driver_cougar";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedal_1";
				gunnerRightLegAnimName="pedal_2";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				ejectDeadGunner=0;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_L";
				memoryPointsGetInGunnerDir="pos_cargo_L_dir";
				gunnerName="$STR_A3_TURRETS_BENCH_L1";
				proxyIndex=3;
				maxElev=5;
				minElev=-35;
				LODTurnedIn=1200;
				LODTurnedOut=1200;
				maxTurn=-30;
				minTurn=-60;
				GunnerDoor="";
				isPersonTurret=1;
				ejectDeadGunner=0;
				class dynamicViewLimits
				{
				};
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHelicopterCargo";
				enabledByAnimationSource="PuertaDerecha";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="$STR_A3_TURRETS_BENCH_L2";
				proxyIndex=4;
				maxTurn=50;
				minTurn=15;
				maxElev=5;
				minElev=-38;
				class dynamicViewLimits
				{
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				proxyIndex=13;
				maxTurn=53;
				minTurn=25;
				maxElev=3;
				minElev=-30;
				memoryPointsGetInGunner="pos_cargo_R";
				memoryPointsGetInGunnerDir="pos_cargo_R_dir";
				enabledByAnimationSource="PuertaIzquierda";
				class dynamicViewLimits
				{
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerName="$STR_A3_TURRETS_BENCH_R2";
				proxyIndex=8;
				maxElev=3;
				minElev=-35;
				maxTurn=-18;
				minTurn=-53;
				memoryPointsGetInGunner="pos_cargo_R";
				memoryPointsGetInGunnerDir="pos_cargo_R_dir";
				enabledByAnimationSource="PuertaIzquierda";
				class dynamicViewLimits
				{
				};
			};
		};
		class AnimationSources
		{
			class PuertaIzquierda
			{
				source="Door";
				animPeriod=2;
				initPhase=0;
				sound="RollDoorsSound";
			};
			class PuertaDerecha
			{
				source="Door";
				animPeriod=2;
				initPhase=0;
				sound="RollDoorsSound";
			};
		};
		class UserActions
		{
			class AbrirPuertaIzquierda
			{
				displayName="Open left door";
				position="pizq";
				radius=7.5;
				condition="(this doorPhase 'PuertaIzquierda' == 0)&& (alive this)";
				statement="this animateDoor ['PuertaIzquierda',1];";
				onlyforplayer=1;
				priority=4.6999998;
				showWindow=0;
			};
			class CerrarPuertaIzquierda: AbrirPuertaIzquierda
			{
				displayName="Close left door";
				position="pizq";
				condition="(this doorPhase 'PuertaIzquierda' == 1)&& (alive this)";
				statement="this animateDoor ['PuertaIzquierda',0];";
			};
			class AbrirPuertaDerecha: AbrirPuertaIzquierda
			{
				displayName="Open right door";
				position="pder";
				condition="(this doorPhase 'PuertaDerecha' == 0)&& (alive this)";
				statement="this animateDoor ['PuertaDerecha',1];";
			};
			class CerrarPuertaDerecha: AbrirPuertaIzquierda
			{
				displayName="Close right door";
				position="pder";
				condition="(this doorPhase 'PuertaDerecha' == 1)&& (alive this)";
				statement="this animateDoor ['PuertaDerecha',0];";
			};
		};
		class Library
		{
			libTextDesc="cougar";
		};
	};
	class SCmod_cougar_civ: SCmod_cougar
	{
		side=3;
		faction="SCmod90";
		displayName="AS-332 1990";
		crew="Pilot_SC_1990";
		author="CheyenneAH56";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_cougar\data\cougar_civ0.paa",
			"SCmod_cougar\data\cougar_civ0.paa"
		};
		class Eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_cougar_civ.sqs""";
		};
	};
	class SCmod_cougar_civ1: SCmod_cougar
	{
		side=3;
		faction="CIV_F";
		displayName="AS-332 RED";
		author="CheyenneAH56";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_cougar\data\cougar_civ1a.paa",
			"SCmod_cougar\data\cougar_civ1a.paa"
		};
		class Eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_cougar_civ.sqs""";
		};
	};
	class SCmod_cougar_civ2: SCmod_cougar
	{
		side=3;
		faction="CIV_F";
		displayName="AS-332 BLUE";
		author="CheyenneAH56";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_cougar\data\cougar_civ2a.paa",
			"SCmod_cougar\data\cougar_civ2a.paa"
		};
		class Eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_cougar_civ.sqs""";
		};
	};
	class HelicopterWreck;
	class SCmod_cougarWreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\SCmod_cougar\SCmod_cougarWreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=14;
		class Eventhandlers
		{
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		driver_cougar="driver_cougar";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class driver_cougar: Crew
		{
			file="\SCmod_cougar\anim\pilot.rtm";
			interpolateTo[]=
			{
				"KIA_pilot_Heli_Transport_01",
				1
			};
		};
	};
};
class CfgSounds
{
	class sp_rapel
	{
		name="";
		sound[]=
		{
			"\SCmod_cougar\Sound\rope.ogg",
			1,
			1
		};
		titles[]={};
	};
};
class cfgMods
{
	author="76561198015646777";
	timepacked="1476461473";
};
