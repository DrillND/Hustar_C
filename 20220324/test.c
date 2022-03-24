#include <stdio.h>

int main(void)
{
    int table[3][4]={{1234,233,333,433},{35,36,37,118},{119,110,111,112}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%6d", *(*(table + i) + j));
        }
        printf("\n");
    }

    return 0;
}