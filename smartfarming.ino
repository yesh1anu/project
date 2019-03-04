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
  val=map(val,550,10,0,100);
if(val <0)
{
  digitalWrite(13,HIGH); 
}
else
{
digitalWrite(13,LOW); 
}
delay(400);
}

