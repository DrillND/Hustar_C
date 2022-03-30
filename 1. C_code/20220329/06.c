#include <stdio.h>
#define CARDS 52
#define FACES 13
// 카드의 구조체 정의

struct card
{
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};

// new type name for struct card
typedef struct card Card;

void fillDeck(Card *wDeck, const char *wFace[], const char *wSuit[]);
void deal(const Card *wDeck);

int main(void)
{
    Card deck[CARDS]; // define array of Cards
    // initialize array of pointers
    const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    // initialize array of pointers
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    fillDeck(deck, face, suit); // load the deck with Cards
    deal(deck);
} // deal all 52 Cards

void fillDeck(Card *wDeck, const char *wFace[], const char *wSuit[])
{
    int i, j, k;
    for (i = 0; i < CARDS; ++i)
    {
        j = i % FACES;
        k = i / FACES;
        wDeck[i].face = wFace[j];
        wDeck[i].suit = wSuit[k];
    }
}
void deal(const Card *wDeck)
{
    int i;
    for (i = 0; i < CARDS; ++i)
    {
        printf("%5s of %-7s", wDeck[i].face, wDeck[i].suit);
        if (!((i + 1) % 4))
            putchar('\n');
    }
}