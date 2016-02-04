#include <MovingAverageFilter.h>
#include <Keyboard.h>
 
MovingAverageFilter movingAverageFilter(20);
MovingAverageFilter movingAverageFilter1(20);
MovingAverageFilter movingAverageFilter2(20);
MovingAverageFilter movingAverageFilter3(20);
MovingAverageFilter movingAverageFilter6(20);
MovingAverageFilter movingAverageFilter7(20);
MovingAverageFilter movingAverageFilter8(20);
MovingAverageFilter movingAverageFilter9(20);

// there are 9 analog pins
boolean check = false;  
boolean check1 = false;
boolean check2 = false;
boolean check3 = false;
boolean check6 = false;
boolean check7 = false; 
boolean check8 = false;
boolean check9 = false;
 
void setup() {
 
Serial.begin(115200);     
 
}
 
void loop() {        
 
// declare input and output variables
 
float input  =  analogRead(0);
float input1 =  analogRead(1); 
float input2 =  analogRead(2);
float input3 =  analogRead(3);
float input6 =  analogRead(6);
float input7 =  analogRead(7); 
float input8 =  analogRead(8);
float input9 =  analogRead(9); 
 
 
float output = 0;
float output1 = 0;
float output2 = 0;
float output3 = 0;
float output6 = 0;
float output7 = 0;
float output8 = 0;
float output9 = 0;

 
output = movingAverageFilter.process(input);
output1 = movingAverageFilter1.process(input1);
output2 = movingAverageFilter2.process(input2);
output3 = movingAverageFilter3.process(input3);
output6 = movingAverageFilter6.process(input6);
output7 = movingAverageFilter7.process(input7);
output8 = movingAverageFilter8.process(input8);
output9 = movingAverageFilter9.process(input9);

 
////  key "a"//////////begin
 
if (output < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check){         
Keyboard.print("a");     // key assignment    
Serial.println(output);  // output assignment         
check = !check;   
  }         
  }
 
 
if (output >600) {     // be sure to change output and check to proper 
  if (check){               
  check = !check;   
  }     
  }
// End of Key
 
 ////  key "s"///////////////////////////////////////////////////
 
if (output1 < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check1){         
Keyboard.print("s");         
Serial.println(output1);           
check1 = !check1;   
  }         
  }
 
 
if (output1 >600) {     
  if (check1){               
  check1 = !check1;   
  }     
  }
 
  ////  key "d"///////////////////////////////////////////////////
 
if (output2 < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check2){         
Keyboard.print("d");         
Serial.println(output2);           
check2 = !check2;   
  }         
  }
 
 
if (output2 >600) {     
  if (check2){               
  check2 = !check2;   
  }     
  }
 
   ////  key "f"///////////////////////////////////////////////////
 
if (output3 < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check3){         
Keyboard.print("f");         
Serial.println(output3);           
check3 = !check3;   
  }         
  }
 
 
if (output3 >600) {     
  if (check3){               
  check3 = !check3;   
  }     
  }

 ////  key "w"//////////begin
 
if (output6 < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check6){         
Keyboard.print("w");     // key assignment    
Serial.println(output6);  // output assignment         
check = !check6;   
  }         
  }
 
 
if (output6 >600) {     // be sure to change output and check to proper 
  if (check6){               
  check6 = !check6;   
  }     
  }
// End of Key

////  key "g"//////////begin
 
if (output7 < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check7){         
Keyboard.print("g");     // key assignment    
Serial.println(output7);  // output assignment         
check7 = !check7;   
  }         
  }
 
 
if (output7 >600) {     // be sure to change output and check to proper 
  if (check7){               
  check7 = !check7;   
  }     
  }
// End of Key

////  key "h"//////////begin
 
if (output8 < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check8){         
Keyboard.print("h");     // key assignment    
Serial.println(output8);  // output assignment         
check8 = !check8;   
  }         
  }
 
 
if (output8 >600) {     // be sure to change output and check to proper 
  if (check8){               
  check8 = !check8;   
  }     
  }
// End of Key
////  key "j"//////////begin
 
if (output9 < 200 ) {   // you can change this parameter to fine tune the sensitivity
if (!check9){         
Keyboard.print("j");     // key assignment    
Serial.println(output9);  // output assignment         
check = !check9;   
  }         
  }
 
 
if (output >600) {     // be sure to change output and check to proper 
  if (check9){               
  check9 = !check9;   
  }     
  }
// End of Key
 
}
 
