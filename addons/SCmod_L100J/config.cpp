class CfgPatches
{
	class Air_C100J
	{
		units[]=
		{
			"C100J"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F"
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class Turrets: NewTurret
		{
		};
		class ViewPilot;
		class ViewGunner;
		class HitPoints
		{
			class HitHull
			{
				armor=1;
				material=50;
				name="telo";
				visual="trup";
				passThrough=1;
			};
		};
	};
	class L100J_Base: Plane
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				startEngine=0;
				outGunnerMayFire=1;
				commanding=-1;
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerAction="";
				gunnerInAction="";
				gunnerOpticsModel="\A3\Weapons_F\empty.p3d";
				gunnerForceOptics=0;
				enableManualFire=0;
				canEject=0;
				class ViewPilot: ViewPilot
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.30000001;
					maxFov=1.2;
					initFov=1;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.2;
						material=51;
						name="vez";
						visual="vez";
						passThrough=0.30000001;
					};
					class HitGun
					{
						armor=0.2;
						material=51;
						name="zbran";
						visual="zbran";
						passThrough=0.1;
					};
				};
			};
		};
		class AnimationSources;
	};
	class L100J: L100J_Base
	{
		destrType="DestructWreck";
		scope=2;
		cabinOpening="false";
		author="CheyenneAH56";
		displayname="L-100J";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"SCmod_L100J\DATA\rvmat\c130j_sklo.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_sklo_damage.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_sklo_damage.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_sklo_in.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_sklo_in_damage.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_sklo_in_damage.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_body.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_body_damage.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_body_destruct.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_interior.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_interior_damage.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_interior_destruct.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_wings.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_wings_damage.rvmat",
				"SCmod_L100J\DATA\rvmat\c130j_wings_destruct.rvmat"
			};
		};
		vehicleClass="Air";
		side=3;
		faction="SCmod";
		crew="Pilot_SC";
		model="\SCmod_L100J\C130J.p3d";
		picture="\SCmod_L100J\data\UI\picture_c130j_CA.paa";
		icon="\SCmod_L100J\data\UI\icon_c130j_CA.paa";
		forceInGarage=1;
		mapSize=25;
		maxSpeed=715;
		accuracy=0.15000001;
		cost=20000;
		incomingMissileDetectionSystem=16;
		lockDetectionSystem=8;
		armor=75;
		getInRadius=2.5;
		driverAction="C130_Pilot";
		cargocaneject=0;
		cargoIsCoDriver[]={0,0};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo02",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo01",
			"Truck_Cargo04",
			"Truck_Cargo02"
		};
		getinaction="GetInLow";
		getoutaction="GetInLow";
		transportSoldier=2;
		gunnerUsesPilotView=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		class Eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_L100J.sqs""; _this exec ""\SCmod_fire\script\SCmod_L100J_doors_x.sqs"";";
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=3;
			};
		};
		soundGetIn[]=
		{
			"\SCmod_L100J\DATA\sounds\Air\C130\close",
			0.316228,
			1
		};
		soundGetOut[]=
		{
			"\SCmod_L100J\DATA\sounds\Air\C130\open",
			0.316228,
			1,
			40
		};
		soundDammage[]=
		{
			"\SCmod_L100J\DATA\sounds\Air\C130\int-alarm_loop",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"\SCmod_L100J\DATA\sounds\Air\C130\int_start_1",
			0.39810699,
			1
		};
		soundEngineOnExt[]=
		{
			"\SCmod_L100J\DATA\sounds\Air\C130\ext_start_1",
			0.39810699,
			1,
			700
		};
		soundEngineOffInt[]=
		{
			"\SCmod_L100J\DATA\sounds\Air\C130\int_stop_1",
			0.39810699,
			1
		};
		soundEngineOffExt[]=
		{
			"\SCmod_L100J\DATA\sounds\Air\C130\ext_stop_1",
			0.39810699,
			1,
			700
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.1,
			1.5
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\ext_engine_low",
					1.77828,
					1,
					900
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\ext_engine_hi",
					1.77828,
					1,
					1100
				};
				frequency="1";
				volume="camPos*engineOn*(rpm factor[0.55, 1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\ext_forsage_1",
					1.41254,
					1,
					1500
				};
				frequency="1";
				volume="camPos*engineOn*(thrust factor[0.5, 1.0])";
				cone[]={1.14,3.9200001,2,0.40000001};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\ext-wind1",
					0.001,
					0.60000002,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 100])))";
				volume="camPos*(speed factor[1, 100])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\int_engine_low",
					1,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\int_engine_hi",
					1,
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};
			class ForsageIn
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\int_forsage_1",
					1.41254,
					1.1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"\SCmod_L100J\DATA\sounds\Air\C130\int-wind1",
					0.001,
					0.60000002
				};
				frequency="(0.1+(1.2*(speed factor[1, 100])))";
				volume="(1-camPos)*(speed factor[1, 100])";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				brightness=50;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=1;
				brightness=1;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Left2
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="L2 svetlo";
				direction="konec L2 svetla";
				hitpoint="L2 svetlo";
				selection="L2 svetlo";
				size=1;
				brightness=1;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Right2
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				position="P2 svetlo";
				direction="konec P2 svetla";
				hitpoint="P2 svetlo";
				selection="P2 svetlo";
				size=1;
				brightness=1;
				useFlare=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
		};
		weapons[]={};
		magazines[]={};
		threat[]={0.1,0.5,0.80000001};
		ejectSpeed[]={0,0,0};
		landingAoa="rad 7";
		landingSpeed=200;
		extCameraPosition[]={0,5,-42};
		envelope[]={0,0.1,0.5,1.5,3.0999999,4.3000002,4.9000001,5,4.4000001,2.8,1.6,0.80000001,0};
		flapsFrictionCoef=2;
		wheelSteeringSensitivity=4;
		aileronSensitivity=1;
		elevatorSensitivity=1.5;
		noseDownCoef=1;
		gearUpTime=4.5;
		gearDownTime=3;
		driveOnComponent[]=
		{
			"wheel_1_1",
			"wheel_2_1",
			"wheel_2_2",
			"wheel_3_1",
			"wheel_3_2"
		};
		canFloat="false";
		waterResistanceCoef=0.0040000002;
		waterLeakiness=25;
		class AnimationSources
		{
			class door_2_2
			{
				source="user";
				animPeriod=10;
			};
			class door_2_1: door_2_2
			{
			};
			class door_1: door_2_2
			{
			};
			class ramp_bottom
			{
				source="user";
				initPhase=0;
				animPeriod=10;
			};
			class Ramp_top
			{
				source="user";
				initPhase=0;
				animPeriod=10;
			};
			class CollisionLightRed_source
			{
				source="MarkerLight";
				markerLight="CollisionRed";
			};
			class CollisionLightWhite_source
			{
				source="MarkerLight";
				markerLight="CollisionWhite";
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="PositionLight_Red_1_pos";
				drawLight=1;
				drawLightSize=0.40000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=1;
				useFlare=0;
			};
			class PositionGreen: PositionRed
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="PositionLight_Green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_1_pos";
				drawLightSize=0.40000001;
			};
			class PositionWhite2: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_2_pos";
				drawLightSize=0.40000001;
			};
			class PositionWhite3: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_3_pos";
				drawLightSize=0.40000001;
			};
			class PositionWhite4: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_4_pos";
				drawLightSize=0.40000001;
			};
			class CollisionRed: PositionRed
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="CollisionLight_Red_1_pos";
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.40000001;
				drawLightCenterSize=0.079999998;
			};
			class CollisionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="CollisionLight_White_1_pos";
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.40000001;
				drawLightCenterSize=0.039999999;
			};
		};
		class HitPoints
		{
			class HitLFWheel
			{
				armor=1;
				material=-1;
				name="wheel_1_1";
				visual="";
				passThrough=0;
			};
			class HitLF2Wheel: HitLFWheel
			{
				name="wheel_2_1";
			};
			class HitLRF2Wheel: HitLFWheel
			{
				name="wheel_2_2";
			};
			class HitLBWheel: HitLFWheel
			{
				name="wheel_3_1";
			};
			class HitRBWheel: HitLFWheel
			{
				name="wheel_3_2";
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				borderLeft=0.090000004;
				borderRight=0.02;
				borderTop=0.02;
				borderBottom=0.1;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.025,0.025,0.1};
				helmetRight[]={0.050000001,0,0};
				helmetDown[]={0,-0.050000001,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.30000001};
					pos10[]={0.89999998,0.75};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.34};
					};
					class WeaponAim: Pos10Vector
					{
						source="weapon";
					};
					class Target: Pos10Vector
					{
						source="target";
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.30000001};
						pos10[]={0.89999998,0.75};
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.30000001};
						pos3[]={0.62,0.30000001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.435};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.34};
						pos10[]={0.89999998,0.79000002};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					alpha=0.40000001;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								{-0.079999998,0},
								1
							},
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.015,0.033750001},
								1
							},
							
							{
								"PlaneW",
								{0,0},
								1
							},
							
							{
								"PlaneW",
								{0.015,0.033750001},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{0.079999998,0},
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.022500001},
								1
							},
							
							{
								"Velocity",
								{0.014,-0.01575},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.014,0.01575},
								1
							},
							
							{
								"Velocity",
								{0,0.022500001},
								1
							},
							
							{
								"Velocity",
								{-0.014,0.01575},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.014,-0.01575},
								1
							},
							
							{
								"Velocity",
								{0,-0.022500001},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.045000002},
								1
							},
							
							{
								"Velocity",
								{0,-0.022500001},
								1
							},
							{}
						};
					};
					class Static
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								{0.20999999,0.51999998},
								1
							},
							
							{
								{0.19,0.5},
								1
							},
							
							{
								{0.20999999,0.47999999},
								1
							},
							{},
							
							{
								{0.18000001,0.2},
								1
							},
							
							{
								{0.18000001,0.85000002},
								1
							},
							{},
							
							{
								{0.79000002,0.51999998},
								1
							},
							
							{
								{0.81,0.5},
								1
							},
							
							{
								{0.79000002,0.47999999},
								1
							},
							{},
							
							{
								{0.81999999,0.2},
								1
							},
							
							{
								{0.81999999,0.85000002},
								1
							},
							{},
							
							{
								{0.51999998,0.090000004},
								1
							},
							
							{
								{0.5,0.07},
								1
							},
							
							{
								{0.47999999,0.090000004},
								1
							},
							{},
							
							{
								{0.2,0.064999998},
								1
							},
							
							{
								{0.80000001,0.064999998},
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[]={0,0};
						clipBR[]={1,1};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.2,0},
										1
									},
									
									{
										"Level0",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.050000001,0},
										1
									},
									
									{
										"Level0",
										{0.2,0},
										1
									}
								};
							};
							class VALM_1_0
							{
								type="text";
								source="static";
								text=0;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									{-0.23,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{-0.13,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{-0.23,0.025},
									1
								};
							};
							class VALM_2_0: VALM_1_0
							{
								align="right";
								pos[]=
								{
									"Level0",
									{0.22,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{0.31999999,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{0.22,0.025},
									1
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM5",
										{-0.2,0},
										1
									},
									
									{
										"LevelM5",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_5: VALM_1_5
							{
								align="right";
								pos[]=
								{
									"LevelM5",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.22,-0.035},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP5",
										{-0.2,0},
										1
									},
									
									{
										"LevelP5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_5: VALP_1_5
							{
								align="right";
								pos[]=
								{
									"LevelP5",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.22,-0.035},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM15",
										{-0.2,0},
										1
									},
									
									{
										"LevelM15",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_15: VALM_1_15
							{
								align="right";
								pos[]=
								{
									"LevelM15",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.22,-0.035},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP15",
										{-0.2,0},
										1
									},
									
									{
										"LevelP15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_15: VALP_1_15
							{
								align="right";
								pos[]=
								{
									"LevelP15",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.22,-0.035},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM25",
										{-0.2,0},
										1
									},
									
									{
										"LevelM25",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_25: VALM_1_25
							{
								align="right";
								pos[]=
								{
									"LevelM25",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.22,-0.035},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP25",
										{-0.2,0},
										1
									},
									
									{
										"LevelP25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_25: VALP_1_25
							{
								align="right";
								pos[]=
								{
									"LevelP25",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.22,-0.035},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM35",
										{-0.2,0},
										1
									},
									
									{
										"LevelM35",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_35: VALM_1_35
							{
								align="right";
								pos[]=
								{
									"LevelM35",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.22,-0.035},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP35",
										{-0.2,0},
										1
									},
									
									{
										"LevelP35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_35: VALP_1_35
							{
								align="right";
								pos[]=
								{
									"LevelP35",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.22,-0.035},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM45",
										{-0.2,0},
										1
									},
									
									{
										"LevelM45",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_45: VALM_1_45
							{
								align="right";
								pos[]=
								{
									"LevelM45",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.22,-0.035},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP45",
										{-0.2,0},
										1
									},
									
									{
										"LevelP45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_45: VALP_1_45
							{
								align="right";
								pos[]=
								{
									"LevelP45",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.22,-0.035},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.22,0.085000001},
									1
								};
							};
						};
					};
					class MGun
					{
						condition="mgun";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.01125},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.01125},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,-0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{0,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,-0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.078749999},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.1575},
									1
								},
								
								{
									"WeaponAim",
									{0.07,-0.137025},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0.137025},
									1
								},
								
								{
									"WeaponAim",
									{0,0.1575},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0.137025},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,-0.137025},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.1575},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.1575},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.18000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,-0.136399},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,-0.155885},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,-0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.14,6.88454e-009},
									1
								},
								
								{
									"WeaponAim",
									{-0.16,7.8680502e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,0.136399},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,0.155885},
									1
								},
								{},
								
								{
									"WeaponAim",
									{1.22392e-008,0.1575},
									1
								},
								
								{
									"WeaponAim",
									{1.39876e-008,0.18000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,0.136399},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,0.155885},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.14,-1.8781701e-009},
									1
								},
								
								{
									"WeaponAim",
									{0.16,-2.1464801e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,-0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,-0.136399},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,-0.155885},
									1
								},
								{}
							};
						};
					};
					class Bomb
					{
						condition="bomb";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.1125},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,-0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{0,0.1125},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,-0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.1125},
									1
								},
								{},
								
								{
									"Velocity",
									0.001,
									"WeaponAim",
									{0,0},
									1
								},
								
								{
									"Velocity",
									{0,0},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.078749999},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.078749999},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.078749999},
									1
								}
							};
						};
					};
					class AAMissile
					{
						condition="AAmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.28125},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,-0.140625},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,0.140625},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{0,0.28125},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,0.140625},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,-0.140625},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.28125},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.078749999},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.078749999},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.078749999},
									1
								}
							};
						};
					};
					class ATMissile
					{
						condition="ATmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.2025},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,-0.176175},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,-0.10125},
									1
								},
								
								{
									"WeaponAim",
									{0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,0.10125},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,0.176175},
									1
								},
								
								{
									"WeaponAim",
									{0,0.2025},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,0.176175},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,0.10125},
									1
								},
								
								{
									"WeaponAim",
									{-0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,-0.10125},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,-0.176175},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.2025},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.078749999},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.078749999},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.078749999},
									1
								}
							};
						};
					};
					class Rockets
					{
						condition="Rocket";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.01125},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.01125},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.13500001},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,-0.11745},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,-0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,0.11745},
									1
								},
								
								{
									"WeaponAim",
									{0,0.13500001},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,0.11745},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{-0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,-0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,-0.11745},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.13500001},
									1
								},
								{}
							};
						};
					};
					class AltScale
					{
						type="scale";
						scale=1;
						source="altitudeASL";
						sourceScale=1;
						align="right";
						pos[]={0.86000001,0.81999999};
						right[]={0.94,0.81999999};
						down[]={0.86000001,0.87};
						lineXleft=0.82499999;
						lineYright=0.83499998;
						lineXleftMajor=0.82499999;
						lineYrightMajor=0.84500003;
						bottom=0.2;
						top=0.85000002;
						center=0.5;
						step=20;
						StepSize=0.032499999;
						horizontal="false";
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class SpeedScale
					{
						type="scale";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						align="right";
						pos[]={0.059999999,0.17};
						right[]={0.14,0.17};
						down[]={0.059999999,0.22};
						lineXleft=0.175;
						lineYright=0.16500001;
						lineXleftMajor=0.175;
						lineYrightMajor=0.155;
						bottom=0.85000002;
						center=0.5;
						top=0.2;
						step=20;
						StepSize=0.032499999;
						horizontal="false";
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class Gear
					{
						condition="ils";
						class text
						{
							type="text";
							source="static";
							text="GEAR";
							align="right";
							scale=0.5;
							sourceScale=1;
							pos[]=
							{
								{0.83999997,0.88},
								1
							};
							right[]=
							{
								{0.89999998,0.88},
								1
							};
							down[]=
							{
								{0.83999997,0.92000002},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class text
						{
							type="text";
							source="static";
							text="FLAPS";
							align="right";
							scale=0.5;
							sourceScale=1;
							pos[]=
							{
								{0.83999997,0.93000001},
								1
							};
							right[]=
							{
								{0.89999998,0.93000001},
								1
							};
							down[]=
							{
								{0.83999997,0.97000003},
								1
							};
						};
					};
					class weapons
					{
						type="text";
						source="weapon";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.88},
							1
						};
						right[]=
						{
							{0.16,0.88},
							1
						};
						down[]=
						{
							{0.1,0.92000002},
							1
						};
					};
					class ammo
					{
						type="text";
						source="ammo";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.93000001},
							1
						};
						right[]=
						{
							{0.16,0.93000001},
							1
						};
						down[]=
						{
							{0.1,0.97000003},
							1
						};
					};
					class VspeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="vspeed";
						sourceScale=1;
						pos[]=
						{
							{0.86000001,0.12},
							1
						};
						right[]=
						{
							{0.94,0.12},
							1
						};
						down[]=
						{
							{0.86000001,0.17},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						scale=1;
						source="Heading";
						sourceScale=1;
						align="center";
						pos[]={0.2,0};
						right[]={0.28,0};
						down[]={0.2,0.050000001};
						lineXleft=0.059999999;
						lineYright=0.050000001;
						lineXleftMajor=0.059999999;
						lineYrightMajor=0.039999999;
						bottom=0.80000001;
						center=0.5;
						top=0.2;
						step=2;
						StepSize=0.029999999;
						horizontal="true";
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{0,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{0.12,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{-0.12,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.27000001},
										1
									},
									
									{
										"ILS_H",
										{0,0.27000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.13500001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.13500001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.27000001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.27000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.13500001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.13500001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.27000001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.27000001},
										1
									}
								};
							};
						};
					};
				};
			};
			class AirplaneHUD2
			{
				borderLeft=0.090000004;
				borderRight=0.02;
				borderTop=0.02;
				borderBottom=0.1;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.025,0.025,0.1};
				helmetRight[]={0.050000001,0,0};
				helmetDown[]={0,-0.050000001,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.30000001};
					pos10[]={0.89999998,0.75};
				};
				topLeft="HUD2 LH";
				topRight="HUD2 PD";
				bottomLeft="HUD2 LD";
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.34};
					};
					class WeaponAim: Pos10Vector
					{
						source="weapon";
					};
					class Target: Pos10Vector
					{
						source="target";
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.30000001};
						pos10[]={0.89999998,0.75};
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.30000001};
						pos3[]={0.62,0.30000001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.435};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.34};
						pos10[]={0.89999998,0.79000002};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					alpha=0.40000001;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								{-0.079999998,0},
								1
							},
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.015,0.033750001},
								1
							},
							
							{
								"PlaneW",
								{0,0},
								1
							},
							
							{
								"PlaneW",
								{0.015,0.033750001},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{0.079999998,0},
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.022500001},
								1
							},
							
							{
								"Velocity",
								{0.014,-0.01575},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.014,0.01575},
								1
							},
							
							{
								"Velocity",
								{0,0.022500001},
								1
							},
							
							{
								"Velocity",
								{-0.014,0.01575},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.014,-0.01575},
								1
							},
							
							{
								"Velocity",
								{0,-0.022500001},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.045000002},
								1
							},
							
							{
								"Velocity",
								{0,-0.022500001},
								1
							},
							{}
						};
					};
					class Static
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								{0.20999999,0.51999998},
								1
							},
							
							{
								{0.19,0.5},
								1
							},
							
							{
								{0.20999999,0.47999999},
								1
							},
							{},
							
							{
								{0.18000001,0.2},
								1
							},
							
							{
								{0.18000001,0.85000002},
								1
							},
							{},
							
							{
								{0.79000002,0.51999998},
								1
							},
							
							{
								{0.81,0.5},
								1
							},
							
							{
								{0.79000002,0.47999999},
								1
							},
							{},
							
							{
								{0.81999999,0.2},
								1
							},
							
							{
								{0.81999999,0.85000002},
								1
							},
							{},
							
							{
								{0.51999998,0.090000004},
								1
							},
							
							{
								{0.5,0.07},
								1
							},
							
							{
								{0.47999999,0.090000004},
								1
							},
							{},
							
							{
								{0.2,0.064999998},
								1
							},
							
							{
								{0.80000001,0.064999998},
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[]={0,0};
						clipBR[]={1,1};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.2,0},
										1
									},
									
									{
										"Level0",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.050000001,0},
										1
									},
									
									{
										"Level0",
										{0.2,0},
										1
									}
								};
							};
							class VALM_1_0
							{
								type="text";
								source="static";
								text=0;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									{-0.23,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{-0.13,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{-0.23,0.025},
									1
								};
							};
							class VALM_2_0: VALM_1_0
							{
								align="right";
								pos[]=
								{
									"Level0",
									{0.22,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{0.31999999,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{0.22,0.025},
									1
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM5",
										{-0.2,0},
										1
									},
									
									{
										"LevelM5",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_5: VALM_1_5
							{
								align="right";
								pos[]=
								{
									"LevelM5",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.22,-0.035},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP5",
										{-0.2,0},
										1
									},
									
									{
										"LevelP5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_5: VALP_1_5
							{
								align="right";
								pos[]=
								{
									"LevelP5",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.22,-0.035},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM15",
										{-0.2,0},
										1
									},
									
									{
										"LevelM15",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_15: VALM_1_15
							{
								align="right";
								pos[]=
								{
									"LevelM15",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.22,-0.035},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP15",
										{-0.2,0},
										1
									},
									
									{
										"LevelP15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_15: VALP_1_15
							{
								align="right";
								pos[]=
								{
									"LevelP15",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.22,-0.035},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM25",
										{-0.2,0},
										1
									},
									
									{
										"LevelM25",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_25: VALM_1_25
							{
								align="right";
								pos[]=
								{
									"LevelM25",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.22,-0.035},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP25",
										{-0.2,0},
										1
									},
									
									{
										"LevelP25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_25: VALP_1_25
							{
								align="right";
								pos[]=
								{
									"LevelP25",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.22,-0.035},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM35",
										{-0.2,0},
										1
									},
									
									{
										"LevelM35",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_35: VALM_1_35
							{
								align="right";
								pos[]=
								{
									"LevelM35",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.22,-0.035},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP35",
										{-0.2,0},
										1
									},
									
									{
										"LevelP35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_35: VALP_1_35
							{
								align="right";
								pos[]=
								{
									"LevelP35",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.22,-0.035},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM45",
										{-0.2,0},
										1
									},
									
									{
										"LevelM45",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_45: VALM_1_45
							{
								align="right";
								pos[]=
								{
									"LevelM45",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.22,-0.035},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP45",
										{-0.2,0},
										1
									},
									
									{
										"LevelP45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_45: VALP_1_45
							{
								align="right";
								pos[]=
								{
									"LevelP45",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.22,-0.035},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.22,0.085000001},
									1
								};
							};
						};
					};
					class MGun
					{
						condition="mgun";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.01125},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.01125},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,-0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{0,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,-0.055125002},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.078749999},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.1575},
									1
								},
								
								{
									"WeaponAim",
									{0.07,-0.137025},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0.137025},
									1
								},
								
								{
									"WeaponAim",
									{0,0.1575},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0.137025},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,-0.137025},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.1575},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.1575},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.18000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,-0.136399},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,-0.155885},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,-0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.14,6.88454e-009},
									1
								},
								
								{
									"WeaponAim",
									{-0.16,7.8680502e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,0.136399},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,0.155885},
									1
								},
								{},
								
								{
									"WeaponAim",
									{1.22392e-008,0.1575},
									1
								},
								
								{
									"WeaponAim",
									{1.39876e-008,0.18000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,0.136399},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,0.155885},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.14,-1.8781701e-009},
									1
								},
								
								{
									"WeaponAim",
									{0.16,-2.1464801e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,-0.078749999},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,-0.090000004},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,-0.136399},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,-0.155885},
									1
								},
								{}
							};
						};
					};
					class Bomb
					{
						condition="bomb";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.1125},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,-0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{0,0.1125},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,-0.056249999},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.097874999},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.1125},
									1
								},
								{},
								
								{
									"Velocity",
									0.001,
									"WeaponAim",
									{0,0},
									1
								},
								
								{
									"Velocity",
									{0,0},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.078749999},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.078749999},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.078749999},
									1
								}
							};
						};
					};
					class AAMissile
					{
						condition="AAmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.28125},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,-0.140625},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,0.140625},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{0,0.28125},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,0.140625},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,-0.140625},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.24468701},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.28125},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.078749999},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.078749999},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.078749999},
									1
								}
							};
						};
					};
					class ATMissile
					{
						condition="ATmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.2025},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,-0.176175},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,-0.10125},
									1
								},
								
								{
									"WeaponAim",
									{0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,0.10125},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,0.176175},
									1
								},
								
								{
									"WeaponAim",
									{0,0.2025},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,0.176175},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,0.10125},
									1
								},
								
								{
									"WeaponAim",
									{-0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,-0.10125},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,-0.176175},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.2025},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.078749999},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.078749999},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.078749999},
									1
								}
							};
						};
					};
					class Rockets
					{
						condition="Rocket";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.01125},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.01125},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.13500001},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,-0.11745},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,-0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,0.11745},
									1
								},
								
								{
									"WeaponAim",
									{0,0.13500001},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,0.11745},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{-0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,-0.067500003},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,-0.11745},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.13500001},
									1
								},
								{}
							};
						};
					};
					class AltScale
					{
						type="scale";
						scale=1;
						source="altitudeASL";
						sourceScale=1;
						align="right";
						pos[]={0.86000001,0.81999999};
						right[]={0.94,0.81999999};
						down[]={0.86000001,0.87};
						lineXleft=0.82499999;
						lineYright=0.83499998;
						lineXleftMajor=0.82499999;
						lineYrightMajor=0.84500003;
						bottom=0.2;
						top=0.85000002;
						center=0.5;
						step=20;
						StepSize=0.032499999;
						horizontal="false";
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class SpeedScale
					{
						type="scale";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						align="right";
						pos[]={0.059999999,0.17};
						right[]={0.14,0.17};
						down[]={0.059999999,0.22};
						lineXleft=0.175;
						lineYright=0.16500001;
						lineXleftMajor=0.175;
						lineYrightMajor=0.155;
						bottom=0.85000002;
						center=0.5;
						top=0.2;
						step=20;
						StepSize=0.032499999;
						horizontal="false";
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class Gear
					{
						condition="ils";
						class text
						{
							type="text";
							source="static";
							text="GEAR";
							align="right";
							scale=0.5;
							sourceScale=1;
							pos[]=
							{
								{0.83999997,0.88},
								1
							};
							right[]=
							{
								{0.89999998,0.88},
								1
							};
							down[]=
							{
								{0.83999997,0.92000002},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class text
						{
							type="text";
							source="static";
							text="FLAPS";
							align="right";
							scale=0.5;
							sourceScale=1;
							pos[]=
							{
								{0.83999997,0.93000001},
								1
							};
							right[]=
							{
								{0.89999998,0.93000001},
								1
							};
							down[]=
							{
								{0.83999997,0.97000003},
								1
							};
						};
					};
					class weapons
					{
						type="text";
						source="weapon";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.88},
							1
						};
						right[]=
						{
							{0.16,0.88},
							1
						};
						down[]=
						{
							{0.1,0.92000002},
							1
						};
					};
					class ammo
					{
						type="text";
						source="ammo";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.93000001},
							1
						};
						right[]=
						{
							{0.16,0.93000001},
							1
						};
						down[]=
						{
							{0.1,0.97000003},
							1
						};
					};
					class VspeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="vspeed";
						sourceScale=1;
						pos[]=
						{
							{0.86000001,0.12},
							1
						};
						right[]=
						{
							{0.94,0.12},
							1
						};
						down[]=
						{
							{0.86000001,0.17},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						scale=1;
						source="Heading";
						sourceScale=1;
						align="center";
						pos[]={0.2,0};
						right[]={0.28,0};
						down[]={0.2,0.050000001};
						lineXleft=0.059999999;
						lineYright=0.050000001;
						lineXleftMajor=0.059999999;
						lineYrightMajor=0.039999999;
						bottom=0.80000001;
						center=0.5;
						top=0.2;
						step=2;
						StepSize=0.029999999;
						horizontal="true";
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{0,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{0.12,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{-0.12,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,0.027000001},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,-0.027000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.27000001},
										1
									},
									
									{
										"ILS_H",
										{0,0.27000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.13500001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.13500001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.27000001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.27000001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.13500001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.13500001},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.27000001},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.27000001},
										1
									}
								};
							};
						};
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
			class CopilotTurret: MainTurret
			{
				isCopilot=1;
				primaryGunner=0;
				canEject=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				weapons[]={};
				magazines[]={};
				gunnerAction="C130_Cargo";
				gunnerInAction="C130_Cargo";
				gunnerName="$STR_A3_COPILOT";
				gunnerNotSpawned=1;
				gunnerUsesPilotView=1;
				hasGunner=0;
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				class ViewGunner: ViewGunner
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.30000001;
					maxFov=1.2;
					initFov=1;
				};
				commanding=-1;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				turretCanSee=15;
			};
		};
	};
	class C130_1990: L100J
	{
		destrType="DestructWreck";
		scope=2;
		cabinOpening="false";
		author="CheyenneAH56";
		displayname="C-130A 1990";
		vehicleClass="Air";
		side=3;
		faction="SCmod90";
		crew="Pilot_SC_1990";
		forceInGarage=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"MAFFS",
			"fuelpods"
		};
		hiddenSelectionsTextures[]=
		{
			"SCmod_L100J\DATA\tex\c130j_body_90_co.paa",
			"SCmod_L100J\DATA\tex\c130j_wings_90_co.paa",
			"",
			""
		};
		class Eventhandlers
		{
			init="_this exec ""\SCmod_fire\script\SCmod_crew_C130_1990.sqs""; _this exec ""\SCmod_fire\script\SCmod_L100J_doors_x.sqs"";";
		};
	};
};
class DefaultEventhandlers;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		C130_Pilot="C130_Pilot";
		C130_Cargo="C130_Cargo";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_C130_Pilot: DefaultDie
		{
			actions="DeadActions";
			file="\SCmod_L100J\DATA\Anim\C130pilotKIA.rtm";
			speed=0.5;
			looped="false";
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class C130_Pilot: Crew
		{
			file="\SCmod_L100J\DATA\Anim\C130Pilot.rtm";
			interpolateTo[]=
			{
				"KIA_C130_Pilot",
				1
			};
		};
		class KIA_C130_Cargo: KIA_C130_Pilot
		{
		};
		class C130_Cargo: Crew
		{
			file="\SCmod_L100J\DATA\Anim\C130Pilot.rtm";
			interpolateTo[]=
			{
				"KIA_C130_Cargo",
				1
			};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		C130_Cargo="crew";
		C130_Pilot="";
	};
};
class cfgMods
{
	author="76561198015646777";
	timepacked="1476461543";
};
