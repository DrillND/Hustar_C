#include <stdio.h>
// 전역 변수

void Add(int val); //함수 선언

int num = 0; // global variable, 0으로 초기화

int main()
{
    printf("num: %d \n", num);
    Add(3);
    printf("num:%d \n", num);
    num++;
    printf("num:%d \n", num);
    return 0;
}

void Add(int val)
{
    num += val; //전역변수 num에 val만큼 증가
}