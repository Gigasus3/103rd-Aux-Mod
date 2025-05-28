class CfgGlasses {
    class G_Combat;
    class 103rd_Crack_CombatGoggle: G_Combat {
        ace_color[] = {0, 0, -1};  // Post-proccess color
        ace_tintAmount = COLOUR*2;  // Amount of tint applied to the color
        ace_resistance = 2;  // Resistance to breaking (0 or 1 or 2)
        ace_protection = 1;  // Provides protection (0-no, 1-yes)
        ace_overlay = "OD103\data\textures\HUD\CombatGogglesCracked.paa";  // (Optional) Default overlay image path ("" for none)
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";  // (Optional) Dirt overlay image path
        ace_overlayCracked = "";  // (Optional) Cracked overlay image path
        ace_dustPath = "mod\textures\fx\dust\dust1.paa";  // (Optional) Dust overlay image path
    };
    class 103rd_StandardCrack: G_Combat {
        ace_color[] = {0, 0, -1};  // Post-proccess color
        ace_tintAmount = COLOUR*2;  // Amount of tint applied to the color
        ace_resistance = 2;  // Resistance to breaking (0 or 1 or 2)
        ace_protection = 1;  // Provides protection (0-no, 1-yes)
        ace_overlay = "OD103\data\textures\HUD\Cracked.paa";  // (Optional) Default overlay image path ("" for none)
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";  // (Optional) Dirt overlay image path
        ace_overlayCracked = "";  // (Optional) Cracked overlay image path
        ace_dustPath = "mod\textures\fx\dust\dust1.paa";  // (Optional) Dust overlay image path
    };
    class G_Diving;
    class 103rd_Crack_DivingGoggle: G_Diving {
        ace_color[] = {0, 0, -1};  // Post-proccess color
        ace_tintAmount = COLOUR*2;  // Amount of tint applied to the color
        ace_resistance = 2;  // Resistance to breaking (0 or 1 or 2)
        ace_protection = 1;  // Provides protection (0-no, 1-yes)
        ace_overlay = "OD103\data\textures\HUD\DivingGogglesCracked.paa";  // (Optional) Default overlay image path ("" for none)
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";  // (Optional) Dirt overlay image path
        ace_overlayCracked = "";  // (Optional) Cracked overlay image path
        ace_dustPath = "mod\textures\fx\dust\dust1.paa";  // (Optional) Dust overlay image path
    };
};