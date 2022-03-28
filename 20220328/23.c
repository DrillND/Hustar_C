#include <stdio.h>

struct card
{
    char *face; // 포인터 face
    char *suit; // 포인터 suit
};

int main()
{
    struct card aCard;    // 구조체 변수 aCard 정의
    struct card *cardPtr; // struct card 포인터변수 정의
    // aCard에 string 대입
    aCard.face = "Ace";
    aCard.suit = "Spades";
    cardPtr = &aCard; // cardPtr에 aCard 주소 할당
    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, cardPtr->face, " of ", cardPtr->suit, (*cardPtr).face, " of ", (*cardPtr).suit);
}