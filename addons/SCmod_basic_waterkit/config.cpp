class CfgPatches
{
	class SCmod_basic_waterkit
	{
		units[]=
		{
			"SCmod_basic_waterkit",
			"SCmod_large_waterkit",
			"SCmod_large_waterkit_2",
			"SCmod_large_waterkit_3",
			"SCmod_large_waterkit_5",
			"SCmod_large_waterkit_6",
			"SCmod_bamby_bucket",
			"SCmod_MAFFS",
			"SCmod_Belly",
			"SCmod_Amphi",
			"SCmod_dynamic_fire",
			"SCmod_random_radio"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Modules_F"
		};
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class SCmod: NO_CATEGORY
	{
		displayName="SCmod";
		flag="\SCmod_basic_waterkit\data\SCflag.paa";
		icon="\SCmod_basic_waterkit\data\SCicon.paa";
		priority=1;
		side=3;
	};
	class SCmod90: NO_CATEGORY
	{
		displayName="SCmod 1990";
		flag="\SCmod_basic_waterkit\data\SCflag.paa";
		icon="\SCmod_basic_waterkit\data\SCicon.paa";
		priority=1;
		side=3;
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class SCmod_basic_waterkit: Module_F
	{
		scope=2;
		displayName="0 - Universal waterkit";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_basic_waterkit";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributebasic_waterkit";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod Universal waterkit init module";
			sync[]={};
		};
	};
	class SCmod_large_waterkit: Module_F
	{
		scope=2;
		displayName="2 - Waterkit for HH-49";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_large_waterkit";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributelarge_waterkit";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod large waterkit for HH-49 init module";
			sync[]={};
		};
	};
	class SCmod_large_waterkit_2: Module_F
	{
		scope=2;
		displayName="3 - Waterkit for MI-292";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_large_waterkit_2";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributelarge_waterkit_2";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod large waterkit for MI-292 init module";
			sync[]={};
		};
	};
	class SCmod_large_waterkit_3: Module_F
	{
		scope=2;
		displayName="4 - Waterkit for EC-225 / AS-332";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_large_waterkit_3";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributelarge_waterkit_3";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod large waterkit for EC-225 / AS-332 init module";
			sync[]={};
		};
	};
	class SCmod_large_waterkit_5: Module_F
	{
		scope=2;
		displayName="5 - Waterkit for SA-330";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_large_waterkit_5";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributelarge_waterkit_5";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod large waterkit for SA-330 init module";
			sync[]={};
		};
	};
	class SCmod_large_waterkit_6: Module_F
	{
		scope=2;
		displayName="6 - Waterkit for HH-67";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_large_waterkit_6";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributelarge_waterkit_6";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod large waterkit for HH-67 init module";
			sync[]={};
		};
	};
	class SCmod_bamby_bucket: Module_F
	{
		scope=2;
		displayName="1 - Universal bucket bladder";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_bamby_bucket";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributebamby_bucket";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod Universal bucket bladder init module";
			sync[]={};
		};
	};
	class SCmod_MAFFS: Module_F
	{
		scope=2;
		displayName="7 - Modular Airborne System for L100J";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_MAFFS";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributeMAFFS";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod Modular Airborne System for L100J init module";
			sync[]={};
		};
	};
	class SCmod_Belly: Module_F
	{
		scope=2;
		displayName="8 - Belly tank for aircrafts";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_Belly";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributeBelly";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod Belly mounted tank for Aircraft init module";
			sync[]={};
		};
	};
	class SCmod_Amphi: Module_F
	{
		scope=2;
		displayName="9 - Belly tank for amphibian";
		icon="\SCmod_basic_waterkit\data\iconmodule_ca.paa";
		category="SCmod";
		function="SCmod_fnc_amphi";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributeBelly";
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="SCmod Belly mounted tank for Amphibian init module";
			sync[]={};
		};
	};
	class SCmod_dynamic_fire: Module_F
	{
		scope=2;
		displayName="SCmod dynamic mission";
		icon="\SCmod_basic_waterkit\data\iconmodule_F_ca.paa";
		category="SCmod";
		function="SCmod_fnc_dynamic_fire";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributedynamic_fire";
		class ModuleDescription: ModuleDescription
		{
			description="SCmod dynamic mission init module";
			sync[]={};
		};
	};
	class SCmod_random_radio: Module_F
	{
		scope=2;
		displayName="SCmod random radio";
		icon="\SCmod_basic_waterkit\data\iconmodule_R_ca.paa";
		category="SCmod";
		function="SCmod_fnc_random_radio";
		functionPriority=1;
		isGlobal=1;
		isPersistent=1;
		isTriggerActivated=1;
		isDisposable=0;
		curatorInfoType="RscDisplayAttributerandom_radio";
		class ModuleDescription: ModuleDescription
		{
			description="SCmod random radio init module";
			sync[]={};
		};
	};
};
class CfgFunctions
{
	class SCmod
	{
		class SCmod
		{
			class basic_waterkit
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_basic_waterkit.sqf";
				class modulebasic_waterkit
				{
				};
				class 
				{
				};
			};
			class large_waterkit
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_large_waterkit.sqf";
				class modulelarge_waterkit
				{
				};
				class 
				{
				};
			};
			class large_waterkit_2
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_large_waterkit_2.sqf";
				class modulelarge_waterkit_2
				{
				};
				class 
				{
				};
			};
			class large_waterkit_3
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_large_waterkit_3.sqf";
				class modulelarge_waterkit_3
				{
				};
				class 
				{
				};
			};
			class large_waterkit_5
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_large_waterkit_5.sqf";
				class modulelarge_waterkit_5
				{
				};
				class 
				{
				};
			};
			class large_waterkit_6
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_large_waterkit_6.sqf";
				class modulelarge_waterkit_6
				{
				};
				class 
				{
				};
			};
			class bamby_bucket
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_bamby_bucket.sqf";
				class modulebamby_bucket
				{
				};
				class 
				{
				};
			};
			class MAFFS
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_MAFFS.sqf";
				class moduleMAFFS
				{
				};
				class 
				{
				};
			};
			class Belly
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_Belly.sqf";
				class moduleBelly
				{
				};
				class 
				{
				};
			};
			class Amphi
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_Amphi.sqf";
				class moduleBelly
				{
				};
				class 
				{
				};
			};
			class dynamic_fire
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_dynamic_fire.sqf";
				class moduledynamic_fire
				{
				};
				class 
				{
				};
			};
			class random_radio
			{
				file="\SCmod_basic_waterkit\functions\SCmod_fnc_random_radio.sqf";
				class modulerandom_radio
				{
				};
				class 
				{
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198015646777";
	timepacked="1479674774";
};
