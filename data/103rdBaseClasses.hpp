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
class 103rd_Dress_Uniform_Base: OPTRE_UNSC_Dress_Uniform_odst
{
	scope=1;
	scopeArsenal=1;
    displayName="[103rd] Dress Uniform";
    author="103rd ODST AUX";
    class ItemInfo: UniformItem
    {
		uniformModel="-";
        uniformClass="103rd_Dress_Uniform_Base_v";
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

class 103rd_M90_SG: MA_M90_SG
{
	scope=0;
	scopeArsenal=0;
	author="103rd ODST AUX";
	model="MA_Weapons\data\M90.p3d";
	picture="\MA_Weapons\data\M90\data\Icons\M90_Icon.paa";
	displayName="[103rd] M90 Shotgun";
    baseWeapon = "103rd_M90";
	hiddenSelections[]=
	{
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Weapons\data\M90\data\M90_Shotgun_CO.paa"
	};
};

class 103rd_MA5B: MA_MA5B
{
	scope=0;
	scopeArsenal=0;
	author="103rd ODST AUX";
	model="MA_Weapons\data\MA5B.p3d";
	picture="\MA_Weapons\data\MA5B\Icons\MA5B_Icon.paa";
	displayName="[103rd] MA5B Assault Rifle";
    baseWeapon = "103rd_MA5B";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Weapons\data\MA5B\MA5B_Weapon_co.paa",
		"MA_Weapons\data\MA5B\MA5B_Screen_co.paa"
	};
};

class 103rd_MA2B: MA_MA2B_AR
{
	scope=0;
	scopeArsenal=0;
	author="103rd ODST AUX";
	model="MA_Weapons\data\MA_MA2B.p3d";
	picture="\MA_Weapons\data\MA2B\data\Icons\MA2B_Icon.paa";
	displayName="[103rd] MA2B Carbine";
    baseWeapon = "103rd_MA2B";
	hiddenSelections[]=
	{
		"Camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Weapons\data\MA2B\data\MA2B_co.paa"
	};
};

class 103rd_BR55: MA_BR55_HB
{
	scope=0;
	scopeArsenal=0;
	author="103rd ODST AUX";
	model="MA_Weapons\data\H2BR.p3d";
	picture="\MA_Weapons\data\H2_BR55\Icons\BR55_Icon.paa";
	displayName="[103rd] BR55HB Battle Rifile";
    baseWeapon = "103rd_BR55";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Weapons\data\H2_BR55\BR55HB_Back_co.paa",
		"MA_Weapons\data\H2_BR55\BR55HB_Barrel_co.paa",
		"MA_Weapons\data\H2_BR55\BR55HB_Top_co.paa",
		"MA_Weapons\data\H2_BR55\BR55HB_Front_co.paa",
		"MA_Weapons\data\H2_BR55\BR55HB_Mag_co.paa"
	};
};

class 103rd_MK50: MA_MK50_Sidekick
{
	scope=0;
	scopeArsenal=0;
	author="103rd ODST AUX";
	model="MA_Weapons\data\Sidekick.p3d";
	picture="\MA_Weapons\data\Sidekick\Icons\Sidekick_Icon.paa";
	displayName="[103rd] MK50 Sidekick Handgun";
    baseWeapon = "103rd_MK50";
	hiddenSelections[]=
	{
		"Camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Weapons\data\Sidekick\Sidekick_CO.paa"
	};
};