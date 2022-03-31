#pragma config(Sensor, S1,     sensor_color,   sensorEV3_Color, modeEV3Color_Color)
#pragma config(Motor,  motorA,          motor_left,    tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,          motor_right,   tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


#define TRUE 1
#define FALSE 0

#define NONE 0
#define BLACK 1
#define BLUE 2
#define GREEN 3
#define YELLOW 4
#define RED 5
#define WHITE 6
#define BROWN 7

#define ledOFF 0
#define ledGreen 1
#define ledRed 2
#define ledOrange 3
#define ledGreenFlash 4
#define ledRedFlash 5
#define ledOrangeFlash 6
#define ledGreenPulse 7
#define ledRedPulse 8
#define ledOrangePulse 9

void Go(int speed){
	setMotorSpeed(motor_left, speed);
	setMotorSpeed(motor_right, speed);
}

task main()
{
	int speed = 20;
	while(TRUE)
	{
		if(getButtonPress(1))
		{
			Go(speed);
		}

		switch(getColorName(sensor_color))
		{
		case BLACK:
			displayBigTextLine(1, "BLACK");
			setLEDColor(ledGreen);
			wait1Msec(500);
			break;
		case WHITE:
			displayBigTextLine(1, "WHITE");
			wait1Msec(500);
			break;
		case GREEN:
			displayBigTextLine(1, "GREEN");
			playImmediateTone(523, 50);
			wait1Msec(500);
			break;
		case RED:
			displayBigTextLine(1, "RED");
			wait1Msec(500);
			setMotorSpeed(motor_left, 0);
			setMotorSpeed(motor_right, 0);
			wait1Msec(500);
			break;
		case YELLOW:
			Go(speed/2);
			displayBigTextLine(1, "YELLOW");
			wait1Msec(500);
			break;
		}
	}
}
