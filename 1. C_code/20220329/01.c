#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char *name; /* 26 char 배열을 대신하여 4 byte pointer */
    int midterm[3];
    int final;
} STUDENT;

int main()
{

    STUDENT student = {"Hong Kil-Dong", {90, 75, 80}, 92};
    student.name = malloc(26 * sizeof(char));
    
    gets(student.name); /* error: name을 위한 저장공간이 없음*/
    printf("%s%d%d",student.name,student.midterm,student.final);
    return 0;
}