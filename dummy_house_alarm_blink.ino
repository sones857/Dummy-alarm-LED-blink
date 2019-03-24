/*
 to blink 2 LED's alternatly every 10 seconds, for a dummy house alarm
*/

void setup()
{
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop()
{
digitalWrite(5, HIGH);
delay(1500);
digitalWrite(5,LOW);
delay(500);
digitalWrite(6,HIGH);
delay(1500);
digitalWrite(6,LOW);
delay(10000);
}
