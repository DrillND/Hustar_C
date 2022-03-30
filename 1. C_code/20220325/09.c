//ppt4 pp.29
#include <stdio.h>

int read_line();

int main()
{
    //호출 문장
    char s[100];
    int n;
    n = read_line(s, 15);
    printf("% d % s\n", n, s);
    return 0;
}


int read_line(char str[], int n)
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0'; /* 문자열 종료 */
    return i;      /* 입력된 문자의 수를 되돌려 줌 */
}
