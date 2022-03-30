//onesensor tracking
#pragma config(Sensor, S2,  c2,  sensorEV3_Color)
#pragma config(Motor,  motorA,lm, tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,rm, tmotorEV3_Large, PIDControl, encoder)

int calcBound() //Boundary value calculate
{
    int bound;  int black = 0;  int white = 0;

    for(int i = 0; i<5; i++)
    {
        black += getColorReflected(c2);
        sleep(10);
    }
    setMotorSpeed(lm, 0);  setMotorSpeed(rm, 40);
    sleep(300);
    setMotorSpeed(lm, 0);  setMotorSpeed(rm, 0);

    for(int i = 0; i<5; i++)
   {
        white += getColorReflected(c2);
        sleep(10);
    }
    bound = (white/5 + black/5)/2;
    return bound;
}
task main()
{
    int gray = calcBound();
    while(1)
    {
        sleep(1);
        if(getColorReflected(c2) >= gray)
        {
            setMotorSpeed(lm, 40);
            setMotorSpeed(rm, 5);
        }
        else
        {
            setMotorSpeed(lm, 5);
            setMotorSpeed(rm, 40);
        }
    }
}
