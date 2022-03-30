#include <stdio.h>
#define M 3 /* number of rows */
#define N 4 /* number of columns */

int main()
{
    int a[M][N], i, j, sum = 0;

    for (i = 0; i < M; ++i)
        for (j = 0; j < N; ++j)
        {
            a[i][j] = i + j;
            sum += a[i][j];
        }

    for (i = 0; i < M; ++i)
    {
        for (j = 0; j < N; ++j)
            printf("a[%d][%d]=%d ", i, j, a[i][j]);
        printf("\n");
    }

    printf("\nsum = % d\n ", sum);
}