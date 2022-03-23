#include <stdio.h>
//ppt 3 p.22

int main()
{
    int a[3][4], i, j;
    int sum[4];
    sum[0] = 0;
    int num;

    for (int i = 0; i < 12; i++) //12개의 숫자 입력 받기


    
    {
        printf("input integer %d  : ", i + 1);
        scanf("%d", &num);
        
        
    }

    for (i = 0; i < 3; ++i)
    {

        for (j = 0; j < 4; ++j)
        {
            a[i][j] = i + j;
        }
        sum[i] = sum[i] + a[i][j];
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            printf("a[%d][%d]=%d ", i, j, a[i][j]);
        printf("\n");
    }

    printf("\nsum = % d\n ", sum);
}