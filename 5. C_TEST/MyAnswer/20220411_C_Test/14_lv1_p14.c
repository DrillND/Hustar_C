#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <math.h>

// 두 점 사이의 거리를 구하는 함수
double get_distance(double x1, double y1, double x2, double y2);

int main(void)
{
    int x1, x2, y1, y2;

    printf("input first nums <ex 12,45>");
    scanf("%d %d", &x1, &y1);
    printf("input second nums <ex 12,45> : ");
    scanf("%d %d", &x2, &y2);

    printf("outcome %f.\n", get_distance(x1, y1, x2, y2));
    return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}