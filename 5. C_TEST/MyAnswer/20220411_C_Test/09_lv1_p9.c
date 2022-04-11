#include <stdio.h>

int main()
{
    int num;

    printf("input number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        for (int i = 0; i < num; i++)
        {
            printf("+");
        }
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            printf("*");
        }
    }

    return 0;
}
