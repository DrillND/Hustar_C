#include <stdio.h>
//#define N
//ppt 4 pp.8
void bubble(int size, int a[])
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
   
}

int main()
{
    int array_size;
    int numbers;
    char i;
    char d;
    

    printf("input array size : ");
    scanf("%d", &array_size);
    printf("\n");
    

    int a[size]; //배열 형식 만들기

    for (int i = 0; i < size; i++) //배열 안에 값 생성
    {
        printf("input numbers %d: ", i + 1);
        scanf("%d", &numbers);
        a[i] = numbers;
    }

    bubble(size, a);

    return 0;
}