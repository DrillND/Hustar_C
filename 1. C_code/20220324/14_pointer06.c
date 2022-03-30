// ppt 3 pp.73

#include <stdio.h>
int main()
{
    int a[3] = {20, 7, -9}, *p, x,b,c,d;
    p = &a[1];

    /*
    i = *p++; printf(“%d %d”, i, *p) ;
    i = *++p ; printf (“%d %d”, i, *p) ;
    i = ++*p ; printf (“%d %d”, i, *p) ;
    i = (*p)++; printf (“%d %d”, i, *p) ;
    */
   
    x = *p++;
    printf("% d % d\n", x, *p);

    b = *++p;
    printf("% d % d\n", b, *p);

    c = ++*p;
    printf("% d % d\n", c, *p);

    d = (*p)++;
    printf("% d % d\n", d, *p);

    return 0;
}