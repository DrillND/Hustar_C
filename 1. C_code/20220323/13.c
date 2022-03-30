#include <stdio.h>

int main()
{
    int num;
    int a[10];

    for (int i = 0; i < 10; i++) //배열 안에 숫자 입력 받아서 배정
    {
        printf("input integer %d  : ", i + 1);
        scanf("%d", &num);
        a[i] = num;
    }

    printf("numbers in array : ");

    for (int i = 0; i < 10; i++) //배열 안에 숫자를 순서대로 출력
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
