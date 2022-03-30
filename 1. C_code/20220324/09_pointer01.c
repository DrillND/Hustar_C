#include <stdio.h>
int main()
{
    int *numPtr;    // 포인터 변수 선언
    int num1 = 10;  // int형 변수를 선언하고 10 저장
    numPtr = &num1; // num1의 메모리 주소를 포인터 변수에 저장

    printf("%p\n",numPtr); //numPtr의 값 즉 num1의 주소
    printf("%p\n",&numPtr); //numPtr의 주소값
    printf("%d\n",*numPtr); //numPtr의 값
    printf("%d\n",*&num1);
    return 0;
}