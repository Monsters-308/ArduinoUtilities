void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);

pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int S0 = digitalRead(2);
int S1 = digitalRead(3):
int S2 = digitalRead(4);

if S0 == 0 {
  digitalWrite 
}


Serial.println(S0);
delay(100);

}
