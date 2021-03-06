#pragma config(Sensor, S1,     sensorColorRight, sensorEV3_Color)
#pragma config(Sensor, S2,     sensorColorMiddle, sensorEV3_Color)
#pragma config(Sensor, S4,     sensorColorLeft, sensorEV3_Color)
#pragma config(Motor,  motorA,          motorLeft,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,          motorRight,    tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "lego.h"


task main()
{
   int i;
  int v = 30;
  int error = 0;
  int sum = 0;
  int diff = 0;
  int last_error = 0;
  int blackValue = 0, whiteValue = 0, threshold = 0;
  int colorLeft, colorMiddle, colorRight;

  float Kp = 0.2;
  float Kd = 50;
  float Ki = Kp*Kp/(4*Kd);

  // Calibration(black)
  while(TRUE)
  {
     displayBigTextLine(1, "Calibration(black)..");
    if(getButtonPress(TRUE))
    {
       for(i=0; i<5; i++)
       {
          blackValue += getColorReflected(sensorColorLeft);
         blackValue += getColorReflected(sensorColorMiddle);
         blackValue += getColorReflected(sensorColorRight);
      }

      blackValue /= 15;

      playImmediateTone(LOW_C, MSEC_0_05);
      displayBigTextLine(1, "blackValue: %d", blackValue);
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
       for(i=0; i<5; i++)
       {
          whiteValue += getColorReflected(sensorColorLeft);
         whiteValue += getColorReflected(sensorColorMiddle);
         whiteValue += getColorReflected(sensorColorRight);
      }

      whiteValue /= 15;

      playImmediateTone(HIGH_C, MSEC_0_05);
      displayBigTextLine(1, "whiteValue: %d", whiteValue);
      sleep(MSEC_0_50);
      break;
    }
  }

  // Calculate threshold
  threshold = (blackValue + whiteValue) / 2;
  //threshold = 50;


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

    displayBigTextLine(1, "Left: %d", colorLeft);
    displayBigTextLine(2, "Middle %d", colorMiddle);
    displayBigTextLine(3, "Right: %d", colorRight);
    displayBigTextLine(5, "Threshold: %d", threshold);

    error = getColorReflected(sensorColorMiddle) - threshold; // P control
    sum += error; // PI control
    diff = error - last_error; // PID control
    move(v+(error*Kp + sum*Ki + diff*Kd), v-(error*Kp + sum*Ki + diff*Kd), 1);
    last_error = error;

    if((colorLeft < threshold && colorMiddle < threshold && colorRight < threshold) ||
        (colorLeft < threshold && colorMiddle < threshold && colorRight > threshold))
    {
       displayBigTextLine(1, "Rotate left");
      rotate(v, LEFT, threshold);
    }
    else if((colorLeft > threshold && colorMiddle < threshold && colorRight < threshold))
    {
       displayBigTextLine(1, "Rotate right");
       rotate(v, RIGHT, threshold);
    }
    else if((colorLeft < threshold && colorMiddle < threshold && colorRight < threshold))
    {
       displayBigTextLine(1, "Rotate U-tern");
       rotate(v, UTERN, threshold);
    }
    else
    {

    }

    //else if(colorLeft > threshold && colorMiddle > threshold && colorRight > threshold)
    //{
    //   rotate(v, LEFT, threshold);
    //   rotate(v, LEFT, threshold);
    //}
  }
}
