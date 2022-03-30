#include <stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 4

double average(int x[][MAX_COLS]);

int main()
{
    double avg;
    int table[MAX_ROWS][MAX_COLS] = {{0, 1, 2, 3}, {10, 11, 12, 13}, {20, 21, 22, 23}};
    avg = average(table);
    printf("%lf\n", avg);
    return 0;
}

double average(int x[][MAX_COLS])
{
    int i, j;
    double sum = 0;
    for (i = 0; i < MAX_ROWS; i++)
        for (j = 0; j < MAX_COLS; j++)
            sum += x[i][j];
    return (sum / (MAX_ROWS * MAX_COLS));
}
