#include <stdio.h>
struct shape
{
    int x, y;
    char name[10];
};

int main()
{
    struct shape s, *p = &s;
    scanf("%d %d %s", &p->x, &p->y, p->name);
    /*연산자 '->'는 '&'보다 우선순위가 높음
    &p->x == &(p->x)*/
    s.x = p->x * 2; /* p->x = s.x *2;와 같은 의미 */
    p->y = s.y % 5;
    printf("%d %d %s\n", p->x, p->y, p->name);
    return 0;
}
