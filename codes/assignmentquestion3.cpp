#include<Arduino.h>
int A=1,B=0,C=0,X=0;
int D,E,F,Y;
void disp_7447(int D,int E,int F,int Y)
{
	digitalWrite(2,D);
	digitalWrite(3,E);
	digitalWrite(4,F);
	digitalWrite(5,Y);
}
void setup()
{
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
}
void loop(){
	D=(!A&&!B&&X);
	delay(1000);
	E=(A)||(!C&&!X)||(B&&C&&X);
	delay(1000);
	F=(A&&X)||(C&&!X)||(!A&&!B&&!X);
	delay(1000);
	Y=(!A&&X);
	delay(1000);
	disp_7447(D,E,F,Y);
	
}
	
