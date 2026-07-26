#include <stdio.h>

int swapDigits(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("%d\n", swapDigits(n));

    return 0;
}

int swapDigits(int n){
    int t, o;
    o=n%10;
    t=n/10;
    return 10*o+t;
}