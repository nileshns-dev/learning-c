#include <stdio.h>

int reverseNumber(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The reversed number is %d\n", reverseNumber(n));

    return 0;
}

int reverseNumber(int n){
    int reversedNum=0;
    for (int i=1; n>0; i++){
        int a = n%10;
        reversedNum+=a;
        reversedNum*=10;
        n/=10;
        
    }
    return reversedNum/10;
}

// 123
// 3*10+2
//3
//32
//321
//
//
//