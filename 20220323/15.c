// ppt 3 p.22
#include <stdio.h>

#define M 3 /* number of rows */
#define N 4 /* number of columns */

int main()
{
    int a[M*N];
    int b[M][N];
    int num;

    for (int i = 0; i < M * N; i++) // 12개의 숫자 입력 받기
    {
        printf("input integer : ");
        scanf("%d", &num);
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            //printf("%5d", a[i][j]);
            printf("\n");
        }
    }
}