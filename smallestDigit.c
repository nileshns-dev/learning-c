#include <stdio.h>

int smallestDigit(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The smallest digit is %d\n", smallestDigit(n));
    
    return 0;
}

int smallestDigit(int n){
    int z=9;
    for (int i=1; n>0; i++){
        int a=n%10;
        n/=10;
        if (z<=a){
            z=z;
        }
        else{
            z=a;
        }
    }
    return z;
}