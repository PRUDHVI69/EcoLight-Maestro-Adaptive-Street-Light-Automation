#include <lpc214x.h>

#include "types.h"
//include LCD header files
#include "lcd.h"
#include "lcd_defines.h"

#include "rtc_defines.h"
#include "rtc.h"

s32 hour,min,sec,date,month,year,day;




// Main function
int main()
{
	// Initialize RTC
	RTC_Init();
		
  // Initialize the LCD
	InitLCD();
  // Set the initial time (hours, minutes, seconds)
	SetRTCTimeInfo(10,31,00);
	SetRTCDateInfo(21,8,2025);
	SetRTCDay(4);
	
    while (1) 
		{
      // Get and display the current time on LCD
			GetRTCTimeInfo(&hour,&min,&sec);
			DisplayRTCTime(hour,min,sec);
			GetRTCDateInfo(&date,&month,&year);
			DisplayRTCDate(date,month,year);
			GetRTCDay(&day);
			DisplayRTCDay(day);
    }
}

