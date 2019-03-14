#include <LobotServoController.h>

/*
   xArm Robotic Arm Example Sketch
   Written by: Austin Reynolds
   1/9/19
   TCES 460 Embedded Systems Design
   University of Washington - Tacoma
   
   Uses any USB Serial input to advance to next xArm command
   Uses Serial1 on Arduino Mega-compatible board to control xArm
*/

#include <LobotServoController.h>

LobotServoController xArm(Serial1);
char select='q';
int angle=0;
void waitForSerial() {
  while(Serial.available() == 0) {}
}

void setup() {
  int i;
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial.println("Action?");
  
  
}

void loop() {
 // while(1){
   if (Serial.available() > 0) {
 
    select=Serial.read();
 
Serial.println(select);
   }
   
 while (!Serial || !Serial1) {}
    xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 132, 4, 857, 5, 687, 6, 500);
   if(select=='a'){
  xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 132, 4, 857, 5, 687, 6, 500);
  delay(1000);
  xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 132, 4, 857, 5, 687, 6, 901);
  delay(1000);
  xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 34, 4, 838, 5, 617, 6, 892);
  delay(1000); 
  xArm.moveServos(6, 1000, 1, 450, 2, 877, 3, 34, 4, 838, 5, 617, 6, 892);
  delay(1000); 
   xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 132, 4, 857, 5, 687, 6, 500);
  delay(1000);
Serial.println("Action?");
   }else if (select=='1'){

    get1();
    Serial.println("Action?");
   }
 
   
  //Serial.println("Reset Servos");
  
  waitForSerial(); //wait for serial input to execute next command
//  }  
}
void get1(){

xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 132, 4, 857, 5, 687, 6, 500);
  delay(1000);
  xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 132, 4, 791, 5, 457, 6, 500);
  delay(1000);
  xArm.moveServos(6, 1000, 1, 150, 2, 877, 3, 132, 4, 791, 5, 452, 6, 500);
  delay(1000); 
  xArm.moveServos(6, 1000, 1, 150, 2, 877, 3, 348, 4, 802, 5, 191, 6, 500);
  delay(1000); 
   xArm.moveServos(6, 1000, 1, 319, 2, 877, 3, 341, 4, 824, 5, 221, 6, 500);
  delay(1000);
    xArm.moveServos(6, 1000, 1, 437, 2, 877, 3, 337, 4, 838, 5, 240, 6, 500);
  delay(1000);
  xArm.moveServos(6, 1000, 1, 583, 2, 877, 3, 334, 4, 846, 5, 256, 6, 500);
  delay(1000);
    xArm.moveServos(6, 1000, 1, 735, 2, 877, 3, 334, 4, 845, 5, 259, 6, 500);
  delay(1000);
    xArm.moveServos(6, 1000, 1, 735, 2, 876, 3, 132, 4, 859, 5, 688, 6, 500);
  delay(1000);
  
}
