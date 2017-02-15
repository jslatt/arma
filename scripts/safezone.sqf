/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)

    DESCRIPTION:
    Stops players from throwing grenades in safety zones.

    CONFIGURATION:
    Edit the #defines below.
*/

#define SAFETY_ZONES    [["safe_athria", 100],["safe_pyrg", 45],["safezone_reb3", 80],["safezone_salt", 50],["safezone_reb1", 75],["safe_don", 300],["safezone_gunstore", 25],["safezone_gunstore2", 25],["safezone_gunstore3", 25],["safezone_gunstore4", 25],["safezone_class3firearms", 25],["marker_222", 50],["marker_223", 25],["marker_224", 25],["safezone_class3firearms_1", 25]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
#define MESSAGE "THIS IS A SAFE ZONE, DO NOT KILL PLAYERS HERE"

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

switch (playerSide) do
{
	case west:
	{};

	case civilian:
	{


     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
             titleText [MESSAGE, "PLAIN", 3];
             };
        }];
	};
};