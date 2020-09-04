int big = 2 ; 
int push = 3 ;
int datain = 4 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(big, OUTPUT);
  pinMode(push, OUTPUT);
  pinMode(datain, OUTPUT);

} 

void loop() {
  // put your main code her e, to run repeatedly:
   digitalWrite(big, LOW);

   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);

   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);

   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);

   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);

   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);

   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);

   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);
 
   digitalWrite(push, LOW);
   digitalWrite(datain, 1);
   digitalWrite(push, HIGH);

   digitalWrite(big, HIGH);
 }
