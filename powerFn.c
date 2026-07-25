#include <stdio.h>

int powerFn(int base, int exp);

int main(){
    int base, exp, result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("%d ^ %d is %d\n", base, exp, powerFn(base, exp));

    return 0;
}

int powerFn (int base, int exp){
    int result=1;
    for (int i=1; i<=exp; i+=1){
        result*=base;
        
    }
    return result;
}