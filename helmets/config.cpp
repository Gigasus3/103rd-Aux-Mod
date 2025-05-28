class CfgPatches
{
    class 103rd_Helmets
    {
        author="103rd";
        name="103rd";
        units[]=
        {};
        weapons[]=
        {};
        magazines[]={};
        ammo[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "MA_Armor"
            
        };
    };
};

//ACE Arsenal Extended configuration
#include<XtdGearModels.hpp>

class CfgWeapons
{
    class CH252D_Helmet;
    class M52_ODST_Vest_Base;
    class M52_ODST_Vest_ODST;
    class MA_Helmet_Base;
    class ItemInfo;
    class UniformItem;
    class VestItem;
    class MA_M56A_Helmet;
    class 103rd_CH252D_Helmet_Base;
    class MA_Recon_Helmet_Black;


    //103rd ODST Helmet Config
    #include<103rdODSTHelmets.hpp>

    //103rd Custom Helmet Config
    #include<103rdCustomHelmets.hpp>

};