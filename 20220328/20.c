#include <stdio.h>

struct
{
    int number;
    char name[20];
    int on_hand;
} part1;

int main()
{
    printf("Quantity on hand: ");
    scanf("%d", &part1.on_hand); /* scanf() 데이터 입력*/
    printf("Part name: ");
    scanf("%s", part1.name);
    part1.number = 258; /* 대입연산자 */
    printf("Part number : %d\n", part1.number);
    printf("Part name : %s\n", part1.name);
    printf("Quantity on hand : %d\n", part1.on_hand);
    part1.on_hand++; /* 증감연산자 */
    printf("Quantity on hand : %d\n", part1.on_hand);

    return 0;
}