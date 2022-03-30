#include <stdio.h>

struct invent{
    char name[20];
    int number;
    double price;
};
int input(struct invent *);
void output(struct invent *, int num);

int main(){
    struct invent product[100];
    int num;

    num = input(product);
    printf("\nOUTPUT\n\n");
    output(product, num);

    return 0;
}

int input(struct invent *ptr){
    int i, num;

    printf("INPUT\n");
    printf("number of data: ");
    scanf("%d",&num);
    for(i=0; i<num; i++, ptr++){
        printf("input data %d: ",i);
        scanf("%s %d %lf", ptr->name, &ptr->number, &ptr->price);
    }
    return num;
}

void output(struct invent *ptr, int num){
    struct invent *p;
    p = ptr;
    for(; p <ptr + num; p++){
        printf("%-20s %5d %10.2f\n", p->name, p->number, p->price);
    }
}