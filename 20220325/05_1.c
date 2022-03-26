//ppt 4 pp.17

#include <stdio.h>
#define SIZE 10

char* copy1(char *s1, const char *s2);
char* copy2(char *s3, const char *s4);



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


char* copy1(char *s1, const char *s2)
{
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s2++;
        s1++;
    }

    *s1 = '\0';
    
    return s1;
   
    
}

char* copy2(char *s3, const char *s4)
{
    int i = 0;

    while (s4[i] != '\0')
    {
        s3[i] =s4[i];
        i++;
    }

    s3[i] = '\0';

    return s3;
    
}

