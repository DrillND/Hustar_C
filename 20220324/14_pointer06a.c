// ppt 3 pp.73

#include <stdio.h>
int main()
{
    int a[3] = {20, 7, -9}, *p, x,b,c,d;
    int *pp,*ppp,*pppp;

    p = &a[1];
    pp = &a[1];
    ppp = &a[1];
    pppp = &a[1];
   
   
    x = *p++;
    printf("% d % d\n", x, *p);

    b = *++pp;
    printf("% d % d\n", b, *pp);

    c = ++*ppp;
    printf("% d % d\n", c, *ppp);

    d = (*pppp)++;
    printf("% d % d\n", d, *pppp);

    return 0;
}