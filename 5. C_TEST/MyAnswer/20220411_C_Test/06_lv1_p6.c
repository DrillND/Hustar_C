#include <stdio.h>

int main(void)
{
    char total[14];

    printf("input registration number(950708-1234567) : ");
    scanf("%14s", total);

    printf("Birthday\n");
    printf("======================\n");

    printf("Year : %c", total[0]);
    printf("%c\n", total[1]);

    if (total[2] == '0')
    {
        printf("Month : %c\n", total[3]);
    }
    else
    {
        printf("Month : %c", total[2]);
        printf("%c\n", total[3]);
    }

    if (total[4] == '0')
    {
        printf("Day : %c\n", total[5]);
    }
    else
    {
        printf("Day : %c", total[4]);
        printf("%c\n", total[5]);
    }

    printf("======================\n");

    if (total[7] == '1')
    {
        printf("Gender : male\n");
    }
    else
    {
        printf("Gender : female\n");
    }

    return 0;
}
