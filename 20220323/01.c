#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("In swap function:%d,%d\n", a, b);
}

int main()
{
    int a = 10, b = 20;
    printf("swap��: %d % d\n ", a, b);
    swap(a, b);
    printf("swap��: %d % d\n ", a, b);
    return 0;
}