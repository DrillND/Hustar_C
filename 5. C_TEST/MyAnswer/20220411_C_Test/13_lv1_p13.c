#include <stdio.h>
int main(void)
{
    int min;
    int hour;
    int day;

    printf("What Time is it? By Min? : ");
    scanf("%d", &min);
    hour = min/60;
    day = hour/24;

    printf("%ddays %dhours %dmin\n", day, hour-(day*24), min-((hour-(day*24))*60)-(day*60*24));

    return 0;
}
