#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int *p;

    p = &a;
    printf("a = % p\n", &a);
    printf("*p = % d\n\n", *p);

    p = &b;
    printf("b = % p\n", &b);
    printf("*p = % d\n\n", *p);
    
    p = &c;
    printf("c = % p\n", &c);
    printf("*p = % d\n\n", *p);

    return 0;
}