#include <stdio.h>
//#include <stdlib.h> // gets()
#include <string.h> // strcat()

int main()
{
    char str1[100] = "handong", *str2 = "handong";
    if (str1 == str2) /* false */ // 주소가 같은지?
        printf("same address\n");
    if (strcmp(str1, str2) == 0) /* true */ //strcmp 문자열 스트링끼리 같은지?
        printf("equal\n");
    printf("length = % d\n", strlen(str1));

    return 0;
}