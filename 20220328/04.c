#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Happy New Year";
    char *p, ch = 'a';
    p = strchr(s1, ch);
    printf("%c-- %s\n", *p, p);
    p = strrchr(s1, ch);
    printf("%c-- %s\n", *p, p);
}
