/*
	File: welcomecredits.sqf
	Author: HellsGate
	Date: 14/12/2013
	Description:
	Creates an intro on the bottom-right hand corner of the screen.
*/

_onScreenTime = 5; //<-- How long is the text on the screen for ? Recommended: 1

sleep 3; //Wait in seconds before the credits start after player is in-game

_role1 = "Welcome To";
_role1names = ["Dark Gaming RP"];
_role2 = "Version:";
_role2names = ["Dark Gaming Version 3.30"];
_role3 = "Owner:";
_role3names = ["Bucket Smith","i3itCoin"];
_role4 = "Developers:";
_role4names = ["LoveGuru","Meiers","i3itCoin"];
_role5 = "Admins:";
_role5names = ["Wolfy","Joshua","Rye Breadington","Dave McCoy","Devil Kitty"];
_role6 = "Moderators:";
_role6names = ["James Maki","Jason Franco"];
_role7 = "Website:";
_role7names = ["http://darksimulations.enjin.com/"];
_role8 = "TeamSpeak:";
_role8names = ["216.105.171.14:10106"];
_role9 = "Restarts:";
_role9names = ["Automatic Restarts Every 4 Hours"];
_role10 = "Developer Log:";
_role10names = ["On Website Forums"];
_role11 = "Warning!:";
_role11names = ["Abusing Glitches or Exploits that are in Arma 3's Terms of service will be reported to Battleye"];
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.65' color='#256AF6' align='center'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.60' color='#FFFFFF' align='center'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 1.7,1], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 1,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names],
[_role7, _role7names],
[_role8, _role8names],
[_role9, _role9names],
[_role10, _role10names],
[_role11, _role11names]
];