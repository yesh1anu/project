int ACWATERPUMP = 13; 
int sensor = A0;
int val=0; 
void setup() {
  
pinMode(13,OUTPUT);
pinMode(A0,INPUT); 
Serial.begin(9600);
}

void loop() {
val = analogRead(A0);
if(val ==LOW)
{
  analogWrite(13,LOW); 
}
else
{
analogWrite(13,HIGH); 
}
delay(400);
}

