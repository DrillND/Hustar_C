
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("%3d", p[i]);
    }

    return 0;
}