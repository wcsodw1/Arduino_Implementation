int big = 2 ;  
int push = 3 ;
int datain = 4 ;
int datainput[8] = {1,1,1,1,1,1,1,1}; //{0,0,0,0,0,0,0,0};
int dataoff[8] = {0,0,0,0,0,0,0,0};

int data1[8] = {1,0,0,0,0,0,0,0};
//int data2[8] = {1,1,1,1,1,1,1,1};
//int data3[8] = {0,0,1,0,0,0,0,0};
//int data4[8] = {0,0,0,1,0,0,0,0};
//int data5[8] = {0,0,0,0,1,0,0,0};
//int data6[8] = {0,0,0,0,0,1,0,0};
//int data7[8] = {0,0,0,0,0,0,1,0};
//int data8[8] = {0,0,0,0,0,0,0,1};

void setup() {
  // put your setup code here, to run once:
  pinMode(big, OUTPUT);
  pinMode(push, OUTPUT);
  pinMode(datain, OUTPUT);
} 

void OnOff(int number){
  digitalWrite(push, LOW);
  digitalWrite(datain, number);
  digitalWrite(push, HIGH);
}

void loop() {
   digitalWrite(big, LOW); // 先放下平台
   
   for (int i=0; i<8; i++){
//    OnOff(datainput[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);
    
    OnOff(data1[i]);
    digitalWrite(big, HIGH); //升起平台
    delay(500);
    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(300);

//    OnOff(data2[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);
    
//    OnOff(data3[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);
//
//    OnOff(data4[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);
//
//    OnOff(data5[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);
//
//    OnOff(data6[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);
//
//    OnOff(data7[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);
//
//
//    OnOff(data8[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    digitalWrite(big, LOW);
//    OnOff(dataoff[i]);
//    delay(500);    
    }

//
//   digitalWrite(big, LOW); // 先放下平台
//   
//   for (int i=0; i<8; i++){
//    OnOff(dataoff[i]);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
//    } 
}

//    digitalWrite(big, LOW); // 放下平台
//    digitalWrite(push, LOW); 
//    OnOff(dataoff[i]);
//    digitalWrite(push, HIGH);
//    digitalWrite(big, HIGH); //升起平台
//    delay(500);
   


//  digitalWrite(big, LOW);
//   digitalWrite(big, HIGH); //升起平台
//   delay(100);
//   digitalWrite(big, LOW);

//   }


//void One(){
//  digitalWrite(push, LOW);
//  digitalWrite(datain, 1);
//  digitalWrite(push, HIGH);
//}
//void Zero(){
//  digitalWrite(push, LOW);
//  digitalWrite(datain, 0);
//  digitalWrite(push, HIGH);
//}

//   OnOff(1);
//   OnOff(0);
//   OnOff(1);
//   OnOff(0);
//   OnOff(1);
//   OnOff(0);
//   OnOff(1);
//   OnOff(0);

//   One();
//   One();
//   One();
//   One();
//   One();
//   One();
//   Zero();
//   One();
