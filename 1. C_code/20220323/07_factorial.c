#include <stdio.h>

int factorial(int num)
{
    if (num == 0) 
    {
        return 1; 
    }
    else
    {
        return (num*factorial(num-1)) ;
    }
    
}

int main()
{
    int num;

    printf("�� ���丮��? : ");
    scanf("%d",&num);
    printf("%d\n",factorial(num));

    return 0;

}