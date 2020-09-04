/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int sensor = 0 ;  // 電位器轉動過後的數字 analog pin used to connect the potentiometer
int angle = 0 ;
void setup() {
  myservo.attach(9);  // 宣告馬達的訊號控制腳位為9號 attaches the servo on pin 9 to the servo object
}

void loop() {
  sensor = analogRead(A0);           // 從A0讀取類比訊號
  angle = map(sensor, 0, 1023, 0, 180);
  myservo.write(angle);                // sets the servo position according to the scaled value
  delay(0);                         // waits for the servo to get there
}
