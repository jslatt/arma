/*
	File: fn_speedCamera.sqf
	Author: Alan
	
	Description:
	Charges driver for speeding!
*/
_speed = [_this,0,0,[0]] call BIS_fnc_param;
_limit = [_this,1,0,[0]] call BIS_fnc_param;
_loc = _this select 2;

if (_speed < (_limit + 1)) exitWith {};
if (vehicle player == player) exitWith {};
if (driver (vehicle player) != player) exitWith {};
if (!((vehicle player) isKindOf "Car")) exitWith {};

_ticket = "";

[] spawn 
{
	"colorCorrections" ppEffectEnable true;   
	"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 1],[0.3, 0.3, 0.3, 0.05]];    
	"colorCorrections" ppEffectCommit 0;  
	sleep 0.01;   
	"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];    
	"colorCorrections" ppEffectCommit 0.05;   
	sleep 0.05;   
	"colorCorrections" ppEffectEnable false;
	sleep 0.1;
	"colorCorrections" ppEffectEnable true;   
	"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 1],[0.3, 0.3, 0.3, 0.05]];    
	"colorCorrections" ppEffectCommit 0;  
	sleep 0.01;   
	"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];    
	"colorCorrections" ppEffectCommit 0.05;   
	sleep 0.05;   
	"colorCorrections" ppEffectEnable false;
};
playSound "camera";

if (!license_civ_driver) then 
{
	serv_killed = [player,"dwl"];
	publicVariableServer "serv_killed";
	_ticket = format ["<t align='center'><t size='2'>Speeding Ticket<br/><br/><t size='1.5'>Current Speed: <br/>%1 km/h<br/>Speed Limit: <br/>%2 km/h<br/>Charge Added: Driving without a license<br/><br/><t size='1'>You have been photographed by a speed camera and are fined for speeding. You have received an additional fine for driving without a license.",round(_speed), _limit];
}
else
{
	_ticket = format ["<t align='center'><t size='2'>Speeding Ticket<br/><br/><t size='1.5'>Current Speed: <br/>%1 km/h<br/>Speed Limit: <br/>%2 km/h<br/>Charge Added: Speeding<br/><br/><t size='1'>You have been photographed by a speed camera and are fined for speeding.",round(_speed), _limit];
};

serv_killed = [player,"spd"];
publicVariableServer "serv_killed";

hint parseText _ticket;

_dir = switch (true) do{
	case (getDir player >= 338):{"travelling North"};
	case (getDir player <= 23):{"travelling North"};
	case (getDir player <= 68):{"travelling North East"};
	case (getDir player <= 113):{"travelling East"};
	case (getDir player <= 158):{"travelling South East"};
	case (getDir player <= 203):{"travelling South"};
	case (getDir player <= 248):{"travelling South West"};
	case (getDir player <= 293):{"travelling West"};
	case (getDir player <= 338):{"travelling North West"};
	default {""};
};
_displayName = getText(configFile >> "CfgVehicles" >> (typeOf vehicle player) >> "displayName");

[format["%1 was seen speeding (%3 kph) in a(n) %5 near %2 %4",name player,triggerText _loc, speed player, _dir, _displayName],"life_fnc_notifyCop",true,false] call life_fnc_MP;