/*研究可變電阻與類比訊號輸入 : 
 * 用可變電阻來控制LED亮度 
*/


int sensor = A0; //設定sensor這個變數就是指A0的意思
int sensorRead = 0; //先設定sensor讀到的數值為0
int NewData = 0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorRead = analogRead(sensor);
  NewData = map(sensorRead,0 ,1023,0,255);
  Serial.println(NewData);
  analogWrite(3,NewData); // 3 : 3號腳位亮
  delay(200);

}
