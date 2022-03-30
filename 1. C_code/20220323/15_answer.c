#include <stdio.h>
#define M 3
#define N 4

int main()
{
    int a[M][N], i, j, sum[N] = {0};

    for (i = 0; i < M; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            printf("input integer: ");
            scanf("%d", &a[i][j]);
            sum[j] = sum[j] + a[i][j];
        }
    }

    for (i = 0; i < M; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("---------------------------\n");
    for (j = 0; j < N; ++j)
    {
        printf("%d\t", sum[j]);
    }
    printf("\n");

    return 0;
}