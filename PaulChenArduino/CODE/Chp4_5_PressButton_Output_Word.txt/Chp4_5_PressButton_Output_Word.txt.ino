/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

這次的實作即將學會如何操作Arduino與電腦窗口的聯絡
  
必續先練習實作3在學習
  
  http://www.arduino.cc/en/Tutorial/DigitalReadSerial

// int pushButton = 2; //  digital pin 2 has a pushbutton attached to it. Give it a name:

*/

int Initial = 0 ; // 設定Button的初始狀態為0
int ButtonState = 0 ; 
int PressButton = 7; // 我們用腳位7作為按鈕, 假設代數 Button7, 另該代數為7
int PressTime = 0 ;

void setup() {
  Serial.begin(9600); // Connected with the PC (傳輸速率為9600)
  pinMode(PressButton, INPUT); // Set Pin 7 as Input 
  //pinMode(PressButton2, INPUT); // Set Pin 7 as Input 

}


void loop() {
  ButtonState = digitalRead(PressButton); // 7號腳位的狀態(0 or 1)
  if (ButtonState == 1 and Initial == 0 ){  
    PressTime = PressTime +1; //Serial.println(ButtonState); // Port Output Statement
    Serial.print(PressTime); // Port Output Statement
    Serial.println(" 吼~~ ");
    Serial.println("陳佑歐爸");
    Serial.println("今天帶老婆跟BullSHIT_Min去爽喔 ~ ");
    Serial.println(" 太蝦皮了! ");
  }
  if (ButtonState!=Initial){   # debounced
    delay(50); 
  }
  Initial = ButtonState;
  delay(1000); 
}

  

/*
void loop2() {
  ButtonState2 = digitalRead(PressButton2); // 7號腳位的狀態(0 or 1)  
  Serial.println(" 誇張~~ ");
  Serial.println(ButtonState2); 
  delay(1); 
}

*/
