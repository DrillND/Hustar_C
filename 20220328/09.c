// ppt5 pp.9
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(3 * sizeof(int)); // (int *) int 포인터형 강제 변환의 값, 3칸 * 사이즈

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", p[i]);
    }
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%3d", p[i]);
    }

    return 0;
}