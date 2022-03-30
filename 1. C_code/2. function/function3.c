#include <stdio.h>


char asc(char x,char y);


int main(){
    char x;
    char y;

    printf("Input Capital Letter : ");
    scanf("%c %c", &x,&y);
    printf("%c\n",asc(x,y));

    return 0;
}

char asc(char x,char y){
    char answer;
    char x = "a";
    return answer;
}

/*
#include <stdio.h>

void comp_capital(char cap1, char cap2); 

int main(){

    char cap1, cap2;

    printf("input capital letter: ");
    scanf("%c%c", &cap1, &cap2);
    comp_capital(cap1, cap2);

    //printf("%c %c\n", cap1, cap2);

    return 0;
}

void comp_capital(char cap1, char cap2){
    
    char temp;
    
    if(cap1 > cap2){
        temp = cap1;
        cap1 = cap2;
        cap2 = temp;
    }
    
    printf("%c %c\n", cap1, cap2);
}

*/