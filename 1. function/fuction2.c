#include <stdio.h>

// 함수 두 개를 사용해서 구현 
int p(int x);


int main(){
    int x;

    printf("Enter Value for x : ");
    scanf("%d", &x);
    printf("Polynomial value :  %d\n",p(x));

    return 0;
}

int p(int x){
    int pp;
    pp = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    return pp;
}

/*

#include <stdio.h>
//#include <math.h>
float power(float num1, int num2);
float poly(float x);

int main(){

    float x, result;

    printf("Enter value for x: ");
    scanf("%f", &x);

    result = poly(x);
    printf("Polynomial value: %f\n", result);
    return 0;
}
float power(float num1, int num2){
    float result = 1;

    for(int i=1; i<=num2; i++){
        result = result*num1;
    }
    return result;
}

float poly(float x){
    
    float result;

    result = 3*power(x,5) + 2*power(x,4) - 5*power(x,3) - power(x,2) + 7*x - 6;

    return result;
}

*/