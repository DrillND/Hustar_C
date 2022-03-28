#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Happy New Year";
    char *p;
    p = strstr(s1, "py");
    printf("%c-- %s", *p, p);
}
