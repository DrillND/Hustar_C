#include <stdio.h>

int main(void)
{
    int a, b;
    int result;

    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            if (a == b)
            {
                continue;
            }
            result = (a * 10 + b) + (b * 10 + a);
            if (result == 99)
            {
                printf("%d%d + %d%d = %d \n", a, b, b, a, result);
            }
        }
    }
    system("pause");
    return 0;
}