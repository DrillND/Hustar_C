#include <stdio.h>
int main()
{
    int array_s, row, col;
    printf("Enter size of 1-D array: ");
    scanf("%d", &array_s);

    printf("Enter row and column sizes of 2-D array: ");
    scanf("%d %d", &row, &col);

    int array_1[array_s];
    int array_2[row][col];

    printf("1D array size : %d \n", sizeof(array_1));
    printf("2D array size : %d \n", sizeof(array_2));
    printf("2D row size : %d \n", sizeof(array_2[0]));
}