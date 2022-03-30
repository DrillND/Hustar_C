
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", p[i]);
    }
    
    printf("\n");

    p = (int *)realloc(p, 5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
    return 0;
}