#include <stdio.h>

int main(void)
{
    int table[3][4]={{1,2,3,4},{55,66,67,68},{69,16,61,14}};

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