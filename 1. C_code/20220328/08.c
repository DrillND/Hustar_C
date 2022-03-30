// ppt5 pp.7
#include <stdio.h>
#include <stdlib.h> //동적 메모리 할당 라이브러리

int main()
{
    int n = 0, i = 0;
    int *data = NULL;
    printf("Input # of data:");
    scanf("%d", &n);
    data = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    free(data); //

    return 0;
}