#include <stdio.h>
#define N 6

int main()
{
    int a[] = {80, 41, 35, 90, 40, 20};
    int temp;

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = N - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}