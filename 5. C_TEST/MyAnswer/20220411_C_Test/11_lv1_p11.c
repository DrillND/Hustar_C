#include <stdio.h>
 
int main()
{
   
    for (int i = 3; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d x %d = %d\n", i, j, (i*j));
        }
        printf("\n");
    }

    for (int i = 6; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            printf("%d x %d = %d\n", i, j, (i*j));
        }
        printf("\n");
    }

    for (int i = 9; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\n", i, j, (i*j));
        }
        printf("\n");
    }
 
    return 0;
}

