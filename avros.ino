//
//
//Main AVR OS
//created by Dalton Herrewynen on March 14 of 2016
//Licensed under the GNU GPL v2.0
//

/*
Designed for: Atmel ATMEGA328
Boards used in construction: Arduino nano (CPU), Arduino nano (GPU).

Check list:
1. Scavenge parts for simple external program storage (audio recorder like a cassette, USB floppy, or USB flashdrive)
2. develope a console function that can draw letters on a bitmap and send them to graphics AVR
3. Figure out a keyboard input solution (USB, or Serial)
4. Code in the keyboard
5. begin developing the OS
6. Find a simple compiler for the OS
7. install compiler and run test scripts.

*/

void setup(){
  Serial.begin(115200);//maximum serial speed for graphics AVR, serial bus is serving the same purpose a PCIe bus does in a full sized machine
  
}

void loop(){
  //work on the OS will begin here
  
}

void append(String addition){//append string to console, let graphics sketch do the rest
  Serial.writeln(addition);
}
}
