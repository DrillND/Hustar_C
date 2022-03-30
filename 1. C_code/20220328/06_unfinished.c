// ppt4 pp.62
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char *s1 = "Happy";
    char *s2 = "New Year";
    char s3[200];
    char *p;
    char *q;

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    p = strcpy(s1, s2);
    q = strncpy(s3, s1, 1);

    printf("strcpy(s1, s2) = %s", p);
    printf("strncpy(s3, s1, 1) = %s", q);

    return 0;
}