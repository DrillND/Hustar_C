//p control
#pragma config(Sensor, S1,  c1,  sensorEV3_Color)
#pragma config(Sensor, S2,  c2,  sensorEV3_Color)
#pragma config(Sensor, S3,  c3,  sensorEV3_Color)
#pragma config(Motor,  motorA,lm, tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,rm, tmotorEV3_Large, PIDControl, encoder)

#define Threshold 38

task main()
{
    int v = 35, error = 0;
    float Kp = 0.7;

    while(1)
    {
        sleep(1);
        error = getColorReflected(c2) - Threshold;
        setMotorSpeed(lm, v + (er
