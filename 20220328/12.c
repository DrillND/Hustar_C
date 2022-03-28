#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, i, n, sum = 0;
    printf("An array will be created dynamically\nInput an array size n followed by n integers : ");
    scanf("%d", &n);

    a = calloc(n, sizeof(int)); // or a = malloc(n * sizeof(int) );

    for (i = 0; i < n; i++)
    {
        printf("Input value for array: ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    free(a);
    printf("\n%s%7d\n%s%7d\n\n", "Number of elements: ", n, "Sum of the elements: ", sum);

    return 0;
    
}