class CfgPatches
{
	class SCmod_P3
	{
		units[]=
		{
			"SCmod_P3"
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
	class All
	{
	};
	class AllVehicles: All
	{
	};
	class Air: AllVehicles
	{
	};
	class Plane: Air
	{
		class AnimationSources
		{
			class UserActions;
		};
	};
	class L100J;
	class SCmod_P3: L100J
	{
		scope=2;
		model="\SCmod_P3\SCmod_P3";
		displayName="L-188C";
		author="CheyenneAH56";
		vehicleClass="Air";
		side=3;
		faction="SCmod";
		crew="Pilot_SC";
		transportSoldier=1;
		Icon="\SCmod_P3\IconSCmod_P3.paa";
		picture="\SCmod_P3\SCmod_P3.paa";
		accuracy=0.30000001;
		gearRetracting=1;
		nameSound="plane";
		landingSpeed=195;
		acceleration=480;
		hiddenSelections[]=
		{
			"Light",
			"panel"
		};
		hiddenSelectionsTextures[]=
		{
			"\SCmod_P3\textures\lightd.paa",
			"\SCmod_P3\textures\Pan2_off.paa"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		getinaction="GetInLow";
		getoutaction="GetInLow";
		soundEngine[]=
		{
			"\SCmod_P3\sound\Engine.wss",
			4,
			1.2
		};
		maneuvrability=90;
		maxSpeed=750;
		armor=100;
		ejectSpeed[]={0,0,0};
		flapsFrictionCoef=0.2;
		cost=20000;
		gunAimDown=1;
		type=2;
		threat[]={0.1,1,0.69999999};
		wheelSteeringSensitivity=2.5999999;
		driveOnComponent[]=
		{
			"ngear",
			"gear"
		};
		aileronSensitivity=1.8;
		elevatorSensitivity=1.6;
		noseDownCoef=0.1;
		landingAoa="7*3.1415/180";
		brakeDistance=120;
		steerAheadSimul=1;
		steerAheadPlan=2;
		extCameraPosition[]={0,1,-37};
		driverIsCommander=0;
		hasGunner=0;
		gunnerUsesPilotView=1;
		memoryPointsGetInCargo="pos_cargo";
		memoryPointsGetInDriver="pos_driver";
		memoryPointsGetInCargoDir="pos_cargo_dir";
		memoryPointsGetInDriverDir="pos_driver_dir";
		weapons[]={};
		magazines[]={};
		class AnimationSources
		{
			class Door
			{
				source="user";
				type="rotation";
				initPhase=1;
				animperiod=3;
				selection="Door";
				axis="osa_Door";
				angle0=0;
				angle1="rad -150";
			};
			class Esc1
			{
				source="user";
				type="rotation";
				initPhase=1;
				animperiod=3;
				selection="Esc1";
				axis="osa_Esc1";
				angle0=0;
				angle1="rad +160";
			};
			class Esc2
			{
				source="user";
				type="rotation";
				initPhase=1;
				animperiod=3;
				selection="Esc2";
				axis="osa_Esc2";
				angle0=0;
				angle1="rad +175";
			};
			class TEsc
			{
				type="translation";
				source="user";
				initPhase=1;
				animPeriod=3;
				selection="Esc1";
				axis="osa_TEsc";
				offset0=0;
				offset1=1;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust3
			{
				position="exhaust3";
				direction="exhaust3_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust4
			{
				position="exhaust4";
				direction="exhaust4_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};
		class Eventhandlers
		{
			init="_this exec ""\SCmod_P3\script\SCmod_crew_P3.sqs""; _this exec ""\SCmod_P3\script\SCmod_P3_doors.sqs"";";
		};
	};
	class Ruins;
	class SCmod_P3_Wreck: Ruins
	{
		scope=2;
		model="\SCmod_P3\SCmod_P3_Wreck.p3d";
		vehicleClass="Objects";
		displayName="P-3A Aerostar Wreck";
	};
};
class cfgMods
{
	author="76561198015646777";
	timepacked="1476461566";
};
