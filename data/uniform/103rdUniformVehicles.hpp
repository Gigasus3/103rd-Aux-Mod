//103rd Uniform
class 103rd_Uniform_ODST_Vehicle: 103rd_Uniform_ODST_Base_Vehicle
{
	scope=2;
	scopeArsenal=2;
	UniformClass="103rd_Uniform_ODST_Weapon";
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
		"OD103\data\uniform\textures\103rd_ODSTUpperBDU_CO.paa",
		"OD103\data\uniform\textures\103rd_ODSTLowerBDU_CO.paa",
		"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
		"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
		"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
		"OD103\data\uniform\textures\103rd_ODST_UpperArmor_CO.paa",
		"OD103\data\uniform\textures\103rd_ODSTLowerArmor_CO.paa",
		"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
		"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
		"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
	};
};

//Dress Vehicle
    class 103rd_Dress_Uniform_Gigasus_v: 103rd_Dress_Uniform_Base_v
    {
        scope = 2;
        scopeArsenal=2;
        author = "103rd ODST Aux";
        displayName = "[103rd] Dress Uniform (Gigasus)";
        model="\OPTRE_UNSC_Units\Army\officer.p3d";
        picture="OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
        hiddenSelections[] = {"camo1","camo2","insignia","clan","ODST"};
        hiddenSelectionsTextures[] ={"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","OD103\data\uniform\textures\Gigasus_Ranks_CO.paa"};
    };

    class 103rd_Dress_Uniform_Hellhawk_v: 103rd_Dress_Uniform_Base_v
    {
        scope = 2;
        scopeArsenal=2;
        author = "103rd ODST Aux";
        displayName = "[103rd] Dress Uniform (Hellhawk)";
        model="\OPTRE_UNSC_Units\Army\officer.p3d";
        picture="OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
        hiddenSelections[] = {"camo1","camo2","insignia","clan","ODST"};
        hiddenSelectionsTextures[] ={"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","OD103\data\uniform\textures\Hellhawk_Ranks_CO.paa"};
    };

    class 103rd_Dress_Uniform_Bear_v: 103rd_Dress_Uniform_Base_v
    {
        scope = 2;
        scopeArsenal=2;
        author = "103rd ODST Aux";
        displayName = "[103rd] Dress Uniform (Bear)";
        model="\OPTRE_UNSC_Units\Army\officer.p3d";
        picture="OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
        hiddenSelections[] = {"camo1","camo2","insignia","clan","ODST"};
        hiddenSelectionsTextures[] ={"OPTRE_UNSC_Units\Army\data\dress_uniform_white_co.paa","OD103\data\uniform\textures\Bear_Ranks_CO.paa"};
    };

    class 103rd_Dress_Uniform_v: 103rd_Dress_Uniform_Base_v
    {
        scope = 2;
        scopeArsenal=2;
        author = "103rd ODST Aux";
        displayName = "[103rd] Dress Uniform";
        model="\OPTRE_UNSC_Units\Army\officer.p3d";
        picture="OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
        hiddenSelections[] = {"camo1","camo2","insignia","clan","ODST"};
        hiddenSelectionsTextures[] ={"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","OD103\data\uniform\textures\103rd_Ranks_CO.paa"};
    };