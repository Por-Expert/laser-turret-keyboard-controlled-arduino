// Motor x
int enA=9;
int in1=8;
int in2=7;
// Motor Y
int enB=6;
int in3=5;
int in4=4;

void setup() {
pinMode(enA,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);

pinMode(enB,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

analogWrite(enA,80);
analogWrite(enB,120);
Serial.begin(9600);
}

void loop() {
if (Serial.read()=='b'){
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
if (Serial.read()=='f'){
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
else if(Serial.read()=='r'){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);;
}
else if(Serial.read()=='l'){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}
else if(Serial.read()=='s'){
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
}
}
