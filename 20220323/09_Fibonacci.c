#include <stdio.h>

int fibo(int num)
{
    if (num == 0 || num == 1 || num ==2) 
    {
        return 1; 
    }
   
    else 
    {
        return (fibo(num-1)+fibo(num-2)) ;
    }
    
}

int main()
{
    int num;

    printf("피보나치 수열 몇 항까지?  : ");
    scanf("%d",&num);
    printf("%d\n",fibo(num));

    return 0;

}