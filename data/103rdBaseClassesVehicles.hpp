//Base class file; determines all trait values for associated armors. Individual parts in other files determine textures and names.

//Rucksack Base
class 103rd_M56D_Rucksack_Base: MA_Backpack_Base
{
	scope=1;
	scopeArsenal=1;
	displayName="[103rd] M56D Rucksack";
	model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	maximumLoad=500;
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"Radio"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa",
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
		"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa"
	};
};
//ODST Uniform Base
class 103rd_Uniform_ODST_Base_Vehicle: MA_Marine_ODST_BDU_HJ_NC
{
	scope=1;
	scopeArsenal=1;
	UniformClass="103rd_Uniform_ODST_Base_Weapon";
	model="\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
	picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
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
 //     "Uni_Upper",
 //     "Uni_Lower",
        "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
        "Shoulders_Upper"
	};
	hiddenSelectionsTextures[]=
	{
		"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTUpperBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTLowerBDU_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperUpperArmor_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTLowerArmor_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
	};
};