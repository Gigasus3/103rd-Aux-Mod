#include "BIS_AddonInfo.hpp"
class CfgPatches
{
    class 103rd
    {
        author="Hawk";
        name="103rd";
        units[]=
        {
            "Flag_103rd",
            "103rd_STANDARD_Rucksack",
            "103rd_ENGINEER_Rucksack",
            "103rd_MEDIC_Rucksack",
            "103rd_RTO_Rucksack",
            "103rd_M52DInv_Rucksack",
            "103rd_MARKSMAN_Rucksack"
        };
        weapons[]=
        {
            "103rd_M52_STND_VEST_STANDARD",
            "103rd_M52_STND_VEST_MARKSMAN",
            "103rd_M52_STND_VEST_MEDIC",
            "103rd_M52_STND_VEST_ENGINEER",
            "103rd_M52_STND_VEST_RTO",
            "103rd_ODST_Facewear",
            "103rd_ODST_Command",
            "103rd_ODST_Diving",
            "103rd_M52_Hellhawk_VEST",
            "103rd_M52_Cooky_VEST",
            "103rd_M52_Astro_VEST",
            "103rd_M52_Rex_VEST",
            "103rd_M52_Gigasus_VEST",
            "103rd_CH252D_Helmet_Standard",
            "103rd_CH252D_Helmet_MEDIC",
            "103rd_CH252D_Helmet_RTO",
            "103rd_CH252D_Helmet_ENGINEER",
            "103rd_CH252D_Helmet_MARKSMAN",
            "103rd_Hellhawk_Helmet",
            "103rd_Astro_Helmet",
            "103rd_Astro_Recon_Helmet",
            "103rd_Rex_Helmet",
            "103rd_Cooky_Helmet",
            "103rd_Gigasus_Helmet",
            "103rd_M7S_Gigasus"
        };
        magazines[]={};
        ammo[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "MA_Armor"
        };
    };
};

//ACE Arsenal Extended configuration
#include<XtdGearModels.hpp>

class CfgWeapons
{
    class CH252D_Helmet;
    class MA_Recon_Helmet_Black;
    class M52_ODST_Vest_Base;
    class M52_ODST_Vest_ODST;
    class MA_Helmet_Base;
	class MA_Marine_BDU_ODST_HJ_NC;
    class ItemInfo;
    class UniformItem;
    class VestItem;
	class MA_M7_SMG;
    class OPTRE_UNSC_Dress_Uniform_odst;

    //103rd Base Classes
    #include<103rdBaseClasses.hpp>

    //103rd Standard ODST Armor Config
    #include<103rdStndArmor.hpp>

    //103rd Custom Armor Config
    #include<103rdCustomArmor.hpp>

	//103rd Standard Uniforms - CfgWeapons class
    #include<uniform\103rdUniformsWeapons.hpp>

	//103rd Weapons Config
    #include<weapons\103rdWeapons.hpp>
};

class CfgVehicles
{
	class MA_Backpack_Base;
    class MA_Marine_ODST_BDU_HJ_NC;
    class FlagCarrier;
    class OPTRE_UNSC_Army_Soldier_DressODST;

    //103rd Base Classes - CfgVehicles class
    #include<103rdBaseClassesVehicles.hpp>

    //103rd Standard Uniforms - CfgVehicles class
    #include<uniform\103rdUniformVehicles.hpp>

    //103rd Backpacks - CfgVehicles class
    #include<backpack\103rdStndBackpacks.hpp>

    class Flag_103rd: FlagCarrier
	{
		author = "103rd ODST Aux";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"flag",0}};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		_generalMacro = "Flag_ION_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "[103rd] Flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\OD103\data\Logo\103rdFlag.paa'";
		};
	};
};

class CfgGlasses
{
    class G_Combat;
    class G_Diving;
    
    //103rd Facewear Config
   #include<103rdFacewears.hpp>

    //ACE Goggle
    //#include<CfgGlasses.hpp>
};