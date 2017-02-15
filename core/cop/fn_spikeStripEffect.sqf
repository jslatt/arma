/*
	File: fn_spikeStripEffect.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Doesn't work without the server-side effect but shifted part of it clientside
	so code can easily be changed. Ultimately it just pops the tires.
*/
private["_vehicle"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {}; //Bad vehicle type

_wheels = count ( configFile >> "CfgVehicles" >> typeOf _vehicle >> "Wheels" );
for "_i" from 1 to _wheels do 
    {
        _wheelPop = format ["wheel_%1_%2_steering",floor(random[1,2,3]),ceil(random (_wheels / 2))];
        _vehicle setHit [_wheelPop,1];
    };

//[[53, player, format["Vehicle %1 hit spike strips", typeOf _vehicle]],"ASY_fnc_logIt",false,false] call life_fnc_MP;