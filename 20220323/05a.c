#include <stdio.h>

//int total = 0; //전역변수

int addToTotal(int num)
{
    static int total = 0; //static을 활용한 지역변수
    total += num;
    return total;
}

int main(void)
{
    int num, i;
    
    for (i = 0; i < 3; i++)
    {
        printf("input%d:", i + 1);
        scanf("%d", &num);
        printf("total: %d \n", addToTotal(num));
    }
    return 0;
}