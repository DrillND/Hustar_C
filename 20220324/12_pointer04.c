#include <stdio.h>
int main()
{
    int a[] = {5, 15, 25, 43, 12, 1, 7, 89, 32, 11};
    int *p = &a[1], *q = &a[5];

    /*
    1. *(p + 3) ?
    2. *(q - 2) ?
    3. q - p ?
    4. if ( p > q ) ?
    5. if ( *p > *q )?
    */

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("1. *(p + 3)? %d\n", *(p + 3));
    printf("2. *(q - 2)? %d\n", *(q - 2));
    printf("3. q - p? %d\n", q-p);
    printf("4. p > q? %d\n", p>q);
    printf("5. *p > *q? %d\n", *p>*q);

    return 0;
}