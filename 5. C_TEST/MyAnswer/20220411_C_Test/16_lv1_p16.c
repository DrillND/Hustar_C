#include <stdio.h>
int main(void)
{
    float cm;
    float feet;
    float inch;
    float yard;

    printf("input inch : ");
    scanf("%f", &inch);

    cm = inch * 2.54;
    feet = inch / 12;
    inch = inch - feet * 12;
    yard = inch;

    printf("cm : %f\n", cm);
    printf("feet : %f\n", feet);
    printf("yard : %f\n", yard);
    return 0;
}