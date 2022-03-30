#include <stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 4

void print_square(int x[]);

int main()
{
    int row;
    int table[MAX_ROWS][MAX_COLS] = {{0, 1, 2, 3}, {10, 11, 12, 13}, {20, 21, 22, 23}};
    for (row = 0; row < MAX_ROWS; row++)
        print_square(table[row]);
    return 0;
}

void print_square(int x[])
{
    int col;
    for (col = 0; col < MAX_COLS; col++)
        printf("%6d", x[col] * x[col]); //%6d간격
    printf("\n");
}