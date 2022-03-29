#include <stdio.h>
#include <string.h>

typedef struct{
    char pro_name[10];
    int pro_value;
}product;

int main(){
    product p1, p2, *radio = &p2;
    int sum;

    printf("제품명과 가격을 입력: ");
    scanf("%s %d",p1.pro_name, &p1.pro_value);
    //sprintf(radio->pro_name , "%s","Radio"); 
    strcpy(p2.pro_name, "Radio");
    radio->pro_value = 15000;
    sum = p1.pro_value + p2.pro_value;

    printf("제품명\t가격\n");
    printf("========================\n");
    printf("%s\t%d\n",p1.pro_name,p1.pro_value);
    printf("%s\t%d\n",p2.pro_name,p2.pro_value);
    printf("========================\n");
    printf("sum\t%d\n",sum);

    return 0;
}