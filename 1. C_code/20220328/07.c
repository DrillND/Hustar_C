// ppt5 pp.7
#include <stdio.h>

int main()
{
    int n = 0, i = 0;
    int array[100];
    int *data = array;
    printf("Input #of data:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    return 0;
}