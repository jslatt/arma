#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
if(playerSide == west) then {
    switch(true) do {
        case (uniform player == "U_Rangemaster") : {
            if( (call life_coplevel) == 1) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_1.paa"];
            };
            
            if( (call life_coplevel) == 2) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_2.paa"];
            };
            if( (call life_coplevel) == 3) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_3.paa"];
            };
            if( (call life_coplevel) == 4) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_4.paa"];
            };
            if( (call life_coplevel) == 5) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_5.paa"];
            };
            if( (call life_coplevel) == 6) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_6.paa"];
            };
            if( (call life_coplevel) == 7) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_7.paa"];
            };
            if( (call life_coplevel) == 8) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_8.paa"];
            };
            if( (call life_coplevel) == 9) then
            {
                player setObjectTextureGlobal [0,"textures\cop\cop_uniform_9.paa"];
            };
        };
        case (uniform player == "U_B_CombatUniform_mcam") : {
            player setObjectTextureGlobal [0,"textures\cop\swat.paa"];
        };  
    };
};

if(playerSide == independent) then {
    switch(true) do {
        case (uniform player == "U_Rangemaster") : {
            player setObjectTextureGlobal [0,"textures\medic_uniform_1.paa"];
        };  
        case (uniform player == "U_C_Scientist") : {
            player setObjectTextureGlobal [0,"textures\medic3_uniform.jpg"];
        };
        case (uniform player == "U_C_WorkerCoveralls") : {
            player setObjectTextureGlobal [0,"textures\medic2_uniform.jpg"];
        };  
    };
};

if(playerSide == civilian) then {
    switch(true) do {

        case (uniform player == "U_C_Poloshirt_stripped") : {
            player setObjectTextureGlobal  [0, "textures\dgtshirt.paa"];
        };
        
        case (uniform player == "U_C_WorkerCoveralls") : {
            player setObjectTextureGlobal  [0, "textures\jail.paa"]; 
        };
    };
};