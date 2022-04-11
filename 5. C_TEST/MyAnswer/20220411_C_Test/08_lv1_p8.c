#include <stdio.h>

int main()
{
    int i=0, num;

    printf("input number : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("*");
    }

    printf("\n==========================\n");
    while (i < num)
    {
        printf("*");
        i++;
    }

    return 0;
}
