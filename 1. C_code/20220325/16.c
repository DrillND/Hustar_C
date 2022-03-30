// ppt 4 pp.49
#include <stdio.h>
#define MAXLINE 100

char *change(const char *s);

void read_in(char s[])
{
    int c, i = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    s[i] = '0';
}

int main()
{
    char line[MAXLINE];
    printf("\nWhat is your favorite line? ");
    read_in(line);
    printf("% s\n\n % s\n", "Here it is after being changed:", change(line));

    return 0;
}

char *change(const char *s)
{
    static char new_string[MAXLINE];
    char *p = new_string;
    *p++ = '\t';
    for (; *s != '\0'; ++s)
    {
        if (*s == 'e')
        {
            *p++ = 'E';
        }
        else if (*s == ' ')
        {
            *p++ = '\n';
            *p++ = '\t';
        }
        else
        {
            *p++ = *s;
        }
    }
    *p = '\0'; //마지막에 문자열은 널값이 있어야해서 넣음.
    return new_string;
}
