class 103rd_ODST_Facewear: G_Combat
{
    scope=2;
    scopeArsenal=2;
    ace_color[] = {0, 0, -1};  // Post-proccess color
    ace_tintAmount = COLOUR*2;  // Amount of tint applied to the color
    ace_resistance = 2;  // Resistance to breaking (0 or 1 or 2)
    ace_protection = 1;  // Provides protection (0-no, 1-yes)
    ace_overlay = "OD103\data\textures\HUD\CombatGoggles.paa";  // (Optional) Default overlay image path ("" for none)
    ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";  // (Optional) Dirt overlay image path
    ace_overlayCracked = "OD103\data\textures\HUD\CombatGogglesCracked.paa";  // (Optional) Cracked overlay image path
    ace_dustPath = "mod\textures\fx\dust\dust1.paa";  // (Optional) Dust overlay image path
    author="103rd ODST Aux";
    displayName="[103rd] M56SH Standard";
    model="MA_Armor\data\Attachments\H3_ODST_NVGs.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "Cam_L",
        //"Cam_R",
        "Command_L",
        "Command_R",
        "NODs",
        "Rebreather",
        //"Sensor_L",
        "Sensor_R"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Attachments\Cameras\Helmet_Camera_L_co.paa",
        "MA_Armor\data\Attachments\Cameras\Helmet_Camera_R_co.paa",
        "MA_Armor\data\Attachments\Command_Module\Command_Module_Left_co.paa",
        "MA_Armor\data\Attachments\Command_Module\Command_Module_Right_co.paa",
        "MA_Armor\data\Attachments\NODs\NODs_co.paa",
        "MA_Armor\data\Attachments\Rebreather\Rebreather_co.paa",
        "MA_Armor\data\Attachments\Sensors\Sensor_L_co.paa",
        "MA_Armor\data\Attachments\Sensors\Sensor_R_co.paa"
    };
};
class 103rd_ODST_Command: 103rd_ODST_Facewear
{
    scope=2;
    scopeArsenal=2;
    ace_color[] = {0, 0, -1};  // Post-proccess color
    ace_tintAmount = COLOUR*2;  // Amount of tint applied to the color
    ace_resistance = 2;  // Resistance to breaking (0 or 1 or 2)
    ace_protection = 1;  // Provides protection (0-no, 1-yes)
    ace_overlay = "OD103\data\textures\HUD\CombatGoggles.paa";  // (Optional) Default overlay image path ("" for none)
    ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";  // (Optional) Dirt overlay image path
    ace_overlayCracked = "OD103\data\textures\HUD\CombatGogglesCracked.paa";  // (Optional) Cracked overlay image path
    ace_dustPath = "mod\textures\fx\dust\dust1.paa";  // (Optional) Dust overlay image path
    author="103rd ODST Aux";
    displayName="[103rd] M56SH Command";
    model="MA_Armor\data\Attachments\H3_ODST_NVGs.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "Cam_L",
        //"Cam_R",
        //"Command_L",
        "Command_R",
        "NODs",
        "Rebreather",
        "Sensor_L",
        "Sensor_R"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Attachments\Cameras\Helmet_Camera_L_co.paa",
        "MA_Armor\data\Attachments\Cameras\Helmet_Camera_R_co.paa",
        "MA_Armor\data\Attachments\Command_Module\Command_Module_Left_co.paa",
        "MA_Armor\data\Attachments\Command_Module\Command_Module_Right_co.paa",
        "MA_Armor\data\Attachments\NODs\NODs_co.paa",
        "MA_Armor\data\Attachments\Rebreather\Rebreather_co.paa",
        "MA_Armor\data\Attachments\Sensors\Sensor_L_co.paa",
        "MA_Armor\data\Attachments\Sensors\Sensor_R_co.paa"
    };
};
class 103rd_ODST_Diving: 103rd_ODST_Facewear
{
    scope=2;
    scopeArsenal=2;
    ace_color[] = {0, 0, -1};  // Post-proccess color
    ace_tintAmount = COLOUR*2;  // Amount of tint applied to the color
    ace_resistance = 2;  // Resistance to breaking (0 or 1 or 2)
    ace_protection = 1;  // Provides protection (0-no, 1-yes)
    ace_overlay = "OD103\data\textures\HUD\DivingGoggles.paa";  // (Optional) Default overlay image path ("" for none)
    ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";  // (Optional) Dirt overlay image path
    ace_overlayCracked = "OD103\data\textures\HUD\DivingGogglesCracked.paa";  // (Optional) Cracked overlay image path
    ace_dustPath = "mod\textures\fx\dust\dust1.paa";  // (Optional) Dust overlay image path
    author="103rd ODST Aux";
    displayName="[103rd] M56SH Diving";
    model="MA_Armor\data\Attachments\H3_ODST_NVGs.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        //"Cam_L",
        "Cam_R",
        "Command_L",
        "Command_R",
        "NODs",
        //"Rebreather",
        "Sensor_L",
        //"Sensor_R"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Attachments\Cameras\Helmet_Camera_L_co.paa",
        "MA_Armor\data\Attachments\Cameras\Helmet_Camera_R_co.paa",
        "MA_Armor\data\Attachments\Command_Module\Command_Module_Left_co.paa",
        "MA_Armor\data\Attachments\Command_Module\Command_Module_Right_co.paa",
        "MA_Armor\data\Attachments\NODs\NODs_co.paa",
        "MA_Armor\data\Attachments\Rebreather\Rebreather_co.paa",
        "MA_Armor\data\Attachments\Sensors\Sensor_L_co.paa",
        "MA_Armor\data\Attachments\Sensors\Sensor_R_co.paa"
    };
};