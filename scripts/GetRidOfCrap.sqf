/*
 File: fn_disableSnakes.sqf
 Author: ColinM
 Description: Remove ambient snakes.
 Credits: Lala14
*/

[] spawn {
	while {true} do {
	{
		if ((agent _x isKindOf "Snake_random_F" || agent _x isKindOf "Bird" || agent _x isKindOf "SeaGull" || agent _x isKindOf "CatShark_F" || agent _x isKindOf "Turtle_F" || agent _x isKindOf "Tuna_F")) then { deleteVehicle agent _x; };
		}forEach agents;
		sleep 3;
	};
};