//ppt 5 pp.45

#include <stdio.h>

struct product
{
    char pro_name[10]; 
    int pro_value;
    int p;
};

int main()
{
    struct product producta;
    struct product productb = {"Radio",15000};
    printf("제품명과 가격을 입력 : ");
    scanf("%s%d",producta.pro_name, &producta.pro_value);
    int sum = producta.pro_value + productb.pro_value;
    //productb.pro_name="RaRa";

    printf("\n\n");

    printf("제품명\t 가격\n");
    printf("==========================\n");

    printf("%s\t%d\n",producta.pro_name,producta.pro_value);
    printf("%s\t%d\n",productb.pro_name,productb.pro_value);
    

    printf("==========================\n");
    printf("sum\t%d\n",sum);
}