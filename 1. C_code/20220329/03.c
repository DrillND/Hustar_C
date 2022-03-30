// ppt5 pp.59

#include <stdio.h>
struct card
{
    int pips;
    char suit;
} c1 = {5, 'd'};

void assign_values(struct card c)
{
    c.pips = 1;
    c.suit = 'c';
    printf("%d %c", c1.pips, c1.suit);
}

void assign_values2(struct card *c)
{
    c->pips = 1;
    c->suit = 'c';
    printf("%d %c", c1.pips, c1.suit);
}

int main(void)
{
    assign_values(c1);
    printf("%d %c", c1.pips, c1.suit);

    assign_values2(&c1);
    printf("%d %c", c1.pips, c1.suit);

    return 0;
}