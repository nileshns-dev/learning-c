#include <stdio.h>

int largestDigit(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The largest digit is %d\n", largestDigit(n));
    
    return 0;
}

int largestDigit(int n){
    int z=0;
    for (int i=1; n>0; i++){
        int a=n%10;
        n/=10;
        if (z>=a){
            z=z;
        }
        else{
            z=a;
        }
    }
    return z;
}