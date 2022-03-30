#include <stdio.h>

void recursive(int num)
{
    if (num <= 0) //재귀탈출조건
    {
        return; //탈출
    }
    printf("Recursive call! %d \n", num);
    recursive(num - 1);
}

int main(void)
{
    recursive(3);
    return 0;
}