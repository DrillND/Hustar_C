#include <stdio.h>

struct
{
    int number;
    char name[20];
    int on_hand;
} part1 = {1, "Monitor", 10};

int main()
{

    printf("Part number: % d\n", part1.number);
    printf("Part name: % s\n", part1.name);
    printf("Quantity on hand: % d\n", part1.on_hand);

    return 0;
}