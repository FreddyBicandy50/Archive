/*********************************************
* name:Joystick PS2
* function:push the joystick and the coordinates of X and Y axes displayed on Serial Monitor will change accordingly;
* press down the joystick, and the coordinate of Z=0 will also be displayed.
connection:
Joystick PS2 SunFounder Uno R3
GND           GND
VCC           5V
Bt            7
x             A0
y             A1
***********************************************/
// Email: support@sunfounder.com
// Website: www.sunfounder.comconst
#define Xpin A0
#define Ypin A1
#define BUTTON 8
#define RED 9
#define GREEN 10
#define YELLOW 11

void setup()
{
	Serial.begin(9600);

	pinMode(BUTTON, INPUT);
	pinMode(RED, OUTPUT);
	pinMode(YELLOW, OUTPUT);
	pinMode(GREEN, OUTPUT);
}

void loop()
{
	if (Xpin >= 0 && Xpin <= 100)
	{
		lighton(GREEN);
	}
	else if (Xpin > 600 && Xpin<= 1000)
	{
		lighton(YELLOW);
	}
	else if ((Ypin > 600 && Ypin<= 1000) || (Ypin >= 0 && Ypin <=100 ))
	{
		lighton(YELLOW);
	}
	else
	{
		lightoff();
	}
	Serial.print("X: ");
	Serial.print(analogRead(Xpin));
	Serial.print("\tY: ");
	Serial.print(analogRead(Ypin));
	Serial.print("\tZ: ");
	Serial.println(digitalRead(BUTTON));
	delay(100);
}

void lighton(int light)
{
	int i;

	i = 0;
	while (i < 255)
	{
		analogWrite(light, i);
		i++;
	}
}

void lightoff()
{
	int i;

	i = 0;
	while (i < 255)
	{
		analogWrite(RED, i);
		analogWrite(YELLOW, i);
		analogWrite(GREEN, i);
		i++;
	}
}