#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

void chart(int a, int b, int c, int d, int f)
{
    printf("*******Grade chart********\n");
    printf("A : ");
    for (int i = 0; i < a; i++)
    {
        printf("* ");
    }
    printf("\n");

    printf("B : ");
    for (int i = 0; i < b; i++)
    {
        printf("* ");
    }
    printf("\n");

    printf("C : ");
    for (int i = 0; i < c; i++)
    {
        printf("* ");
    }
    printf("\n");

    printf("D : ");
    for (int i = 0; i < d; i++)
    {
        printf("* ");
    }
    printf("\n");

    printf("F : ");
    for (int i = 0; i < f; i++)
    {
        printf("* ");
    }
    printf("\n");
    printf("**************************\n");
}

void avg(int a, int b, int c, int d, int f)
{
    int sum = a*4+b*3+c*2+d*1+f*0;
    int avg = sum/(a+b+c+d+f);

    printf("\n");
    printf("The Avg of the Class is %d\n",avg);
    printf("\n");
}

int main()
{
    int hakbun;
    int score;
    char grade;
    int exam1, exam2, exam3;
    int a = 0, b = 0, c = 0, d = 0, f = 0;

    while (1)
    {
        printf("input your hakbun : ");
        scanf("%d", &hakbun);

        if (hakbun == 0)
        {
            printf("\n");
            chart(a, b, c, d, f);
            avg(a, b, c, d, f);
            break;
        }

        if (hakbun > 0)
        {
            exam1 = rand() % (100 - 60 + 1) + 60; // n ~t
            exam2 = rand() % (100 - 60 + 1) + 60;
            exam3 = rand() % (100 - 40 + 1) + 40;
            score = exam1 * 0.2 + exam2 * 0.2 + exam3 * 0.6;

            if (score >= 90)
            {
                grade = 'A';
                a++;
            }
            else if (score >= 80)
            {
                grade = 'B';
                b++;
            }
            else if (score >= 70)
            {
                grade = 'C';
                c++;
            }
            else if (score >= 60)
            {
                grade = 'D';
                d++;
            }
            else if (score < 60)
            {
                grade = 'F';
                f++;
            }

            printf("%d : %d : %d", exam1, exam2, exam3);
            printf("\n");

            printf("Score for %d : %d", hakbun, score);
            printf("\n");
            printf("Grade for %d : %c", hakbun, grade);
            printf("\n");
            printf("\n");
        }
    }

    return 0;
}
