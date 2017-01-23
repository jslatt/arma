class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "B_G_Van_01_fuel_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "B_Truck_01_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "B_MRAP_01_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Transport_04_F", { "", "", -1 } }
			{ "B_Heli_Transport_03_unarmed_green_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "I_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "C_Scooter_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_rescue_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
			{ "O_MRAP_02_F", { "", "", -1 } },
            { "O_T_LSV_02_unarmed_arid_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "I_MRAP_03_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } },
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
			{ "C_SUV_01_F", { "life_mediclevel", "SCALAR", 2 } },
            { "B_MRAP_01_F", { "life_mediclevel", "SCALAR", 3 } },
            { "I_MRAP_03_F", { "life_mediclevel", "SCALAR", 5 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {	
            { "B_Heli_Light_01_F", { "life_mediclevel", "SCALAR", 3 } },
            { "O_Heli_Light_02_unarmed_F", { "life_mediclevel", "SCALAR", 3 } }
			{ "I_Heli_light_03_unarmed_F", { "life_mediclevel", "SCALAR", 4 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 3 } },
            { "C_Offroad_02_unarmed_blue_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_LSV_01_unarmed_black_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_G_Offroad_01_armed_F", { "life_coplevel", "SCALAR", 5 } },
            { "B_Quadbike_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_hmg_F", { "life_coplevel", "SCALAR", 5 } },
            { "I_MRAP_03_F", { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class swat_land {
        side = "cop";
        vehicles[] = {
            { "B_LSV_01_unarmed_black_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_LSV_01_armed_black_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_MRAP_01_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_MRAP_01_hmg_F", { "life_donorlevel", "SCALAR", 69 } },
            { "I_MRAP_03_F", { "life_donorlevel", "SCALAR", 69 } },
            { "I_MRAP_03_hmg_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_APC_Tracked_01_CRV_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_APC_Tracked_01_rcws_F", { "life_donorlevel", "SCALAR", 69 } },
            { "C_SUV_01_F", { "life_donorlevel", "SCALAR", 69 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", 3 } },
            { "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_Heli_Transport_03_unarmed_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_T_VTOL_01_vehicle_blue_F", { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class swat_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Transport_03_black_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_Heli_Transport_01_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_CTRG_Heli_Transport_01_tropic_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_CTRG_Heli_Transport_01_sand_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_Heli_Attack_01_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_T_VTOL_01_infantry_blue_F", { "life_donorlevel", "SCALAR", 69 } },
            { "B_T_VTOL_01_vehicle_blue_F", { "life_donorlevel", "SCALAR", 69 } },
            { "O_T_VTOL_02_infantry_F", { "life_donorlevel", "SCALAR", 69 } },
            { "O_T_VTOL_02_vehicle_F", { "life_donorlevel", "SCALAR", 69 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "C_Scooter_Transport_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_Boat_Transport_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Boat_Civil_01_police_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Boat_Transport_02_F", { "life_coplevel", "SCALAR", 1 } },
            { "B_SDV_01_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 5 } }
        };
   };

        class don1_car {
        side = "civ";
        vehicles[] = {
            { "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 1 } },
            { "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 1 } },
            { "C_SUV_01_F", { "life_donorlevel", "SCALAR", 1 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 1 } },
            { "I_MRAP_03_F", { "life_donorlevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", { "life_donorlevel", "SCALAR", 1 } }
        };
   };

        class don2_car {
        side = "civ";
        vehicles[] = {
            { "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 2 } },
            { "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 2 } },
            { "C_SUV_01_F", { "life_donorlevel", "SCALAR", 2 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 2 } },
            { "B_MRAP_01_F", { "life_donorlevel", "SCALAR", 2 } }
        };
   };

        class don3_car {
        side = "civ";
        vehicles[] = {
            { "C_Offroad_01_F", { "life_donorlevel", "SCALAR", 3 } },
            { "C_Hatchback_01_sport_F", { "life_donorlevel", "SCALAR", 3 } },
            { "C_SUV_01_F", { "life_donorlevel", "SCALAR", 3 } },
            { "B_Heli_Light_01_F", { "life_donorlevel", "SCALAR", 3 } },
            { "B_MRAP_01_F", { "life_donorlevel", "SCALAR", 3 } },
            { "I_Heli_light_03_unarmed_F", { "life_donorlevel", "SCALAR", 3 } }
        };
   };

        class civ_plane {
        side = "civ";
        vehicles[] = {
            { "C_Plane_Civil_01_F", { "", "", -1 } },
            { "C_Plane_Civil_01_racing_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class C_Plane_Civil_01_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 300000;
        textures[] = {
            { "Police/Black", "cop", {
                "textures\TRG_ghosthawk_police_1.jpg",
                "textures\TRG_ghosthawk_police_0.jpg"
            } },
            { "SWAT", "cop", {
                "Textures\swat1.jpg",
                "Textures\swat2.jpg"
            } }
        };
    };

    class B_CTRG_Heli_Transport_01_tropic_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };

    class B_CTRG_Heli_Transport_01_sand_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };

    class C_Offroad_01_red_F {
        vItemSpace = 60;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "Bronze", "don1", {
                "textures\BronzeOffroad.jpg",
                "textures\BronzeOffroad.jpg"
            } },
            { "Black / Red", "don1", {
                "textures\BronzeOffroad.jpg",
                "textures\BronzeOffroad.jpg"
            } }
        };
    };

    class C_Hatchback_01_sport_red_F {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {
            { "Dragon", "don1", {
                "textures\dragon_hatchback_sport.jpg",
                "textures\dragon_hatchback_sport.jpg"
            } }
        };
    };

    class SUV_01_base_red_F {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Irish", "don1", {
                "textures\LamboSUVFinal.jpg",
                "textures\LamboSUVFinal.jpg"
            } },
            { "Blueflame", "don1", {
                "textures\blueflame_suv.jpg",
                "textures\blueflame_suv.jpg"
            } }
        };
    };

    class C_Heli_light_01_red_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {
            { "Black Swirl", "don1", {
                "textures\blackSwirlM900.jpg",
                "textures\blackSwirlM900.jpg"
            } }
        };
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {
            { "SWAT", "cop", {
                "textures\swat_hunter_1.jpg",
                "textures\swat_hunter_2.jpg",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_LSV_01_unarmed_black_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

    class B_LSV_01_armed_black_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 455;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 3500000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };

    class O_Heli_Transport_04_F {
        vItemSpace = 30;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = { };
    };
	class B_Heli_Transport_03_unarmed_green_F {
        vItemSpace = 1000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = { };
    };

    class B_Heli_Transport_03_black_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };

    class B_T_VTOL_01_vehicle_blue_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_Heli_Attack_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_T_VTOL_01_infantry_blue_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = { };
    };

    class B_Heli_Light_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 51000000;
        textures[] = { };
    };

    class O_MRAP_02_hmg_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 25000000;
        textures[] = { };
    };

    class O_T_LSV_02_unarmed_arid_F {
        vItemSpace = 75;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 95;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Transport_02_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class I_Boat_Transport_01_F {
        vItemSpace = 30;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 95;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Scooter_Transport_01_F {
        vItemSpace = 0;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 1000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2600000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 400;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = { };
    };

    class B_G_Van_01_fuel_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Medical Offroad", "med", {
                "textures\offroad_med.paa",
                "textures\offroad_med.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Bronze Offroad", "don1", {
                "textures\BronzeOffroad.jpg",
                "textures\BronzeOffroad.jpg"
            } },
            { "Black And Red Offroad", "don1", {
                "textures\amc_offroad.jpg",
                "textures\amc_offroad.jpg"
            } },
            { "Silver Offroad", "don2", {
                "textures\SilverOffroad.jpg",
                "textures\SilverOffroad.jpg"
            } },
            { "Rooster Offroad", "don2", {
                "textures\rooster_squad.paa",
                "textures\rooster_squad.paa"
            } },
            { "Banhammer Offroad", "don3", {
                "textures\banhammer_offroad.jpg",
                "textures\banhammer_offroad.jpg"
            } },
            { "Gold Offroad", "don3", {
                "textures\GoldOffroadFinale.jpg",
                "textures\GoldOffroadFinale.jpg"
            } },
            { "Police Offroad", "cop", {
                "textures\police_offroadbackwhite.jpg",
                "textures\police_offroadbackwhite.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 0;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 35;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Dragon Sport", "don1", {
                "textures\dragon_hatchback_sport.jpg"
            } },
            { "Speed Racer", "don2", {
                "textures\SpeedRacerHatchback.jpg"
            } },
            { "RedGULL", "don2", {
                "textures\TRG_sporthatch_REDGULL_0.jpg"
            } },
            { "Monster", "don3", {
                "textures\TRG_sporthatch_KBLOCK_0.jpg"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 15;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "rebel", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "cop", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_MRAP_03_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 20000000;
        textures[] = {
            { "White", "don1", {
                "textures\rebelstrider.jpg"
            } },
            { "Police", "cop", {
                "textures\policestrider.jpg"
            } },
            { "Medical Strider", "med", {
                "textures\medic_strider_jonas.paa"
            } },
            { "Black", "civ", {
                "textures\whitestrider.jpg"
            } }
        };
    };

    class I_MRAP_03_hmg_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000000;
        textures[] = {
            { "White", "don1", {
                "textures\rebelstrider.jpg"
            } },
            { "Police", "cop", {
                "textures\policestrider.jpg",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Medical Strider", "med", {
                "textures\medic_strider_jonas.paa"
            } },
            { "Black", "civ", {
                "textures\whitestrider.jpg"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {
            { "Police Hellcat", "cop", {
                "textures\police_hellcat.paa"
            } },
			{ "EMS Hellcat", "med", {
                "textures\emshell.jpg"
            } },
            { "Blackcats Hellcat", "don3", {
                "textures\blackcats.jpg"
            } },
            { "Camo Hellcat", "civ", {
                "textures\camo.jpg"
            } }
        };
    };

    class C_Offroad_02_unarmed_blue_F {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Patrol Jeep", "cop", {
                "textures\policejeep.paa",
                "textures\policejeep2.paa"
            } },
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class O_T_VTOL_02_infantry_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class O_T_VTOL_02_vehicle_F {
        vItemSpace = 300;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class B_APC_Tracked_01_CRV_F {
        vItemSpace = 69;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Le Riot Tank", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.20,0.45)",
                "#(argb,8,8,3)color(0.10,0.10,0.20,0.45)",
                "#(argb,8,8,3)color(0.10,0.10,0.20,0.45)",
                "#(argb,8,8,3)color(0.10,0.10,0.20,0.45)"
            } }
        };
    };

    class B_APC_Tracked_01_rcws_F {
        vItemSpace = 69;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Le Riot Tank", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.20,0.45)",
                "#(argb,8,8,3)color(0.10,0.10,0.20,0.45)",
                "#(argb,8,8,3)color(0.10,0.10,0.20,0.45)",
                "#(argb,8,8,3)color(0.10,0.10,0.20,0.45)"
            } }
        };
    };

    class B_Truck_01_covered_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = {};
    };

    class C_Offroad_02_unarmed_F {
        vItemSpace = 45;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 47500;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Blueflame", "civ", {
                "textures\blueflame_suv.jpg"
            } },
            { "Irish", "civ", {
                "textures\LamboSUVFinal.jpg"
            } },
            { "Fire", "civ", {
                "textures\fire_suv.paa"
            } },
			{ "Medic Suv", "med", {
            "textures\dg_medic_suv.paa"
            } },
            { "Ferrari", "civ", {
                "textures\TRG_suv_ferarri_0.jpg"
            } },
            { "Police", "cop", {
                "textures\police_suvblackwhite.jpg"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 130;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
            { "Ambulance", "med", {
                "textures\Ambulance0.jpg",
                "textures\Ambulance1.jpg"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Blue Hunter", "cop", {
                "textures\Hunter03.jpg",
                "textures\Hunter15.jpg"
            } },
            { "Security/Black", "cop", {
                "textures\hunter_security1.jpg",
                "textures\hunter_security2.jpg"
            } },
            { "Urban", "civ", {
                "textures\hunter_urban1.jpg",
                "textures\swat_hunter_2.jpg"
            } },
            { "Camo", "civ", {
                "textures\mrap_0.jpg",
                "textures\mrap_1.jpg"
            } },
            { "SWAT", "cop", {
                "textures\swat_hunter_1.jpg",
                "textures\swat_hunter_2.jpg"
            } },
            { "Black/White", "cop", {
                "textures\metro_hunter_1.jpg",
                "textures\metro_hunter_2.jpg"
            } },
            { "Paramedic", "med", {
                "textures\medichunter_f.paa",
                "textures\medichunter_b.jpg"
            } },
            { "Aquaflague Hunter", "civ", {
                "textures\AquaHunter0.jpg",
                "textures\AquaHunterCanvasJPG.jpg"
            } },
            { "Girly Hunter", "civ", {
                "textures\Hunter_pink_front.paa",
                "textures\Hunter_pink_back.paa"
            } },
            { "Jungle Hunter", "civ", {
                "textures\JungleHunter0.jpg",
                "textures\JungleHunterCanvas.jpg"
            } },
            { "Desert Hunter", "civ", {
                "textures\Hunter_desert_front_basic_skull.paa",
                "textures\Hunter_desert_back_basic.paa"
            } },
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 35;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 400000;
        textures[] = {
            { "Police", "cop", {
                "textures\police_heliblackwhite.jpg"
            } },
            { "Panel", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "textures\heli_medical.jpg"
            } },
            { "Black Swirl", "civ", {
                "textures\blackSwirlM900.jpg"
            } },
            { "Gingerbread", "civ", {
                "textures\orangeM900.jpg"
            } },
            { "Multicolor", "civ", {
                "textures\multicolor.jpg"
            } },
            { "Las Vegas", "civ", {
                "textures\LasVegasM900.jpg"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 50;
        price = 400000;
        textures[] = {
            { "Police", "cop", {
                "textures\police_heliblackwhite.jpg"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "textures\heli_medical.jpg"
            } },
            { "EMS", "med", {
                "textures\heli_medical.jpg"
            } },
            { "Black Swirl", "civ", {
                "textures\blackSwirlM900.jpg"
            } },
            { "Gingerbread", "civ", {
                "textures\orangeM900.jpg"
            } },
            { "Multicolor", "med", {
                "textures\multicolor.jpg"
            } },
            { "Las Vegas", "med", {
                "textures\LasVegasM900.jpg"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 100;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "textures\ems_orca.jpg"
            } },
            { "Police", "cop", {
                "textures\police.jpg"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
};
