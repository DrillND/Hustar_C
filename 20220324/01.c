#include <stdio.h>

// ppt 3 pp.28

int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++) //배열 안에 값 넣기
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == j)
            {
                arr[i][j] = 0;
            }
            else if (i > j)
            {
                arr[i][j] = -1;
            }
            else if (i < j)
            {
                arr[i][j] = 1;
            }

            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
