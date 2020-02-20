#define Wait 000
#define Fill_Stage 001
#define Fill_Hopper 010
#define Spin_All 011

int S0 = 0;
int S1 = 0;
int S2 = 0;
int S3 = 0;

int pin_S0 = 2;
int pin_S1 = 3;
int pin_S2 = 4;
int pin_S3 = 5;

int pin_out_MotorStage = 10;
int pin_out_MotorHopper = 11;

int state = Wait;


void setup() {
Serial.begin (9600);

pinMode (pin_S0, INPUT);
pinMode (pin_S1, INPUT);
pinMode (pin_S2, INPUT);
pinMode (pin_S3, INPUT);

Serial.println(pin_S0);

pinMode (pin_out_MotorStage, OUTPUT);
pinMode (pin_out_MotorHopper, OUTPUT);

}

void loop() { 


switch(state){
  
  case Wait:

digitalWrite(pin_out_MotorStage, LOW);
digitalWrite(pin_out_MotorHopper,LOW);


pin_S0 = digitalRead(pin_S0);
pin_S1 = digitalRead(pin_S1);
pin_S2 = digitalRead(pin_S2);
pin_S3 = digitalRead(pin_S3);
 
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
  
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Fill_Stage;}
  
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}

    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Spin_All;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
    if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
      if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
  
  
break;


  case Fill_Stage:

digitalWrite(pin_out_MotorStage, HIGH);
digitalWrite(pin_out_MotorHopper,LOW);


pin_S0 = digitalRead(pin_S0);
pin_S1 = digitalRead(pin_S1);
pin_S2 = digitalRead(pin_S2);
pin_S3 = digitalRead(pin_S3);
 
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
  
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Fill_Stage;}
  
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}

    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Spin_All;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
    if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
      if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
  

  
  case Fill_Hopper:

digitalWrite(pin_out_MotorStage, LOW);
digitalWrite(pin_out_MotorHopper,HIGH);


pin_S0 = digitalRead(pin_S0);
pin_S1 = digitalRead(pin_S1);
pin_S2 = digitalRead(pin_S2);
pin_S3 = digitalRead(pin_S3);
 
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
  
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Fill_Stage;}
  
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}

    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Spin_All;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
    if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
      if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
  
 

break;


  case Spin_All:

digitalWrite(pin_out_MotorStage, HIGH);
digitalWrite(pin_out_MotorHopper,HIGH);


pin_S0 = digitalRead(pin_S0);
pin_S1 = digitalRead(pin_S1);
pin_S2 = digitalRead(pin_S2);
pin_S3 = digitalRead(pin_S3);
 
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==1){
  state = Wait;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Wait;}
  
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Stage;}
         if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==1 && pin_S3==1){
  state = Fill_Stage;}
  
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}
    if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==1 && pin_S3==0){
  state = Fill_Hopper;}

    if (pin_S0 == 0 && pin_S1==0 && pin_S2 ==1 && pin_S3==0){
  state = Spin_All;}
    if (pin_S0 == 0 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
    if (pin_S0 == 1 && pin_S1==0 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
      if (pin_S0 == 1 && pin_S1==1 && pin_S2 ==0 && pin_S3==1){
  state = Spin_All;}
  


}}

