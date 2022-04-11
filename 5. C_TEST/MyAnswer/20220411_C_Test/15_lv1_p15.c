#include <stdio.h>
int main()
{
    double r, round, area, volume;
    double pi = 3.14;

    printf("input num : ");
    scanf("%lf", &r);

    round = 2 * pi * r;
    area = pi * r * r;
    volume = (4.0 / 3.0) * pi * r * r * r;

       printf("outcome = %7.2lf\n", volume);

    return 0;
}
