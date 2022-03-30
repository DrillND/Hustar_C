#include <stdio.h>
int main()
{
    int a[10], *p = &a[0], i;
    for (i = 0; i < 10; i++)
    {
        a[i] = 0;
    }

    int a[10], *p = &a[0], i;
    for (; p <= &a[9]; p++)
    {
        *p = 0;
    }
    for (p = a; p <= &a[9]; p++)
    {
        printf("%d ", *p);
    }

    int a[10], *p = &a[0], i;
    for (; p <= &a[9];)
    {
        *p++ = 0;
    }
    for (p = a; p <= &a[9];)
    {
        printf("%d ", *p++);
    }
}