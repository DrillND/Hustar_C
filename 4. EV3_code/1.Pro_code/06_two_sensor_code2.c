//two sensor again
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
    setMotorSpeed(lm, 20);  setMotorSpeed(rm, 20);
    sleep(500);
    setMotorSpeed(lm, 0);  setMotorSpeed(rm, 0);
    for(int i = 0; i<5; i++)
   {
        white += getColorReflected(c1);
        white += getColorReflected(c3);
        sleep(10);
    }
    bound = (white/10 + black/10)/2;
    return bound;
}
task main()
{
    int gray = calcBound();
    while(1)
    {
       int left = getColorReflected(c1);
       int right = getColorReflected(c3);

       if(left>=gray && right>=gray)
       {
           setMotorSpeed(lm, 40);
           setMotorSpeed(rm, 40);
       }
       else if(left>=gray && right<gray)
       {
           setMotorSpeed(lm, 30);
           setMotorSpeed(rm, -10);
       }
       else if(left<gray && right>=gray)
       {
           setMotorSpeed(lm, -10);
           setMotorSpeed(rm, 30);
       }
       else
       {
           setMotorSpeed(lm, 0);
           setMotorSpeed(rm, 0);
       }
    }
}
