/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
            { "U_C_man_sport_1_F", "", 5000, { "", "", -1 } },
            { "U_C_man_sport_2_F", "", 5000, { "", "", -1 } },
            { "U_C_man_sport_3_F", "", 5000, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } },
            { "U_C_Man_casual_1_F", "", 4000, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "", 4000, { "", "", -1 } },
            { "U_C_Man_casual_3_F", "", 4000, { "", "", -1 } },
            { "U_C_Man_casual_4_F", "", 5000, { "", "", -1 } },
            { "U_C_Man_casual_5_F", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Helmet_Skate", "Camo Bandanna", 10000, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_RacingHelmet_1_orange_F", "", 120, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 130, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 165, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 135, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 120, { "", "", -1 } },
            { "H_Cap_press", "", 10000, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 130, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 165, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 135, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 20000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 3000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 4000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 6000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 7500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 8000, { "", "", -1 } },
            { "B_Carryall_oli", "", 25000, { "", "", -1 } },
            { "B_Carryall_khk", "", 25000, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 1, { "", "", -1 } },
            { "U_B_Wetsuit", "Wetsuit", 1, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 50, { "", "", -1 } },
            { "H_Watchcap_blk", "", 50, { "", "", -1 } },
            { "H_Booniehat_khk", "", 500, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_mcamo", "", 500, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_tan", "", 500, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_dirty", "", 500, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_khk_hs", "", 500, { "life_coplevel", "SCALAR", 2 } },
            { "H_MilCap_gry", "", 500, { "life_coplevel", "SCALAR", 3 } },
            { "H_MilCap_oucamo", "", 500, { "life_coplevel", "SCALAR", 3 } },
            { "H_MilCap_blue", "", 500, { "life_coplevel", "SCALAR", 3 } },
            { "H_HelmetB_black", "", 500, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_plain_blk", "", 500, { "life_coplevel", "SCALAR", 2 } },
            { "H_PilotHelmetHeli_B", "", 10000, { "life_coplevel", "SCALAR", 3 } },
            { "H_CrewHelmetHeli_B", "", 15000, { "life_coplevel", "SCALAR", 4 } },
            { "H_HelmetSpecB_blk", "", 1000, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_grn", "", 50, { "life_coplevel", "SCALAR", 2 } },
            { "H_Beret_blk_POLICE", "", 50, { "life_coplevel", "SCALAR", 5 } },
            { "H_Booniehat_mcamo", "", 50, { "life_coplevel", "SCALAR", 5 } },
            { "H_Beret_Colonel", "", 50, { "life_coplevel", "SCALAR", 6 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 1, { "", "", -1 } },
            { "G_Squares", "", 1, { "", "", -1 } },
            { "G_Shades_Blue", "", 1, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_B_Diving", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 1, { "life_coplevel", "SCALAR", 2 } },
            { "V_PlateCarrier2_blk", "", 1, { "life_coplevel", "SCALAR", 2 } },
            { "V_TacVest_blk_POLICE", "", 1, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "", 1, { "life_coplevel", "SCALAR", 2 } },
            { "V_RebreatherB", "", 1, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Bergen_dgtl_F", "", 1, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 1, { "", "", -1 } },
            { "B_UAV_01_backpack_F", "", 25000, { "life_coplevel", "SCALAR", 5 } },
            { "B_Carryall_ocamo", "", 1, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 1, { "", "", -1 } }
        };
    };

    class cop_swat {
        title = "STR_Shops_C_PoliceSwat";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "DG Swat Uniform", 500, { "life_coplevel", "SCALAR", 3 } },
            { "U_B_CTRG_Soldier_F", "SWAT Standard", 350, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_CTRG_Soldier_2_F", "SWAT Standard Tee", 550, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_CTRG_Soldier_3_F", "SWAT Standard Roll-up", 1250, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_CTRG_Soldier_urb_1_F", "Urban Standard", 1250, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_CTRG_Soldier_urb_3_F", "Urban Roll-up", 1250, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_HeliPilotCoveralls", "Air Crew Uniform", 1250, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_GhillieSuit", "Standard Snipper Ghillie", 1250, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_FullGhillie_sard", "", 1250, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_FullGhillie_ard", "", 1250, { "life_coplevel", "SCALAR", 4 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Beret_blk", "", 25, { "life_coplevel", "SCALAR", 3 } },
            { "H_HelmetB_TI_tna_F", "", 25, { "life_coplevel", "SCALAR", 3 } },
            { "H_PilotHelmetHeli_B", "", 25, { "life_coplevel", "SCALAR", 3 } },
            { "H_CrewHelmetHeli_B", "", 25, { "life_coplevel", "SCALAR", 3 } },
            { "H_HelmetSpecO_blk", "Spec-OPs Helmet", 75, { "life_coplevel", "SCALAR", 3 } }
        };
        goggles[] = {
            { "G_Balaclava_TI_blk_F", "", 50, { "life_coplevel", "SCALAR", 4 } },
            { "G_Balaclava_TI_tna_F", "", 50, { "life_coplevel", "SCALAR", 4 } },
            { "G_Balaclava_TI_G_blk_F", "", 50, { "life_coplevel", "SCALAR", 4 } },
            { "G_Balaclava_TI_G_tna_F", "", 50, { "life_coplevel", "SCALAR", 4 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVestIR_blk", "Air Vest", 3000, { "life_coplevel", "SCALAR", 3 } },
            { "V_PlateCarrierSpec_rgr", "Standard Vest Green", 15000, { "life_coplevel", "SCALAR", 3 } },
            { "V_PlateCarrierSpec_blk", "Standard Vest Black", 20000, { "life_coplevel", "SCALAR", 3 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_UAV_01_backpack_F", "UAV Snipper Drone", 200000, { "life_coplevel", "SCALAR", 6 } },
            { "B_Bergen_dgtl_F", "Grenadier/Support MTP", 200000, { "life_coplevel", "SCALAR", 7 } },
            { "B_Bergen_tna_F", "Grenadier/Support MTP", 200000, { "life_coplevel", "SCALAR", 7 } },
            { "B_ViperHarness_blk_F", "", 3500, { "life_coplevel", "SCALAR", 4 } },
            { "B_ViperLightHarness_blk_F", "Air Viper Pack", 3500, { "life_coplevel", "SCALAR", 4 } },
            { "B_Carryall_oli", "Standard Bag", 200000, { "life_coplevel", "SCALAR", 4 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_Wetsuit", "", 10000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 10000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 25000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 35000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class class3clothing {
        title = "STR_Shops_class3clothing";
        license = "class3firearms";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 10000, {"", "", -1} },
            { "U_O_SpecopsUniform_ocamo", "", 75000, { "", "", -1 } },
            { "U_I_Wetsuit", "", 80000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 80000, { "", "", -1 } },
            { "U_B_T_Soldier_F", "", 50000, {"", "", -1} },
            { "U_B_T_Soldier_AR_F", "", 50000, {"", "", -1} },
            { "U_B_T_Soldier_SL_F", "", 50000, {"", "", -1} },
            { "U_O_V_Soldier_Viper_F", "", 50000, {"", "", -1} },
            { "U_I_C_Soldier_Camo_F", "", 75000, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 500, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 375, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1000, { "", "", -1 } },
            { "H_Watchcap_blk", "", 50, { "", "", -1 } },
            { "H_Booniehat_dirty", "", 200, { "", "", -1 } },
            { "H_Helmet_Skate", "", 800, { "", "", -1 } },
            { "H_HelmetB_TI_tna_F", "", 800, { "", "", -1 } },
            { "H_HelmetB_tna_F", "", 800, { "", "", -1 } },
            { "H_HelmetB_Enh_tna_F", "", 800, { "", "", -1 } },
            { "H_HelmetB_Light_tna_F", "", 800, { "", "", -1 } },
            { "H_HelmetSpecO_ghex_F", "", 800, { "", "", -1 } },
            { "H_HelmetLeaderO_ghex_F", "", 800, { "", "", -1 } },
            { "H_HelmetO_ghex_F", "", 800, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 800, { "", "", -1 } },
            { "H_Beret_gen_F", "", 800, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 15, { "", "", -1 } },
            { "G_Sport_Checkered", "", 15, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 15, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 15, { "", "", -1 } },
            { "G_Lowprofile", "", 20, { "", "", -1 } },
            { "G_Squares", "", 25, { "", "", -1 } },
            { "G_Combat", "", 75, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 7500, { "", "", -1 } },
            { "G_Bandanna_beast", "", 7500, { "", "", -1 } },
            { "G_Bandanna_blk", "", 7500, { "", "", -1 } },
            { "G_Bandanna_khk", "", 7500, { "", "", -1 } },
            { "G_Bandanna_oli", "", 7500, { "", "", -1 } },
            { "G_Bandanna_shades", "", 7500, { "", "", -1 } },
            { "G_Bandanna_sport", "", 7500, { "", "", -1 } },
            { "G_Bandanna_tan", "", 7500, { "", "", -1 } },
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 25000, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 3000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            { "V_TacVest_khk", "", 25000, { "", "", -1 } },
            { "V_HarnessO_ghex_F", "", 25000, { "", "", -1 } },
            { "V_HarnessOGL_ghex_F", "", 25000, { "", "", -1 } },
            { "V_TacVest_gen_F", "", 50000, { "", "", -1 } },
            { "V_TacVestIR_blk", "", 50000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 20000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 35000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 25000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 25000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 35000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 35000, { "", "", -1 } },
            { "B_Carryall_oli", "", 75000, { "", "", -1 } },
            { "B_Carryall_khk", "", 75000, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 20000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "", 250000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 1, { "", "", -1 } },
            { "U_B_Wetsuit", "Wetsuit", 1, { "life_mediclevel", "SCALAR", 2 } },
            { "U_C_WorkerCoveralls", "Medic Uniform", 1, { "life_mediclevel", "SCALAR", 2 } },
            { "U_C_Scientist", "Medic Uniform", 1, { "life_mediclevel", "SCALAR", 3 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 10, { "", "", -1 } },
            { "H_Cap_red", "", 10, { "", "", -1 } },
            { "H_Cap_blk", "", 10, { "", "", -1 } },
            { "H_Cap_marshal", "Marshall Hat", 1, { "life_mediclevel", "SCALAR", 2 } },
            { "H_Beret_Colonel", "Command Beret", 1, { "life_mediclevel", "SCALAR", 3 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_B_Diving", "", 100, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_blk", "", 500, { "", "", -1 } },
            { "V_PlateCarrier2_blk", "", 1, { "life_mediclevel", "SCALAR", 3 } },
            { "V_RebreatherB", "Rebreather", 500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 1, { "", "", -1 } },
            { "B_Kitbag_cbr", "Medic Backpack", 1, { "", "", -1 } },
            { "B_Carryall_mcamo", "Medic Backpack", 1, { "life_mediclevel", "SCALAR", 3 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 10000, {"", "", -1} },
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, {"", "", -1} },
            { "U_I_C_Soldier_Para_1_F", "", 10000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 10000, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 10000, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 10000, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 100000, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 100000, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 100000, { "", "", -1 } },
            { "U_B_FullGhillie_ard", "", 100000, { "", "", -1 } },
            { "U_B_FullGhillie_sard", "", 100000, { "", "", -1 } },
            { "U_I_FullGhillie_lsh", "", 100000, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_vest", "", 75000, { "", "", -1 } },
            { "U_I_CombatUniform", "", 75000, { "", "", -1 } },
            { "U_I_Wetsuit", "", 120000, { "", "", -1 } },
            { "U_O_Wetsuit", "", 120000, { "", "", -1 } },
			{ "U_B_T_Soldier_F", "", 75000, {"", "", -1} },
			{ "U_B_T_Soldier_AR_F", "", 75000, {"", "", -1} },
			{ "U_B_T_Soldier_SL_F", "", 75000, {"", "", -1} },
			{ "U_B_T_Sniper_F", "", 100000, {"", "", -1} },
			{ "U_B_T_FullGhillie_tna_F", "", 100000, {"", "", -1} },
			{ "U_B_CTRG_Soldier_F", "", 75000, {"", "", -1} },
			{ "U_O_T_Sniper_F", "", 100000, {"", "", -1} },
			{ "U_O_T_FullGhillie_tna_F", "", 100000, {"", "", -1} },
			{ "U_O_V_Soldier_Viper_F", "", 75000, {"", "", -1} },
			{ "U_I_C_Soldier_Camo_F", "", 100000, {"", "", -1} },
			{ "U_C_man_sport_1_F", "", 25000, {"", "", -1} },
			{ "U_C_Man_casual_1_F", "", 25000, {"", "", -1} },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 100000, {"", "", -1} },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 25000, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 25000, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 500, { "", "", -1 } },
            { "H_Shemag_olive", "", 25000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Watchcap_blk", "", 100, { "", "", -1 } },
            { "H_Booniehat_dirty", "", 400, { "", "", -1 } },
			{ "H_Helmet_Skate", "", 1200, { "", "", -1 } },
			{ "H_HelmetB_TI_tna_F", "", 1200, { "", "", -1 } },
			{ "H_HelmetB_tna_F", "", 1200, { "", "", -1 } },
			{ "H_HelmetB_Enh_tna_F", "", 1200, { "", "", -1 } },
			{ "H_HelmetB_Light_tna_F", "", 1200, { "", "", -1 } },
			{ "H_HelmetSpecO_ghex_F", "", 1200, { "", "", -1 } },
			{ "H_HelmetLeaderO_ghex_F", "", 1200, { "", "", -1 } },
			{ "H_HelmetO_ghex_F", "", 1200, { "", "", -1 } },
			{ "H_HelmetCrew_O_ghex_F", "", 1200, { "", "", -1 } },
			{ "H_MilCap_tna_F", "", 1200, { "", "", -1 } },
			{ "H_MilCap_ghex_F", "", 1200, { "", "", -1 } },
			{ "H_Booniehat_tna_F", "", 1200, { "", "", -1 } },
			{ "H_Beret_gen_F", "", 1200, { "", "", -1 } },
			{ "H_MilCap_gen_F", "", 1200, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 10000, { "", "", -1 } },
            { "G_Bandanna_beast", "", 10000, { "", "", -1 } },
            { "G_Bandanna_blk", "", 10000, { "", "", -1 } },
            { "G_Bandanna_khk", "", 10000, { "", "", -1 } },
            { "G_Bandanna_oli", "", 10000, { "", "", -1 } },
            { "G_Bandanna_shades", "", 10000, { "", "", -1 } },
            { "G_Bandanna_sport", "", 10000, { "", "", -1 } },
            { "G_Bandanna_tan", "", 10000, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 6000, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 10000, { "", "", -1 } },
            { "V_TacVest_khk", "", 40000, { "", "", -1 } },
			{ "V_PlateCarrier1_tna_F", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrier2_tna_F", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_tna_F", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrierGL_tna_F", "", 80000, { "", "", -1 } },
			{ "V_HarnessO_ghex_F", "", 40000, { "", "", -1 } },
			{ "V_HarnessOGL_ghex_F", "", 40000, { "", "", -1 } },
			{ "V_BandollierB_ghex_F", "", 40000, { "", "", -1 } },
			{ "V_TacVest_gen_F", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 80000, { "", "", -1 } },		
			{ "V_PlateCarrierIA1_dgtl", "", 6000, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrierL_CTRG", "", 80000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 80000, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 80000, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 80000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 25000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 45000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 35000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 30000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 45000, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 45000, { "", "", -1 } },
            { "B_Carryall_oli", "", 100000, { "", "", -1 } },
            { "B_Carryall_khk", "", 100000, { "", "", -1 } },
			{ "B_ViperLightHarness_khk_F", "", 100000, { "", "", -1 } },
			{ "B_ViperLightHarness_blk_F", "", 100000, { "", "", -1 } },
			{ "B_ViperLightHarness_hex_F", "", 100000, { "", "", -1 } },
			{ "B_ViperLightHarness_oli_F", "", 100000, { "", "", -1 } },
			{ "B_ViperLightHarness_ghex_F", "", 100000, { "", "", -1 } },
			{ "B_ViperHarness_oli_F", "", 100000, { "", "", -1 } },
			{ "B_ViperHarness_khk_F", "", 100000, { "", "", -1 } },
			{ "B_ViperHarness_ghex_F", "", 100000, { "", "", -1 } },
			{ "B_ViperHarness_blk_F", "", 100000, { "", "", -1 } },
			{ "B_FieldPack_ghex_F", "", 100000, { "", "", -1 } },
			{ "B_AssaultPack_tna_F", "", 100000, { "", "", -1 } },
			{ "B_Carryall_ghex_F", "", 100000, { "", "", -1 } },
			{ "B_Bergen_tna_F", "", 100000, { "", "", -1 } },
			{ "B_Bergen_hex_F", "", 100000, { "", "", -1 } },
			{ "B_Parachute", "", 1000, { "", "", -1 } },
			{ "B_Bergen_dgtl_F", "", 100000, { "", "", -1 } },
			{ "B_Bergen_mcamo_F", "", 100000, { "", "", -1 } },
			{ "B_ViperHarness_hex_F", "", 100000, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
