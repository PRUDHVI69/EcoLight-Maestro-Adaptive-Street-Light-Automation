int main()
{
	//Initialltion of RTC
	RTC_Init();
	//Initialition of lcd
	InitLCD();
	//Initialition of keypad 
	Init_kpm();
	// Initialtion of ADC
	Init_ADC();
	//Set RTC time,date and day
	// Set the initial time (hours, minutes, seconds)
	SetRTCTimeInfo(10,31,00);
	SetRTCDateInfo(21,8,2025);
	SetRTCDay(4);
		  // Get and display the current time on LCD
			GetRTCTimeInfo(&hour,&min,&sec);
			DisplayRTCTime(hour,min,sec);
			GetRTCDateInfo(&date,&month,&year);
			DisplayRTCDate(date,month,year);
			GetRTCDay(&day);
			DisplayRTCDay(day);
			if ((hour >= 18 && hour <= 23) || (hour >= 0 && hour < 6))
			{
				
			}
			while(1);
}