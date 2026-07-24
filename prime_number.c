#include <stdio.h>

int main(){
    int n, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=1){
        isPrime=0;
    }
    else {
        for (int i = 2; i<n; i+=1){
            if (n%i==0){
                isPrime=0;
                break;
            }
        }
    }
    if (isPrime==0){
        printf("%d is not prime.\n", n);
    }
    else {
        printf("%d is prime.\n", n);
    }
    
    return 0;
}