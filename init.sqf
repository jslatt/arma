/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\safezone.sqf"; // Safezone Warning Script
[] execVM "scripts\intro.sqf"; // Intro Script with Camera and Shit
[] execVM "scripts\init.sqf"; // Lifting with Helo's
[] execVM "nosidechat.sqf";
[] execVM "scripts\ScarCode\sRestartWarnings.sqf";
[] execVM "Server Messages\message.sqf";
[] execVM "scripts\fn_statusBar.sqf";

[] execVM "repetitive_cleanup.sqf";

StartProgress = true;