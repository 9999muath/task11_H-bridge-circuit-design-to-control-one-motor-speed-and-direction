int EN1 = 9;
int Speed_MotorA = A4;
int read_Speed_MotorA;  
int write_Speed_MotorA;
void setup() {
 
pinMode(EN1, OUTPUT);

pinMode(Speed_MotorA, INPUT);
}
void loop() {
read_Speed_MotorA = analogRead(Speed_MotorA); 

write_Speed_MotorA = map(read_Speed_MotorA,0,1023,0,255);

analogWrite(EN1, write_Speed_MotorA);     
}
