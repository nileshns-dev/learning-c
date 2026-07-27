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
    while (n>0){
        int digit=n%10;
        reversedNum = reversedNum*10+digit;
        n/=10;
    }
    return reversedNum;
}