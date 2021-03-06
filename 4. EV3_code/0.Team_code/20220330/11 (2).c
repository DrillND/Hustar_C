//linetracing sencer one mine
#pragma config(Sensor, S1,     sensor_color,   sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sensor_ultrasonic, sensorEV3_Ultrasonic)
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


void move(int speed_left, int speed_right)
{
   setMotorSpeed(motor_left, speed_left);
   setMotorSpeed(motor_right, speed_right);
}


task main()
{
   int isStart = FALSE;
   int motorSpeed = 20;
   int objectToDistance;

   while(TRUE)
   {
      if(getButtonPress(TRUE))
      {
         break;
      }
   }

   while(TRUE)
   {
      move(motorSpeed, motorSpeed);
      sleep(MSEC_0_05);

      objectToDistance = getUSDistance(sensor_ultrasonic);
      displayBigTextLine(1, "Distance: %d", objectToDistance);

      if(objectToDistance < 10)
      {
         move(-motorSpeed, -motorSpeed);
         sleep(MSEC_1_00);
         move(motorSpeed, 0);
         sleep(MSEC_0_50);
      }

      sleep(500);
      while(TRUE)
       {
          switch(getColorName(sensor_color))
            {
               case WHITE:
                displayBigTextLine(1, "WHITE");
               move(motorSpeed, motorSpeed-10);
               sleep(MSEC_0_05);
               //sleep(MSEC_0_50);
               break;
                case BLACK:
                 displayBigTextLine(1, "BLACK");
               move(motorSpeed-10, motorSpeed);
               sleep(MSEC_0_05);
               //sleep(MSEC_0_50);
               break;
               }
       }

   }
}
