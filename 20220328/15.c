#include <stdio.h>
typedef enum {
    Do = 1,
    Re = 2,
    Mi = 3,
    Fa = 4,
    So = 5,
    La = 6,
    Ti = 7} 
    Syllable;

void Sound(Syllable sy)
{
    switch (sy)
    {
    case Do:
        puts("도는 하얀 도라지\n");
        return;
    case Re:
        puts("레는 둥근 레코드\n");
        return;
    case Mi:
        puts("미는 파란 미나리\n");
        return;
    case Fa:
        puts("파는 예쁜 파랑새\n");
        return;
    case So:
        puts("솔은 작은 솔방울\n");
        return;
    case La:
        puts("라는 라디오고요~\n");
        return;
    case Ti:
        puts("시는 졸졸 시냇물\n");
        return;
    }
}
int main()
{
    Syllable tone;
    for (tone = Do; tone <= Ti; tone += 1)
        Sound(tone);
    return 0;
}