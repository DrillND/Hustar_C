#include <stdio.h>

void simpleFunc(void)
{
    static int num1 = 0; //초기화 하지 않으면 자동으로 0초기화
    int num2 = 0;
    num1++, num2++;
    printf("static: %d, local: %d \n", num1, num2);
}

int main()
{
    for (int i = 0; i < 3; i++)
        simpleFunc();
    return 0;
}