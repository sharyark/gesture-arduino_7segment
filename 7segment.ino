int pinA = A0;
int pinB = A1;
int pinC = A2;
int pinD = A3;
int pinE = A4;
int pinF = A5;
int pinG = 2;
String msg;
int t = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 0
  while(Serial.available() == 0){}
  msg = Serial.readStringUntil('\r');
 if(msg == "zero"){
  digitalWrite(pinA , 0);
  digitalWrite(pinB , 0);
  digitalWrite(pinC , 0);
  digitalWrite(pinD , 0);
  digitalWrite(pinE , 0);
  digitalWrite(pinF , 0);
  digitalWrite(pinG , 1);
  // delay(t);
}

 
  // 1
else if(msg == "one"){
 
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 0);
  digitalWrite(pinC , 0);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 1);
  // delay(t);
}
  // 2
else if(msg == "two"){
 
  digitalWrite(pinA , 0);
  digitalWrite(pinB , 0);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 0);
  digitalWrite(pinE , 0);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 0);
  // delay(t);
}
  // 3
else if(msg == "three"){
 
  digitalWrite(pinA , 0);
  digitalWrite(pinB , 0);
  digitalWrite(pinC , 0);
  digitalWrite(pinD , 0);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 0);
  // delay(t);
}
  // 4
else if(msg == "four"){
 
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 0);
  digitalWrite(pinC , 0);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 0);
  digitalWrite(pinG , 0);
  // delay(t);
}
  // 5
else if(msg == "five"){
 
  digitalWrite(pinA , 0);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 0);
  digitalWrite(pinD , 0);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 0);
  digitalWrite(pinG , 0);
  // delay(t);
}
  // 6
//   digitalWrite(pinA , 0);
//   digitalWrite(pinB , 1);
//   digitalWrite(pinC , 0);
//   digitalWrite(pinD , 0);
//   digitalWrite(pinE , 0);
//   digitalWrite(pinF , 0);
//   digitalWrite(pinG , 0);
//   delay(t);

//   // 7
//   digitalWrite(pinA , 0);
//   digitalWrite(pinB , 0);
//   digitalWrite(pinC , 0);
//   digitalWrite(pinD , 1);
//   digitalWrite(pinE , 1);
//   digitalWrite(pinF , 1);
//   digitalWrite(pinG , 1);
//   delay(t);

  // 8
  else if(msg=="bati_gull"){
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 1);
  }
//   delay(t);

//   // 9
//   digitalWrite(pinA , 0);
//   digitalWrite(pinB , 0);
//   digitalWrite(pinC , 0);
//   digitalWrite(pinD , 0);
//   digitalWrite(pinE , 1);
//   digitalWrite(pinF , 0);
//   digitalWrite(pinG , 0);
//   delay(t);
// }
}