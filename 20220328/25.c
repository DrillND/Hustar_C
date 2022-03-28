#include <stdio.h>

// 전역 선언 공간
typedef struct
{
    char name[26];
    int midterm[3];
    int final;
} STUDENT;

int main()
{
    STUDENT student = {"Hong Kil-Dong", {90, 75, 80}, 92};
    int *p, total;

    p = student.midterm;
    total = *p + *(p + 1) + *(p + 2);
    /* Same as total=p[0]+p[1]+p[2]; */
    printf("%d",total);
    return 0;
}
