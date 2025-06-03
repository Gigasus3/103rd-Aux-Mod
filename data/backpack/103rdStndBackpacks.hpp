//Backpack Standard
class 103rd_STANDARD_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Standard";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_odst_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Standard";
	};
};

//Backpack ENGINEER
class 103rd_ENGINEER_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Engineer";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_eng_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Engineer";
	};
};

//Backpack ENGINEER LR
class 103rd_ENGINEERLR_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Engineer LR";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_eng_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
	// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Engineer LR";
	};
};

//Backpack MEDIC
class 103rd_MEDIC_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Medic";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_med_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Medic";
	};
};
//Backpack MEDIC LR
class 103rd_MEDICLR_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Medic LR";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_med_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
	// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Medic LR";
	};
};

//Backpack RTO
class 103rd_RTO_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack RTO";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_rto_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
    // TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="RTO";
	};
};

//Invisible Backpack Base
class 103rd_M52DInv_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Invisible";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		//"MA_Armor\data\Backpacks\M52_Rucksack\Backpack_CO.paa",
		//"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Invisible";
	};
};

//Invisible Backpack RTO
class 103rd_M52DInv_RTO_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Invisible RTO";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		//"MA_Armor\data\Backpacks\M52_Rucksack\Backpack_CO.paa",
		//"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
    // TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Invis RTO";
	};
};

//Backpack MARKSMAN
class 103rd_MARKSMAN_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Marksman";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_mrk_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Marksman";
	};
};

//Backpack MARKSMAN LR
class 103rd_MARKSMANLR_Rucksack: 103rd_M56D_Rucksack_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] M56D Rucksack Marksman LR";
	model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
	picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"OD103\data\backpack\backpack_mrk_co.paa",
		"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
	};
	// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    class XtdGearInfo
	{
		model="103rd_Standard_Backpacks";
		103rd_Standard_Backpacks="Marksman LR";
	};
};