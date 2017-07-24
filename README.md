# ZCD_uC
Zero Cross detector using PIC16F877A &amp; AC BULB
in this article I've done project on how to detect zero crossing using pic16f877a microcontroller and some other simple electronics components.

Zero crossing detector circuit is design to detect zero crossing of sine wave, Whenever sine wave cross from positive cycle to negative cycle or negative cycle to positive cycle.

Following main components are used in this electrical project. Brief description of these components are also given below:

Voltage source:

220volt or 120 volt sine wave voltage source which you want to detect zero crossing using zero crossing detector circuit using pic microcontroller.

Voltage limiting resistors:

Two voltage limiting resistors are used to limit voltage. Maximum voltage drops across these resistors. AC voltage less than 5 volt appear across full bridge rectifier. Now the question is why we need voltage limiting resistors in this circuit. Because microcontrollers can not read voltage more than 5 volt or voltage more than 5 volt damage microcontroller permanently.  Two 220K resistor are used as a voltage limiting resistors in this project. You can use quarter watt resistors, because current flow is in the order of micro amperes through voltage limiting resistors.

Bridge rectifier:

After voltage limiting resistors, full bridge rectifier circuit is used. It is used to convert negative cycle into positive half cycle or it is used to convert AC voltage into pulsating DC voltage. Because after full bridge NPN transistor is used as a switch which turn off only on zero crossing.

NPN transistor
:
NPN transistor is used in this project as a switch which provides microcontroller positive edge interrupt during zero crossing. You can use any NPN transistor. I have used 2N3904 NPN transistor in this project.

PIC16F877A microcontroller:

PIC16F877A microcontroller is main part of this project. because it measured zero crossing with external interrupt. Whenever sine wave cross zero point, positive edge interrupt is produce at the output of NPN transistor. Microcontroller measure this interrupt and generate a small pulse at PORT D pin number zero or PD0.

AC BULB & DSO:

when uC getting intrrupt from ZCD,port D will give output to DSO and AC BULB.so AC bulb gets on and DSO will show output as 1ms pulse.

List of components for zero crossing detector circuit:

Category,Reference,Value,Order Code

Resistors,"R1",330,

Resistors,"R2",10k,

Resistors,"R4",10k,

Integrated Circuits,"U2",PIC16F877A,

Transistors,"Q1",2N3904,

Miscellaneous,"BR1",2W04G,

Miscellaneous,"X1",CRYSTAL,
