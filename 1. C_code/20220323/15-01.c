// ppt 3 p.22
#include <stdio.h>

#define M 3 /* number of rows */
#define N 4 /* number of columns */

int main()
{
    //int a[M * N];
    int b[M][N];
    int num;
    int sum;

    int c[4];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("input integer : ");
            scanf("%d", &num);
            b[i][j]=num;
        }
    }

    printf("\n\n");

    for(int i = 0; i< M; i++)
    {
        for(int j = 0 ; j<N; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------------\n");

    for(int i  = 0; i<N; i++) //4
    {
        sum = 0;
        for(int j = 0; j<M; j++) //3
        {
            sum = sum + b[j][i];
            c[i] = sum;
        }
    }

    for(int i = 0; i<4; i++)
    {
        printf("%d\t",c[i]);
    }

    printf("\n\n");
}