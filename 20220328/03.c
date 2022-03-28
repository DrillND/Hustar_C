#include <stdio.h>
#include <string.h>

int main()
{
    char origin[] = "HustarC_";
    char str3[] = "srtcpy_example";

    strcpy(str3, origin);
    printf("case 3 before: %s\n", str3);

    str3[8] = 'y';
    
    printf("case 3 after: %s\n", str3);
    return 0;
}