//ppt 4 pp.17

#include <stdio.h>
#define SIZE 10

char* copy1(char *s1, count char *s2);
char* copy2(char *s3, counst char *s4);



int main()
{
    char string1[SIZE];
    char *string2 = "Hello";
    char string3[SIZE];
    char string4[] = "Good Bye";

    copy1(string1, string2);
    printf("string1 = %s\n", string1);
    
    copy2(string3, string4);
    printf("string3 = %s\n", string3);

    return 0;
}

// array를 이용한 문자열 복사 s2를 s1으로
void copy1(char *s1, const char *s2)
{


}
// pointer를 이용한 문자열 복사 s2를 s1으로
void copy2(char *s1, const char *s2)
{


}