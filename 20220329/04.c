//ppt5 pp.60
#include <stdio.h>

struct invent
{
    char name[20];
    int number;
    double price;
};

int input(struct invent*);

int main()
{
    struct invent product[3], *p;
    int num;
    num = input(product);
    printf("\nOUTPUT\n\n");
    p = product;
    while (p < product + num)
    {
        printf("%-20s %5d %10.2f\n",p->name,p->number,p->price);
        p++;
    }
}

int input(struct invent*ptr)
{
    int i, num;
    printf("INPUT\n");
    printf("number of data: ");
    scanf("%d",&num);
    for (i = 0; i < num; i++, ptr++)
    {
        printf("input data %d:",i + 1);
        scanf("%s%d%lf",ptr->name,&ptr->number,&ptr->price);
    }
    return num;
}