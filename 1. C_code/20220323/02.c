#include <stdio.h>

int total = 0;
int addToTotal(int num)
{
    total += num;
    return total;
}

int main(void)
{
    int num, i;
    for (i = 0; i < 3; i++)
    {
        printf("input%d:", i + 1);
        scanf("%d", &num);
        printf("total: %d \n", addToTotal(num));
    }
    return 0;
}