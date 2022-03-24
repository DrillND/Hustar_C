#include <stdio.h>
#include <ctype.h>

//ppt 3 pp.41
int main()
{
    int c, i, letter[26] = {0};

    printf("input:");
    
    while ((c = getchar()) != EOF)
    {
        c = toupper(c);
        if (isalpha(c))
            ++letter[c - 'A']; //아스키코드로 빼기로 카운팅
    }

    for (i = 0; i < 26; ++i)
    {
        if (i % 6 == 0)
            printf("\n");
        printf("%4c:%3d", 'A' + i, letter[i]);
    }

    printf("\n\n");

    return 0;
}