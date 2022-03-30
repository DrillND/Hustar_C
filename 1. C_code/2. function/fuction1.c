#include <stdio.h>

int avr3(int num1, int num2, int num3);


int main(){
    int num1, num2, num3;
    printf("input 3 integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("number %d, %d, %d are average %d\n",num1,num2,num3,avr3(num1,num2,num3));

    return 0;
}

int avr3(int num1, int num2, int num3){
    int avr;
    avr = (num1+num2+num3)/3;
    return avr;
}