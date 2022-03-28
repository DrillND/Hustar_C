// ppt5 pp.22

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    enum TV
    {
        SBS = 6,
        KBS2 = 7,
        KBS = 9,
        MBC = 11
    };

    enum TV ch1, ch2;
    ch1 = SBS + 1;
    ch2 = MBC;

    printf("Here are TV channel information \n");
    printf(" SBS : %2d\n", SBS);
    printf(" KBS2 : %2d\n", ch1);
    printf(" KBS : %2d\n", KBS);
    printf(" MBC : %2d\n", ch2);
    
    return 0;
}
