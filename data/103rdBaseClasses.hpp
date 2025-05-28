class 103rd_CH252D_Helmet_Base: CH252D_Helmet
{
    scope=0;
    scopeArsenal=0;
    displayName="[103rd] CH252D Helmet Base";
    author="103rd";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa"     
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa"    
        };
    };
};
class 103rd_M52_VEST_Base: M52_ODST_Vest_Base
{
	scope=1;
	scopeArsenal=1;
	author="103rd ODST AUX";
	displayName="[103rd] ODST Vest Base";
	model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
	picture="";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5",
		"Camo6",
		"Camo7",
		"Camo8",
		"Camo9",
		"Camo10",
		"Camo11",
		"Camo12",
		"Camo13",
		"Camo14",
		"Camo15",
		"Camo16",
		"Camo17",
		"Camo18",
		"Camo19",
		"Camo20",
		"Camo21",
		"Camo22",
		"Camo23",
		"Camo24",
		"Camo25",
		"Camo26",
		"Camo27",
		"Camo28",
		"Camo29",
		"CQB_Left",
		"CQB_Right",
		"Marksman_Left",
		"Marksman_Right",
		"ODST_Bracer_Left",
		"ODST_Bracer_Right",
		"ODST_Chest",
		"ODST_Left",
		"ODST_Right",
		"ChestPMLeft",
		"ChestPMRight",
		"ChestPouch",
		"LShoulderRadio",
		"RShoulderRadio",
		"StomachPouch",
		"TorsoPMLeft",
		"TorsoPMRight",
		"TorsoPouch",
		"WaistBack",
		"WaistGLeft",
		"WaistGRight",
		"WaistPLeft",
		"WaistPRight",
		"WaistRLeft",
		"WaistRRight",
		"WaistSLeft",
		"WaistSRight",
		"LegPouchL",
		"LegPouchR"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Shoulders_co.paa",
		"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Shoulders_co.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
	};
	class ItemInfo: VestItem
    {
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
        hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7",
			"Camo8",
			"Camo9",
			"Camo10",
			"Camo11",
			"Camo12",
			"Camo13",
			"Camo14",
			"Camo15",
			"Camo16",
			"Camo17",
			"Camo18",
			"Camo19",
			"Camo20",
			"Camo21",
			"Camo22",
			"Camo23",
			"Camo24",
			"Camo25",
			"Camo26",
			"Camo27",
			"Camo28",
			"Camo29",
			"CQB_Left",
			"CQB_Right",
			"Marksman_Left",
			"Marksman_Right",
			"ODST_Bracer_Left",
			"ODST_Bracer_Right",
			"ODST_Chest",
			"ODST_Left",
			"ODST_Right",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"LShoulderRadio",
			"RShoulderRadio",
			"StomachPouch",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight",
			"LegPouchL",
			"LegPouchR"
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Vest_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Shoulders_co.paa",
			"MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Shoulders_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
        vestType="Rebreather";
		containerClass="Supply200";
		mass=20;
		passThrough=0.1;
		modelSides[]={6};
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName="HitNeck";
				armor=20;
				passThrough=0.5;
			};
			class Legs
			{
				hitpointName="HitLegs";
				armor=20;
				passThrough=0.5;
			};
			class Arms
			{
				hitpointName="HitArms";
				armor=25;
				passThrough=0.1;
			};
			class Hands
			{
				hitpointName="HitHands";
				armor=20;
				passThrough=0.1;
			};
			class Chest
			{
				hitpointName="HitChest";
				armor=35;
				passThrough=0.1;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=30;
				passThrough=0.1;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=30;
				passThrough=0.1;
			};
			class Pelvis
			{
				hitpointName="HitPelvis";
				armor=30;
				passThrough=0.1;
			};
			class Body
			{
				hitpointName="HitBody";
				passThrough=0.1;
			};
		};
    };
};

//ODST Uniform Base
class 103rd_Uniform_ODST_Base_Weapon: MA_Marine_BDU_ODST_HJ_NC
{
	scope=1;
	scopeArsenal=1;
	author="103rd ODST AUX";
	displayName="[103rd] ODST Uniform Weapon Base";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
	class ItemInfo: UniformItem
    {
		uniformModel="-";
        uniformClass="103rd_Uniform_ODST_Base_Vehicle";
		containerClass="Supply200";
		mass=10;
		uniformType="Neopren";
		modelSides[]={6};
    };
};

// Base Weapons

class 103rd_M7_SMG: MA_M7_SMG
	{
		scope=0;
		scopeArsenal=0;
		author="103rd ODST AUX";
		model="MA_Weapons\data\MA_M7_SMG.p3d";
		displayName="[103rd] M7S SMG";
		hiddenSelections[]=
		{
			"M7_Body",
			"M7_Addons"
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Weapons\data\M7_SMG\Data\M7_SMG_Body_CO.paa",
			"MA_Weapons\data\M7_SMG\Data\M7_SMG_Addons_CO.paa"
		};
	};