/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "AAF Firearms Surplus";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500, { "", "", -1 } },
            { "hgun_Pistol_01_F", "", 15000, -1, { "", "", -1 } },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, { "", "", -1 } },
            { "hgun_ACPC2_F", "", 11500, -1, { "", "", -1 } },
            { "hgun_Pistol_heavy_01_F", "", 10000, -1, { "", "", -1 } },
            { "SMG_02_F", "", 30000, -1, { "", "", -1 } },
            { "SMG_01_F", "", 30000, -1, { "", "", -1 } },
            { "hgun_PDW2000_F", "", 22500, -1, { "", "", -1 } },
            { "arifle_SDAR_F", "", 55000, -1, { "", "", -1 } }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, { "", "", -1 } },
            { "10Rnd_9x21_Mag", "", 25, 100, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, { "", "", -1 } },
            { "9Rnd_45ACP_Mag", "", 45, 100, { "", "", -1 } },
            { "11Rnd_45ACP_Mag", "", 45, 100, { "", "", -1 } },
            { "30Rnd_45ACP_Mag_SMG_01", "", 45, 100, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "", 75, 100, { "", "", -1 } },
            { "20Rnd_556x45_UW_mag", "", 75, 100, { "", "", -1 } }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 5500, 100, { "", "", -1 } },
            { "optic_Holosight_smg", "", 10000, 100, { "", "", -1 } }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_AKS_F", "", 55000, 2500, { "", "", -1 } },
            { "arifle_TRG20_F", "", 55000, 5000, { "", "", -1 } },
			{ "arifle_Mk20_F", "", 55000, -1, { "", "", -1 } },
            { "arifle_SPAR_01_khk_F", "", 75000, 7500, { "", "", -1 } },
			{ "LMG_03_F", "", 210000, 7500, { "", "", -1 } },
            { "arifle_Katiba_F", "", 90000, 7500, { "", "", -1 } },
			{ "arifle_ARX_blk_F", "", 90000, 7500, { "", "", -1 } },
			{ "arifle_ARX_ghex_F", "", 90000, 7500, { "", "", -1 } },
			{ "arifle_ARX_hex_F", "", 90000, 7500, { "", "", -1 } },
			{ "10Rnd_50BW_Mag_F", "Type 115 .50", 100000, 100, { "", "", -1 } },
            { "arifle_MX_F", "", 95000, 7500, { "", "", -1 } },
            { "arifle_MXM_F", "", 105000, 7500, { "", "", -1 } },
			{ "LMG_Mk200_F", "", 250000, -1, { "", "", -1 } },
            { "arifle_AKM_F", "", 75000, 7500, { "", "", -1 } },
            { "srifle_DMR_01_F", "", 150000, 7500, { "", "", -1 } },
			{ "arifle_AK12_F", "", 150000, 5000, { "", "", -1 } },
            { "srifle_DMR_06_olive_F", "", 240000, 7500, { "", "", -1 } },
            { "srifle_DMR_03_woodland_F", "", 250000, 7500, { "", "", -1 } },
            { "LMG_Zafir_F", "", 500000, 7500, { "", "", -1 } },
            { "srifle_DMR_02_camo_F", "", 500000, 7500, { "", "", -1 } },
			{ "srifle_LRR_F", "", 911000, 7500, { "", "", -1 } },
            { "launch_RPG7_F", "", 500000, 7500, { "", "", -1 } },
			{ "NVGoggles", "", 2000, 980, { "", "", -1 } },
			{ "Binocular", "", 150, -1, { "", "", -1 } },
            { "ItemGPS", "", 100, 45, { "", "", -1 } },
            { "ItemMap", "", 50, 35, { "", "", -1 } },
            { "ItemCompass", "", 50, 25, { "", "", -1 } },
            { "ItemWatch", "", 50, -1, { "", "", -1 } },
            { "FirstAidKit", "", 150, 65, { "", "", -1 } }
        };
        mags[] = {
            { "30Rnd_545x39_Mag_F", "", 175, 100, { "", "", -1 } },
            { "30Rnd_556x45_Stanag", "", 175, 100, { "", "", -1 } },
			{ "200Rnd_556x45_Box_F", "", 25000, 100, { "", "", -1 } },
            { "30Rnd_65x39_caseless_green", "", 250, 100, { "", "", -1 } },
            { "30Rnd_65x39_caseless_mag", "", 250, 100, { "", "", -1 } },
			{ "200Rnd_65x39_cased_Box", "", 30000, 100, { "", "", -1 } },
            { "30Rnd_762x39_Mag_F", "", 1000, 100, { "", "", -1 } },
            { "10Rnd_762x54_Mag", "", 500, 100, { "", "", -1 } },
            { "20Rnd_762x51_Mag", "", 1000, 100, { "", "", -1 } },
            { "150Rnd_762x54_Box_Tracer", "", 25000, 100, { "", "", -1 } },
			{ "10Rnd_50BW_Mag_F", "", 100000, 100, { "", "", -1 } },
            { "10Rnd_338_Mag", "", 1000, 100, { "", "", -1 } },
            { "7Rnd_408_Mag", "", 5000, 100, { "", "", -1 } },
            { "RPG7_F", "", 800000, 100, { "", "", -1 } }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 100, { "", "", -1 } },
            { "optic_Holosight", "", 1000, 100, { "", "", -1 } },
            { "optic_Holosight_khk_F", "", 1000, 100, { "", "", -1 } },
            { "optic_Hamr", "", 2000, 100, { "", "", -1 } },
            { "optic_Hamr_khk_F", "", 2000, 100, { "", "", -1 } },
            { "optic_Arco", "", 3500, 100, { "", "", -1 } },
            { "optic_NVS", "", 25000, 100, { "", "", -1 } },
            { "optic_DMS", "", 20000, 100, { "", "", -1 } },
            { "optic_SOS", "", 20000, 100, { "", "", -1 } },
            { "optic_SOS_khk_F", "", 20000, 100, { "", "", -1 } },
            { "optic_AMS", "", 35750, 100, { "", "", -1 } },
            { "optic_KHS_blk", "", 30000, 100, { "", "", -1 } },
            { "optic_LRPS", "", 75000, 100, { "", "", -1 } },
            { "muzzle_snds_B", "", 55000, 100, { "", "", -1 } },
            { "muzzle_snds_H", "", 55000, 100, { "", "", -1 } },
            { "muzzle_snds_m_khk_F", "", 55000, 100, { "", "", -1 } },
            { "muzzle_snds_M", "", 55000, 100, { "", "", -1 } },
            { "muzzle_snds_acp", "", 55000, 100, { "", "", -1 } },
            { "muzzle_snds_L", "", 55000, 100, { "", "", -1 } },
            { "bipod_01_F_khk", "", 5000, 100, { "", "", -1 } },
            { "bipod_01_F_blk", "", 5000, 100, { "", "", -1 } },
            { "acc_flashlight", "", 1000, 100, { "", "", -1 } }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_02_F", "", 10000, -1, { "", "", -1 } },
			{ "hgun_Rook40_F", "", 5000, 500, { "", "", -1 } },
            { "hgun_ACPC2_F", "", 20000, -1, { "", "", -1 } },
            { "hgun_PDW2000_F", "", 25000, -1, { "", "", -1 } },
            { "SMG_01_F", "", 35000, -1, { "", "", -1 } },
            { "LMG_03_F", "", 300000, -1, { "", "", -1 } },
			{ "srifle_EBR_F", "", 150000, -1, { "", "", -1 } }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 25, 100, { "", "", -1 } },
            { "200Rnd_556x45_Box_F", "", 50, 100, { "", "", -1 } },
            { "16Rnd_9x21_Mag", "", 75, 100, { "", "", -1 } },
            { "9Rnd_45ACP_Mag", "", 75, 100, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "", 75, 100, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "", 75, 100, { "", "", -1 } },
            { "30Rnd_45ACP_Mag_SMG_01", "", 75, 100, { "", "", -1 } }
        };
        accs[] = {
            { "optic_tws", "", 300000, 100, { "Thermal Scope", "", -1 } },
			{ "optic_Hamr", "", 30000, 100, { "Thermal Scope", "", -1 } },
            { "optic_ACO_grn_smg", "", 5000, 100, { "", "", -1 } }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1, { "", "", -1 } },
            { "ItemGPS", "", 100, 45, { "", "", -1 } },
            { "ItemMap", "", 50, 35, { "", "", -1 } },
            { "ItemCompass", "", 50, 25, { "", "", -1 } },
            { "ItemWatch", "", 50, -1, { "", "", -1 } },
            { "FirstAidKit", "", 150, 65, { "", "", -1 } },
            { "NVGoggles", "", 2000, 980, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1, { "", "", -1 } },
            { "ItemGPS", "", 500, 45, { "", "", -1 } },
            { "ItemMap", "", 250, 35, { "", "", -1 } },
            { "ItemCompass", "", 250, 25, { "", "", -1 } },
            { "ItemWatch", "", 250, -1, { "", "", -1 } },
            { "FirstAidKit", "", 750, 65, { "", "", -1 } },
            { "NVGoggles", "", 10000, 980, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 1, -1, { "", "", -1 } },
            { "ItemGPS", "", 1, 1, { "", "", -1 } },
            { "ItemCompass", "", 1, 1, { "", "", -1 } },
            { "FirstAidKit", "", 1, 1, { "", "", -1 } },
            { "NVGoggles", "", 1, 1, { "", "", -1 } },
            { "hgun_P07_snds_F", "X26 Tazer", 1, 1, { "", "", -1 } },
			{ "hgun_Pistol_heavy_01_F", "", 1, 1, { "", "", -1 } }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 1, 1, { "", "", -1 } },
			{ "11Rnd_45ACP_Mag", "", 1, 1, { "", "", -1 } }
        };
        accs[] = {
			{ "optic_MRD", "", 1, 1, { "", "", -1} }
		};
    };

    //Constable
    class Constable_Weapon_Shop {
        name = "Constable Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "X26 Tazer", 1, -1, {"life_coplevel", "SCALAR", 2 } },
            { "arifle_MXC_Black_F", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
            { "arifle_SPAR_01_blk_F", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
			{ "HandGrenade_Stone", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
			{ "Binocular", "", 1, -1, { "", "", -1 } },
            { "ItemGPS", "", 1, 1, { "", "", -1 } },
            { "ItemCompass", "", 1, 1, { "", "", -1 } },
            { "FirstAidKit", "", 1, 1, { "", "", -1 } },
            { "NVGoggles", "", 1, 1, { "", "", -1 } }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 1, 1, {"life_coplevel", "SCALAR", 2 } },
            { "30Rnd_556x45_Stanag", "", 1, 1, {"life_coplevel", "SCALAR", 2 } },
            { "30Rnd_9x21_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 2 } }
        };
        accs[] = {
            { "optic_MRCO", "", 1, 1, {"life_coplevel", "SCALAR", 2 } },
            { "optic_Holosight", "", 1, 1, {"life_coplevel", "SCALAR", 2 } },
			{ "acc_flashlight", "", 1, 1, {"life_coplevel", "SCALAR", 2 } }
        };
    };

    //Corporal
    class cop_Corporal_Weapon_Shop {
        name = "Corporal Armory";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "X26 Tazer", 1, -1, {"life_coplevel", "SCALAR", 3 } },
            { "arifle_MXM_Black_F", "", 1, -1, {"life_coplevel", "SCALAR", 3 } },
			{ "SMG_05_F", "", 1, -1, {"life_coplevel", "SCALAR", 3 } },
            { "arifle_SPAR_01_blk_F", "", 1, -1, {"life_coplevel", "SCALAR", 3 } },
			{ "SMG_01_Holo_pointer_snds_F", "Vector", 1, -1, {"life_coplevel", "SCALAR", 3 } },
            { "HandGrenade_Stone", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
			{ "Binocular", "", 1, -1, { "", "", -1 } },
            { "ItemGPS", "", 1, 1, { "", "", -1 } },
            { "ItemCompass", "", 1, 1, { "", "", -1 } },
            { "FirstAidKit", "", 1, 1, { "", "", -1 } },
            { "NVGoggles", "", 1, 1, { "", "", -1 } }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
            { "30Rnd_556x45_Stanag", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
            { "30Rnd_9x21_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
			{ "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 1, 1, {"life_coplevel", "SCALAR", 3 } }
        };
        accs[] = {
            { "optic_MRCO", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
            { "acc_pointer_IR", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
			{ "optic_DMS", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
			{ "optic_Holosight", "", 1, 1, {"life_coplevel", "SCALAR", 3 } },
			{ "acc_flashlight", "", 1, 1, {"life_coplevel", "SCALAR", 3 } }
        };
    };

     //Cop Shops
    class cop_Sergeant_Weapon_Shop {
        name = "Sergeant Armory";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "X26 Tazer", 1, -1, {"life_coplevel", "SCALAR", 4 } },
			{ "SMG_01_Holo_pointer_snds_F", "", 1, -1, {"life_coplevel", "SCALAR", 4 } },
            { "srifle_EBR_DMS_pointer_snds_F", "", 1, -1, {"life_coplevel", "SCALAR", 4 } },
            { "arifle_SPAR_03_blk_F", "", 1, -1, {"life_coplevel", "SCALAR", 4 } },
			{ "HandGrenade_Stone", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
			{ "Binocular", "", 1, -1, { "", "", -1 } },
            { "ItemGPS", "", 1, 1, { "", "", -1 } },
            { "ItemCompass", "", 1, 1, { "", "", -1 } },
            { "FirstAidKit", "", 1, 1, { "", "", -1 } },
            { "NVGoggles", "", 1, 1, { "", "", -1 } }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 4 } },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 1, 1, {"life_coplevel", "SCALAR", 4 } },
            { "30Rnd_9x21_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 4 } }
        };
        accs[] = {
            { "optic_MRCO", "", 1, 1, {"life_coplevel", "SCALAR", 4 } },
            { "acc_pointer_IR", "", 1, 1, {"life_coplevel", "SCALAR", 4 } },
			{ "optic_DMS", "", 1, 1, {"life_coplevel", "SCALAR", 4 } },
			{ "optic_Holosight", "", 1, 1, {"life_coplevel", "SCALAR", 4 } },
			{ "muzzle_snds_B", "", 1, 1, {"life_coplevel", "SCALAR", 4 } },
			{ "acc_flashlight", "", 1, 1, {"life_coplevel", "SCALAR", 4 } }
        };
    };

    //SWAT Autorifleman
    class cop_Lieutenant_Weapon_Shop {
        name = "Lieutenant Weapon shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "X26 Tazer", 1, -1, {"life_coplevel", "SCALAR", 5 } },
            { "srifle_EBR_DMS_pointer_snds_F", "Gift From Capone", 1, -1, {"life_coplevel", "SCALAR", 5 } },
            { "arifle_SPAR_03_blk_F", "", 1, -1, {"life_coplevel", "SCALAR", 5 } },
			{ "srifle_DMR_02_DMS_F", "", 1, -1, {"life_coplevel", "SCALAR", 5 } },	
			{ "launch_O_Titan_short_F", "", 1, -1, {"life_coplevel", "SCALAR", 5 } },
			{ "HandGrenade_Stone", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
			{ "Binocular", "", 1, -1, { "", "", -1 } },
            { "ItemGPS", "", 1, 1, { "", "", -1 } },
            { "ItemCompass", "", 1, 1, { "", "", -1 } },
            { "FirstAidKit", "", 1, 1, { "", "", -1 } },
            { "NVGoggles", "", 1, 1, { "", "", -1 } }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "10Rnd_338_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "Titan_AT", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "Titan_AP", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
            { "30Rnd_9x21_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 5 } }
        };
        accs[] = {
            { "optic_MRCO", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
            { "acc_pointer_IR", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "bipod_02_F_blk", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "optic_DMS", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "optic_Holosight", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "muzzle_snds_B", "", 1, 1, {"life_coplevel", "SCALAR", 5 } },
			{ "acc_flashlight", "", 1, 1, {"life_coplevel", "SCALAR", 5 } }
        };
    };

    //SWAT Autorifleman
    class cop_Captain_Weapon_Shop {
        name = "Captain Weapon Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "X26 Tazer", 1, -1, {"life_coplevel", "SCALAR", 6 } },
            { "srifle_EBR_DMS_pointer_snds_F", "Gift From Capone", 1, -1, {"life_coplevel", "SCALAR", 6 } },
            { "arifle_SPAR_03_blk_F", "", 1, -1, {"life_coplevel", "SCALAR", 6 } },
			{ "launch_O_Titan_short_F", "", 1, -1, {"life_coplevel", "SCALAR", 6 } },
			{ "srifle_DMR_02_DMS_F", "", 1, -1, {"life_coplevel", "SCALAR", 6 } },
			{ "srifle_GM6_F", "", 1, -1, {"life_coplevel", "SCALAR", 6 } },
			{ "HandGrenade_Stone", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
			{ "Binocular", "", 1, -1, { "", "", -1 } },
            { "ItemGPS", "", 1, 1, { "", "", -1 } },
            { "ItemCompass", "", 1, 1, { "", "", -1 } },
            { "FirstAidKit", "", 1, 1, { "", "", -1 } },
            { "NVGoggles", "", 1, 1, { "", "", -1 } }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "10Rnd_338_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "Titan_AT", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "Titan_AP", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "5Rnd_127x108_APDS_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
            { "30Rnd_9x21_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 6 } }
        };
        accs[] = {
            { "optic_MRCO", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
            { "acc_pointer_IR", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "bipod_02_F_blk", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "optic_DMS", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "optic_Nightstalker", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "optic_Holosight", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "muzzle_snds_B", "", 1, 1, {"life_coplevel", "SCALAR", 6 } },
			{ "acc_flashlight", "", 1, 1, {"life_coplevel", "SCALAR", 6 } }
        };
    };

    //SWAT Autorifleman
    class cop_High_Command_Shop {
        name = "High Command Armory";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "X26 Tazer", 1, -1, {"life_coplevel", "SCALAR", 7 } },
            { "srifle_EBR_DMS_pointer_snds_F", "", 1, -1, {"life_coplevel", "SCALAR", 7 } },
            { "arifle_SPAR_03_blk_F", "", 1, -1, {"life_coplevel", "SCALAR", 7 } },
			{ "srifle_DMR_02_DMS_F", "", 1, -1, {"life_coplevel", "SCALAR", 7 } },
			{ "launch_O_Titan_short_F", "", 1, -1, {"life_coplevel", "SCALAR", 7 } },
			{ "srifle_GM6_F", "", 1, -1, {"life_coplevel", "SCALAR", 7 } },
			{ "HandGrenade_Stone", "", 1, -1, {"life_coplevel", "SCALAR", 2 } },
			{ "Binocular", "", 1, -1, { "", "", -1 } },
            { "ItemGPS", "", 1, 1, { "", "", -1 } },
            { "ItemCompass", "", 1, 1, { "", "", -1 } },
            { "FirstAidKit", "", 1, 1, { "", "", -1 } },
            { "NVGoggles", "", 1, 1, { "", "", -1 } }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "10Rnd_338_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "Titan_AT", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "Titan_AP", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "5Rnd_127x108_APDS_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
            { "30Rnd_9x21_Mag", "", 1, 1, {"life_coplevel", "SCALAR", 7 } }
        };
        accs[] = {
            { "optic_MRCO", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
            { "acc_pointer_IR", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "bipod_02_F_blk", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "optic_DMS", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "optic_Nightstalker", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "optic_Holosight", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "muzzle_snds_B", "", 1, 1, {"life_coplevel", "SCALAR", 7 } },
			{ "acc_flashlight", "", 1, 1, {"life_coplevel", "SCALAR", 7 } }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 1, 45, { "", "", -1 } },
            { "Binocular", "", 1, -1, { "", "", -1 } },
            { "Medikit", "", 1, 65, { "", "", -1 } },
			{ "NVGoggles", "", 1, 980, { "", "", -1 } }
        };
        mags[] = {
		    { "11Rnd_45ACP_Mag", "", 1, 980, { "", "", -1 } }
	    };
        accs[] = {};
    };
};
