#include <stdio.h>
int main()
{
    int nchars;

    char p[] = "Hello! the world";
    char *q = "Hi, everybody";


    nchars = printf("%s", p);
    printf("\nnum of chars=%d\n", nchars); //printf를 출력. printf도 함수이기 때문에 숫자를 반환
    printf("%.5s\n", p);   // 5개의 문자만 출력
    printf("%s\n", &p[7]); // p[7]의 위치에서 부터 문자열 출력
    printf("%s\n", &q[2]);

    return 0;
}