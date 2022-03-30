#include <stdio.h>

/*
길이가 7인 int형 배열 선언, 7개의 정수 입력
-입력된 정수에서 최댓값 찾기
-입력된 정수에서 최솟값 찾기
-입력된 정수의 합
*/

int main()
{
    int num;
    int a[7];

    // int arLen;
    // arLen = sizeof(a)/sizeof(int);

    for (int i = 0; i < 7; i++) //배열 안에 숫자 입력 받아서 배정
    {
        printf("input integer %d  : ", i + 1);
        scanf("%d", &num);
        a[i] = num;
        // printf("%d\n", a[i]);
    }

    int max = a[0];
    int min = a[0];
    int sum = 0;

    for (int i = 0; i < 7; i++) //배열 안에 최대값 구하기
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < 7; i++) //배열 안에 최소값 구하기
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < 7; i++) //배열 안에 값들의 합 구하기
    {
        sum = sum + a[i];
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("sum = %d\n", sum);
    return 0;
}
