#include <stdio.h>
int main()
{
    int *numPtr, *ptr2;
    int num1 = 10;
    numPtr = &num1;
    ptr2 = &num1;

    printf("%p: ", numPtr);
    printf("%d\n\n", *numPtr);
    printf("%p: ", ptr2);
    printf("%d\n\n", *ptr2);

    return 0;
}