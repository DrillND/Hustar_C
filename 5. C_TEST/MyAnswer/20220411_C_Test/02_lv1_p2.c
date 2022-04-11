#include <stdio.h>

int main()
{
    int i = 0;
    char input;
    int num;

    do
    {
        

        printf("input : "); // input을 통해 값을 입력합니다.
        scanf("%c", &input);
        if ('a' <= input && input <= 'z')
        {
            printf("%c\n", input - 32);

        }
        else 
        {
            num = 11;
            printf("error\n");
        }
        
        

    } while (input<='a');
    

    return 0;

}