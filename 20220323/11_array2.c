#include <stdio.h>

// ppt 3 pp.12
/*
정수형 socre[10]을 선언하고 평균 계산
-사용자는 최대 10개까지의 값을 입력 할 수 있음
-사용자가 0을 입력하면 입력을 중단하고 입력한 점수의 평균을 출력
-평군은 소수점 3자리까지 출력
*/

int main()
{
    int num;
    int a[10];
    int cnt = 0;
    int sum=0;

    for (int i = 0; i < 10; i++) //배열 안에 숫자 입력 받아서 배정
    {
        printf("input integer %d  : ", i + 1);
        scanf("%d", &num);
        a[i] = num;
        cnt++;

        if (num == 0)
        {
            break;
        }
    }

    //배열 안의 숫자들 합.
    for (int j = 0; j < cnt - 1; j++)
    {
        
        sum = sum + a[j];
    }
    
    printf("\n");
    // printf("%d", cnt);
    printf("sum = %d cnt = %d average = %d", sum, cnt - 1, sum / (cnt - 1));
    return 0;
}
