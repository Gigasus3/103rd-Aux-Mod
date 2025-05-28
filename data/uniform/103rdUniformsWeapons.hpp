// ODST Camo
class 103rd_Uniform_ODST_Weapon: 103rd_Uniform_ODST_Base_Weapon
{
    scope=2;
    scopeArsenal=2;
    author="103rd ODST AUX";
    displayName="[103rd] M56D ODST Uniform";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    class XtdGearInfo
	{
		model="103rd_Standard_Uniforms";
		103rd_Standard_Uniforms="ODST";
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="-";
        uniformClass="103rd_Uniform_ODST_Vehicle";
    };
};