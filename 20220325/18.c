#include <stdio.h>
#include <string.h>

int main()
{
    char origin[] = "HustarC_";
    char str1[20];
    // char str2[7];
    char str3[] = "srtcpy_example";
    strcpy(str1, origin); // 빈 배열 전체 복사
    // strcpy(str2, origin); // 배열길이 부족
    strcpy(str3, origin); // 꽉 차있는 배열 전체 복사
    printf("case1: %s\n", str1);
    // printf("case2: %s\n", str2);
    printf("case3: %s\n", str3);
    return 0;
}
//ppt4 pp.55