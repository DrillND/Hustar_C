#include <stdio.h>
int main()
{
    char *str = "Simple String";
    
    printf("1. puts ����:-------\n");
    puts(str);
    puts("������ ���ڿ� ���");
    printf("2.fputs ���� -------\n");
    fputs(str, stdout);
    printf("\n");
    fputs("������ ���ڿ� ���2", stdout);
    printf("\n");
    printf("3. end test--------\n");
    return 0;
}