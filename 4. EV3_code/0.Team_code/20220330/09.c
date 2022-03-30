
void move(int speed_left, int speed_right)
{
   setMotorSpeed(motor_left, speed_left);
   setMotorSpeed(motor_right, speed_right);
}


task main()
{
   int isStart = FALSE;
   int motorSpeed = 30;
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
      move(motorSpeed, 0);
      sleep(MSEC_0_50);

      objectToDistance = getUSDistance(sensor_ultrasonic);
      displayBigTextLine(1, "Distance: %d", objectToDistance);

      if(objectToDistance < 5)
      {
         move(-motorSpeed, -motorSpeed);
         sleep(MSEC_1_00);
         move(motorSpeed, 0);
         sleep(MSEC_0_50);
      }

      sleep(500);
   }
}
