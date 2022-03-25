#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count, i, s = 0;
    printf("#=%d, argv[0]=%s\n", argc, argv[0]);
    if (argc > 1)
    {
        for (count = 1; count < argc; count++)
        {
            printf("argv[%d] = %s\n", count, argv[count]);
        }
    }
    else
    {
        puts("No comand line arguments");
    }
    for (i = 1; i < argc; i++)
    {
        s += atoi(argv[i]);
    }

    printf("%d\n", s);
    return 0;
}

//외부에서 값을 받아서 보냄