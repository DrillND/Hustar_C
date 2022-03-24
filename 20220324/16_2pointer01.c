#include <stdio.h>
#define M 3 /* number of rows */
#define N 4 /* number of columns */

int main(void)
{
    int a[M][N], i, j, *p, sum = 0;
    for (p = &a[0][0]; p <= &a[M - 1][N - 1]; p++)
    {
        *p = 1;
    }

    for (i = 0; i < M; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            printf("a[%d][%d]=%d ", i, j, a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < M; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            sum += a[i][j];
        }
    }

    printf("\nsum = %d\n\n", sum);

    return 0;
}