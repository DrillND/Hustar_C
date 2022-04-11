#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

int arr_rnd(int size, int numPtr[]) // 난수 생성 및 배열에 입력
{
    for (int i = 0; i < size; i++)
    {
        int random = rand() % 10;
        printf("%d ", random);
        numPtr[i] = random;
    }
}

int prn_rnd(int size,int numPtr[]) // 배열에 입력된 값과 합 평균을 구하는 함수
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += numPtr[i]; 
    }

    printf("sum : %d\n",sum);
    printf("avg : %d\n",sum/size);
}

int main()
{
    int size;
    printf("input size of array : ");
    scanf("%d", &size);

    int *numPtr = malloc(sizeof(int) * size); // (int 크기 * 입력받은 크기)만큼 동적 메모리 할당

    arr_rnd(size, numPtr);
    printf("\n");
    prn_rnd(size, numPtr);


    free(numPtr); // 동적으로 할당한 메모리 해제

    return 0;
}
