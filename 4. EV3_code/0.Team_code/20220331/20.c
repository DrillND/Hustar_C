
#define TRUE 1
#define FALSE 0

#define LEFT 0
#define RIGHT 1

#define NONE 0
#define BLACK 1
#define BLUE 2
#define GREEN 3
#define YELLOW 4
#define RED 5
#define WHITE 6
#define BROWN 7

#define LED_OFF 0
#define LED_GREEN 1
#define LED_RED 2
#define LED_ORANGE 3
#define LED_GREEN_FLASH 4
#define LED_RED_FLASH 5
#define LED_ORANGE_FLASH 6
#define LED_GREEN_PULSE 7
#define LED_RED_PULSE 8
#define LED_ORANGE_PULSE 9

#define LOW_C 523
#define LOW_C_SHARP 554
#define LOW_D 587
#define LOW_D_SHARP 622
#define LOW_E 659
#define LOW_F 699
#define LOW_F_SHARP 740
#define LOW_G 784
#define LOW_G_SHARP 831
#define LOW_A 880
#define LOW_A_SHARP 932
#define LOW_B 988
#define HIGH_C 1047
#define HIGH_C_SHARP 1109
#define HIGH_D 1175
#define HIGH_D_SHARP 1245
#define HIGH_E 1319
#define HIGH_F 1397
#define HIGH_F_SHARP 1475
#define HIGH_G 1568
#define HIGH_G_SHARP 1661
#define HIGH_A 1760
#define HIGH_A_SHARP 1865
#define HIGH_B 1976

#define MSEC_0_05 50
#define MSEC_0_10 100
#define MSEC_0_50 500
#define MSEC_1_00 1000



int colorLeft, colorMiddle, colorRight, threshold;



void move(int motorSpeedLeft, int motorSpeedRight, int period)
{
   setMotorSpeed(motorLeft, motorSpeedLeft);
   setMotorSpeed(motorRight, motorSpeedRight);
   sleep(period);
}


void stop(int period)
{
   move(0, 0, period);
}


void rotate(int motorSpeed, int direction, int period)
{
   move(motorSpeed, motorSpeed, MSEC_1_00);

   if(direction == LEFT)
   {
      move(-motorSpeed, motorSpeed, period);
      while(colorLeft > threshold && colorMiddle < threshold && colorRight > threshold)
      {
         move(-motorSpeed, motorSpeed, 1);
      }
   }
   else
   {
      move(motorSpeed, -motorSpeed, period);
   }
}




task main()
{
   int v = 30;
   int error = 0;
   int sum = 0;
   int diff = 0;
   int last_error = 0;
   int blackValue, whiteValue;

   float Kp = 0.2;
   float Kd = 50;
   float Ki = Kp*Kp/(4*Kd);

   // Calibration(black)
   while(TRUE)
   {
      displayBigTextLine(1, "Calibration(black)..");
      if(getButtonPress(TRUE))
      {
         blackValue += getColorReflected(sensorColorLeft);
         blackValue += getColorReflected(sensorColorMiddle);
         blackValue += getColorReflected(sensorColorRight);
         playImmediateTone(LOW_C, MSEC_0_05);
         sleep(MSEC_0_50);
         break;
      }
   }

   // Calibration(white)
   while(TRUE)
   {
      displayBigTextLine(1, "Calibration(white)..");
      if(getButtonPress(TRUE))
      {
         whiteValue += getColorReflected(sensorColorLeft);
         whiteValue += getColorReflected(sensorColorMiddle);
         whiteValue += getColorReflected(sensorColorRight);
         playImmediateTone(HIGH_C, MSEC_0_05);
         sleep(MSEC_0_50);
         break;
      }
   }

   // Calculate threshold
   threshold = ((blackValue/3) + (whiteValue/3)) / 2;

   // Ready
   while(TRUE)
   {
      if(getButtonPress(TRUE))
      {
         break;
      }
   }

   // PID Control
   while(TRUE)
   {
      colorLeft = getColorReflected(sensorColorLeft);
      colorMiddle = getColorReflected(sensorColorMiddle);
      colorRight = getColorReflected(sensorColorRight);

      error = getColorReflected(sensorColorMiddle) - threshold; // P control
      sum += error; // PI control
      diff = error - last_error; // PID control
      move(v+(error*Kp + sum*Ki + diff*Kd), v-(error*Kp + sum*Ki + diff*Kd), 1);
      last_error = error;

      if(colorLeft < threshold && colorRight < threshold)
      {
         rotate(v, LEFT, MSEC_1_00);
         stop(MSEC_0_50);
      }
   }
}
