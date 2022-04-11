/*********************************************
작성일 : 2017.06.08
작성자 :
제목 : do~while문을 이용하여 소문자를 입력받아 대문자 출력하기
(단, getche를 사용할 것)
*********************************************/
#include <stdio.h>
#include <conio.h>
#define ESC 0x1b
 
int main()
{
char ch,upper;
 
do
{
printf("알파벳 소문자를 입력하시오. :");
ch = getche();
 
if(ch>='a'&&ch<='z')
{
upper = 'A'+ch - 'a';
printf("\n변환된 대문자는 %c입니다.\n",upper);
}
else
printf("\n");
}while (ch != ESC);
 
return 0;
}
 