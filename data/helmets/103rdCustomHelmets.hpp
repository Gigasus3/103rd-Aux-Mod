class 103rd_Hellhawk_Helmet: 103rd_CH252D_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Hellhawk Helmet";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "OD103\data\helmets\customs\helm_hellhawk_co.paa",
		"OD103\data\helmets\customs\visor\helm_visor_hellhawk_co.paa"
    };
    
    class XtdGearInfo
	{
		model="103rd_Custom_Helmets";
		103rd_Custom_Helmets="Hellhawk";
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    };
};

class 103rd_Astro_Helmet: 103rd_CH252D_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Astro Helmet";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "OD103\data\helmets\customs\helm_astro_co.paa",
		"OD103\data\helmets\customs\visor\helm_visor_astro.paa"
    };
    
    class XtdGearInfo
	{
		model="103rd_Custom_Helmets";
		103rd_Custom_Helmets="Astro";
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    };
};

class 103rd_Astro_Recon_Helmet: 103rd_Recon_Helm
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Astro Helmet";
    model="MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    hiddenSelectionsTextures[]=
    {
        "OD103\data\helmets\customs\helm_recon_astro_co.paa",
		"OD103\data\helmets\customs\visor\helm_recon_visor_astro_co.paa"
    };
    class XtdGearInfo
	{
		model="103rd_Custom_Helmets";
		103rd_Custom_Helmets="Astro Recon";
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
    };
};

class 103rd_Rex_Helmet: 103rd_CH252D_Helmet_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] Rex Helmet";
	model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
	picture="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
	hiddenSelectionsTextures[]=
	{
		"OD103\data\helmets\customs\helm_rex_co.paa",
		"OD103\data\helmets\customs\visor\helm_visor_rex_co.paa"
	};
	class XtdGearInfo
	{
	model="103rd_Custom_Helmets";
	103rd_Custom_Helmets="Rex";
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
	};
};

class 103rd_Cooky_Helmet: 103rd_AA_Helm
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] Cooky Helmet";
	model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
	hiddenSelectionsTextures[]=
	{
		"OD103\data\helmets\customs\helm_cooky_co.paa",
		"OD103\data\helmets\customs\visor\helm_visor_cooky_co.paa"
	};
	class XtdGearInfo
	{
	model="103rd_Custom_Helmets";
	103rd_Custom_Helmets="Cooky";
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
	};
};

class 103rd_Gigasus_Helmet: 103rd_CH252D_Helmet_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Gigasus Helmet";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "OD103\data\helmets\customs\Gigasus_ODST_Helmet_CO.paa",
		"OD103\data\helmets\customs\visor\Gigasus_ODST_Visor_CO.paa"
    };
    
    class XtdGearInfo
	{
		model="103rd_Custom_Helmets";
		103rd_Custom_Helmets="Gigasus";
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    };
};

class 103rd_Thunder_Helmet: 103rd_CH252D_Helmet_Base
{
	scope=2;
	scopeArsenal=2;
	displayName="[103rd] Thunder Helmet";
	model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
	picture="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
	hiddenSelectionsTextures[]=
	{
		"OD103\data\helmets\customs\helm_thunder_co.paa",
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa"
	};
	class XtdGearInfo
	{
	model="103rd_Custom_Helmets";
	103rd_Custom_Helmets="Thunder";
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
	};
};
class 103rd_Thunder_Helmet_dp: 103rd_Thunder_Helmet
{
	scope=1;
	scopeArsenal=1;
	displayName="[103rd] Thunder Helmet";
	model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
	picture="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
	hiddenSelectionsTextures[]=
	{
		"OD103\data\helmets\customs\helm_thunder_co.paa",
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
        hiddenSelectionsTextures[]=
        {
            "OD103\data\helmets\customs\helm_thunder_co.paa",
            "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"    
        };
	};
};