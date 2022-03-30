#include <stdio.h>
int main()
{
    char *str = "Simple String";
    
    printf("1. puts 실험:-------\n");
    puts(str);
    puts("간단한 문자열 출력");
    printf("2.fputs 실험 -------\n");
    fputs(str, stdout);
    printf("\n");
    fputs("간단한 문자열 출력2", stdout);
    printf("\n");
    printf("3. end test--------\n");
    return 0;
}