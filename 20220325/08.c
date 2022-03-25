//ppt 4 pp.26
#include <stdio.h>
int main()
{
    char a[15]; 
    char *b;
    b = &a[4];


    scanf("%s", b);
    scanf("%s", a);


    printf("%s\n %s\n", a, b);
    return 0;

}