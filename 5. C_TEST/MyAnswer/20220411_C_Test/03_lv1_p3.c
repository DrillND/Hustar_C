#include <stdio.h>

int main()
{
    int num;

    printf("???? ?????? ??? : ");
    scanf("%d", &num);

    while (num < 0)
    {
        if (num <= 0)
        {
            printf("??? ????\n");
            printf("???? ?????? ??? : ");
            scanf("%d\n", &num);
        }
        else if (num > 0)
        {
            break;
        }
    }

    if (num % 2 == 0)
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}