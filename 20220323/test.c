#include <stdio.h>

void print_back();

int main()
{
    printf("input character: ");
    print_back();
    printf("\n");
    return 0;
}

void print_back()
{
    char ch;
    ch = getchar();
    // if (ch != '\n')
    // {
    //     print_back();
    // }
    //putchar(ch);
}