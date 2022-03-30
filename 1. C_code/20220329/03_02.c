#include <stdio.h>

struct card
{
    int pips;
    char suit;
} c1;

void assign_values(struct card c)
{
    c.pips = 1;
    c.suit = 'c';
    printf("%d %c\n", c.pips, c.suit);
}
void assign_values2(struct card *c)
{
    c->pips = 1;
    c->suit = 'c';
}

int main()
{
    struct card c1 = {5, 'd'};
    assign_values(c1);
    printf("%d %c\n", c1.pips, c1.suit);
    assign_values2(&c1);
    printf("%d %c\n", c1.pips, c1.suit);

    return 0;
}