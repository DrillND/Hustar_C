#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "abc";
    char str2[] = "def";
    char str3[] = "ghi";
    strcat(str1, str2);
    printf("strcat: %s\n", str1);
    strncat(str1, str3, 2);
    printf("strncat: %s\n", str1);
    return 0;
}