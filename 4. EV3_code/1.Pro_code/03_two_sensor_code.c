//two sensor code

#pragma config(Sensor, S1,  c1,  sensorEV3_Color)
#pragma config(Sensor, S3,  c3,  sensorEV3_Color)
#pragma config(Motor,  motorA,lm, tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,rm, tmotorEV3_Large, PIDControl, encoder)

int calcBound() //Boundary value calculate
{
    int bound;  int black = 0;  int white = 0;
    for(int i = 0; i<5; i++)
    {
        black += getColorReflected(c1);
        black += getColorReflected(c3);
        sleep(10);
    }
    setMotorSpeed(lm, 2
