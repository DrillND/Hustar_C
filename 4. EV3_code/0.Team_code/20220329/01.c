// 컬러센서 확인
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

#define ledOFF 0
#define ledGreen 1
#define ledRed 2
#define ledOrange 3
#define ledGreenFlash 4
#define ledRedFlash 5
#define ledOrangeFlash 6
#define ledGreenPulse 7
#define ledRedPulse 8
#define ledOrangePulse 9

task main()
{
   while(TRUE)
   {
      switch(getColorName(sensor_color))
      {
      case BLACK:
         displayBigTextLine(1, "BLACK");
         sleep(500);
         break;
      case BLUE:
         displayBigTextLine(1, "BLUE");
         sleep(500);
         break;
      case GREEN:
         displayBigTextLine(1, "GREEN");
         sleep(500);
         break;
      case RED:
         displayBigTextLine(1, "RED");
         sleep(500);
         break;
      case YELLOW:
         displayBigTextLine(1, "YELLOW");
         sleep(500);
         break;
      }
   }
}
