_minutesLeft = _this select 0;
_restartWarningTxt = _this select 1;
_minuteOrMinutes = "s";
if(_minutesLeft == 1) then { _minuteOrMinutes = ""; };
_notif =
[
	[
		[format["%1", _restartWarningTxt],"<t align = 'right' shadow = '1' size = '0.8' font='PuristaBold'>%1</t><br />"],
		[format["Next restart in %1 minute%2", _minutesLeft, _minuteOrMinutes],"<t align = 'right' shadow = '1' size = '0.6'>%1</t><br/>"]
	]
] spawn BIS_fnc_typeText;

#define DELAY_CHARACTER	0.1;
#define DELAY_CURSOR	0.1;