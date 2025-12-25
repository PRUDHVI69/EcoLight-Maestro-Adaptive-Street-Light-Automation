#include<LPC21xx.h>
#include "Lcd_defines.h"
#include "Lcd.h"
#include "delay.h"
#include<string.h>
int main(){
	int i;
    char str[]="sandeep";
    InitLCD();
    //char temp[8];
    for(i=14;i>0;i--){
        CmdLCD(GOTO_LINE1_POS0+i);
        delay_ms(100);
        StrLCD(str);
        delay_ms(200);
        CmdLCD(GOTO_LINE1_POS0);
        StrLCD("                ");
    }
    for(i=0;str[i];i++){
        CmdLCD(GOTO_LINE1_POS0);
        StrLCD(str+i);
        delay_ms(200);
        CmdLCD(GOTO_LINE1_POS0);
        StrLCD("                ");
        
    }

  
}
// #include <LPC21xx.h>
// #include "Lcd_defines.h"
// #include "Lcd.h"
// #include "delay.h"
// #include <string.h>

// int main() {
//     char str[] = "sandeep";
//     char spaces[] = "       ";  // 7 spaces to clear the string
//     int len = strlen(str);
//     int pos = 0;
//     int direction = 1;
    
//     InitLCD();
   //    delay_s(1);
//     CmdLCD(GOTO_LINE1_POS0);
//     StrLCD("hii");
//     delay_s(4);
    
//     // Clear the line
//     CmdLCD(GOTO_LINE1_POS0);
//     StrLCD("                "); // Clear entire line
    
//     while(1) {
//         // Display string at current position
//         CmdLCD(GOTO_LINE1_POS0 + pos);
//         delay_ms(10);
//         StrLCD(str);
        
//         delay_s(1);
        
//         // Clear the string
//         CmdLCD(GOTO_LINE1_POS0 + pos);
//         delay_ms(10);
//         StrLCD(spaces);
        
//         // Update position
//         pos += direction;
        
//         // Check boundaries (assuming 16-char LCD)
//         if(pos >= 16 - len) {
//             direction = -1;
//             pos = 16 - len;  // Ensure we don't go past boundary
//         }
//         if(pos <= 0) {
//             direction = 1;
//             pos = 0;  // Ensure we don't go below 0
//         }
//     }
// }
// int main(){
//     int i;
// InitLCD();
// CmdLCD(GOTO_LINE1_POS0+3);
// StrLCD("Vector");

// for(i=0;i<5;i++){
// 	CmdLCD(GOTO_LINE2_POS0+2);
//     StrLCD("Institute");
// 	delay_s(1);
// 	CmdLCD(GOTO_LINE2_POS0+2);
//     StrLCD("         ");
// 		delay_s(1);
 
// }
// CmdLCD(CLEAR_LCD);
// }

