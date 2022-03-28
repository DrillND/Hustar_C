#include <stdio.h>

struct complex
{
    double re;
    double im;
};

int main()
{
    struct complex c1, c2, *a = &c1, *b = &c2; /*구조체 변수 c1의 주소를 a에 복사 */
    /*구조체 변수 c2의 주소를 b에 복사 */
    c1.im = 1, c2.re = 1;
    a->re = b->re + 2; /* c1.re = c2.re + 2;와 같은 의미*/
    b->im = a->im - 3; /* c2.im = c1.im – 3;와 같은 의미 */
    printf("value : %f\n", b->im);
    printf("value : %f\n", a->re);
}