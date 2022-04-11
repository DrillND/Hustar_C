#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("input %dst: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
