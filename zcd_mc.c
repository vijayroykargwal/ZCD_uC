unsigned char FlagReg;
 sbit ZC at FlagReg.B0;

void interrupt()
 {
 if (INTCON.INTF){ //INTF flag raised, so external interrupt occured
 ZC = 1;
 INTCON.INTF = 0;
 }
 }

void main() {
 PORTB = 0;
 TRISB = 0x01; //RB0 input for interrupt
 PORTD = 0;
 TRISD = 0; //PORTD all output
 OPTION_REG.INTEDG = 0; //interrupt on falling edge
 INTCON.INTF = 0; //clear interrupt flag
 INTCON.INTE = 1; //enable external interrupt
 INTCON.GIE = 1; //enable global interrupt

while (1){
 if (ZC){ //zero crossing occurred
 PORTD.f0 = 1; //Send a 1ms pulse
 delay_ms(1);
 PORTD.f0 = 0;
 ZC = 0;
 }
 }
 }