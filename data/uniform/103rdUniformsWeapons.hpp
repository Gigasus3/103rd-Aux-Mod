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
// Dress Uniform
    class 103rd_Dress_Uniform_Gigasus: 103rd_Dress_Uniform_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Dress Uniform (Gigasus)";
    author="103rd ODST AUX";
    class XtdGearInfo
	{
		model="103rd_Dress_Uniforms";
		103rd_Dress_Uniforms="Gigasus";
	};
    class ItemInfo: UniformItem
    {
	uniformModel="-";
    uniformClass="103rd_Dress_Uniform_Gigasus_v";
	containerClass="Supply200";
	mass=10;
	uniformType="Neopren";
	modelSides[]={6};
    };
};

    class 103rd_Dress_Uniform_Hellhawk: 103rd_Dress_Uniform_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Dress Uniform (Hellhawk)";
    author="103rd ODST AUX";
    class XtdGearInfo
	{
		model="103rd_Dress_Uniforms";
		103rd_Dress_Uniforms="Hellhawk";
	};
    class ItemInfo: UniformItem
    {
	uniformModel="-";
    uniformClass="103rd_Dress_Uniform_Hellhawk_v";
	containerClass="Supply200";
	mass=10;
	uniformType="Neopren";
	modelSides[]={6};
    };
};

    class 103rd_Dress_Uniform_Bear: 103rd_Dress_Uniform_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Dress Uniform (Bear)";
    author="103rd ODST AUX";
    class XtdGearInfo
	{
		model="103rd_Dress_Uniforms";
		103rd_Dress_Uniforms="Bear";
	};
    class ItemInfo: UniformItem
    {
	uniformModel="-";
    uniformClass="103rd_Dress_Uniform_Bear_v";
	containerClass="Supply200";
	mass=10;
	uniformType="Neopren";
	modelSides[]={6};
    };
};

    class 103rd_Dress_Uniform: 103rd_Dress_Uniform_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[103rd] Dress Uniform";
    author="103rd ODST AUX";
    class XtdGearInfo
	{
		model="103rd_Dress_Uniforms";
		103rd_Dress_Uniforms="ODST";
	};
    class ItemInfo: UniformItem
    {
	uniformModel="-";
    uniformClass="103rd_Dress_Uniform_v";
	containerClass="Supply200";
	mass=10;
	uniformType="Neopren";
	modelSides[]={6};
    };
};