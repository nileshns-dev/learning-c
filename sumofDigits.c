#include <stdio.h>

int sumDigits(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d\n", sumDigits(n));

    return 0;
}

int sumDigits(int n){
    int sum=0;
    for (int i=1; n>0; i++){
        sum += n%10;
        n/=10;
    }
    return sum;
}