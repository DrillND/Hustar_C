#include <stdio.h>

int sumref(int a[]);
int sumval(int a, int b, int c);

int main()
{
    int arr[] = {3, 4, 5};
    int data1 = 3, data2 = 4, data3 = 5;
    printf("sumref: %d // ", sumref(arr));
    printf("main: %d\n", arr[0] + arr[1] + arr[2]);
    printf("sumval: %d // ", sumval(data1, data2, data3));
    printf("main: %d\n", data1 + data2 + data3);
    return 0;
}

int sumref(int a[])
{
    a[0] = 103;
    return a[0] + a[1] + a[2];
}

int sumval(int a, int b, int c)
{
    a = 103;
    return a + b + c;
}