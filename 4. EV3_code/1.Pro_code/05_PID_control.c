//PID control

#pragma config(Sensor, S2,  c2,  sensorEV3_Color)
#pragma config(Motor,  motorB,lm, tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,rm, tmotorEV3_Large, PIDControl, encoder)

#define Threshold 38

task main()
{
    int v = 35, error = 0, sum = 0, diff = 0, last_error = 0;
    float Kp = 0.8, Kd = 100, Ki = Kp*Kp/(4*Kd);

    while(1)
    {
        sleep(1);
        error = getColorValue(c2) - Threshold;
        sum = sum+error;
        diff = error -last_error;
        setMotorSpeed(lm, v + (error*Kp + sum*Ki + diff*Kd));
        setMotorSpeed(rm, v - (error*Kp + sum*Ki + diff*Kd));
        last_error = error;
    }
}
