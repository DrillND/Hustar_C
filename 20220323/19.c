#include <stdio.h>
// ppt 3 pp.26
void print_a(int[][3]);

int main()
{
    int array1[][3] = {1, 2, 3, 4, 5, 6};
    int array2[2][3] = {7, 8};
    int array3[2][3] = {{9}, {0}};
    print_a(array1);
    print_a(array2);
    print_a(array3);
    return 0;
}

void print_a(int a[][3])
{
    int i, j;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("%5d ", a[i][j]);
        printf("\n");
    }
}