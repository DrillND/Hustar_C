//signal control

#pragma config(Sensor, S1,     c1,             sensorEV3_Color)
#pragma config(Sensor, S2,     c2,             sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S3,     c3,             sensorEV3_Color)
#pragma config(Motor,  motorA,          lm,            tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,          rm,            tmotorEV3_Large, PIDControl, encoder)

#define Black 1
#define Blue 2
#define Green 3
#define Yellow 4
#define Red 5
#define White 6
#define Brown 7

int color, finish_line, speed = 35, start_val = 0, cond = 1;

void go(int s)
{
   setMotorSpeed(lm, s);
   setMotorSpeed(rm, s);
}

task main()
{
   while(getButtonPress(1)==0) {}
   while(cond)
   {
      displayBigTextLine(1, "Color: %d", color);
      displayBigTextLine(4, "Finish: %d", finish_line);
      color = getColorName(c2);
      go(speed);
      if(!start_val && (color != White))
      {
         go(20);
         sleep(50);
         color = getColorName(c2);
         finish_line = color;
         displayBigTextLine(1, "Color: %d", color);
         displayBigTextLine(4, "Finish: %d", finish_line);
         setLEDColor(ledGreen);
         sleep(700);
         start_val++;
         color = getColorName(c2);
      }
      if(color != White)
      {
         sleep(50);
         if(color == finish_line)
         {
            displayBigTextLine(1, "Color: %d", color);
            displayBigTextLine(4, "Finish: %d", finish_line);
            go(0);
            setLEDColor(ledRed);
            sleep(500);
            cond = 0;
            break;
         }
         if(color == Green)
         {
            displayBigTextLine(1, "Color: %d", color);
            displayBigTextLine(4, "Finish: %d", finish_line);
            playSound(soundBeepBeep);
            sleep(400);
         }
         if(color == Yellow)
         {
            displayBigTextLine(1, "Color: %d", color);
            displayBigTextLine(4, "Finish: %d", finish_line);
            go(0);
            while(color == Yellow)
            {
               color = getColorName(c2);
               go(speed/2);
            }
            go(speed);
         }
         if(color == Red)
         {
            displayBigTextLine(1, "Color: %d", color);
            displayBigTextLine(4, "Finish: %d", finish_line);
            go(0);
            sleep(1000);
            go(speed);
            sleep(700);
         }
      }
   }
}
