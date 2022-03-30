#include <stdio.h>
#include <stdlib.h> // gets()
#include <string.h> // strcat()

int main()
{
    char num1[10], num2[10];
    int i;
    float f;

    printf("Input a number:");
    gets(num1);
    printf("Input a number:");
    gets(num2);

    i = atoi(num1);
    f = atof(num2);

    printf("\n%d, %f\n", i, f);
    printf("strcat(num1,num2)= %s\n", strcat(num1, num2));
    printf("num1+ num2= %f\n", i + f);
}