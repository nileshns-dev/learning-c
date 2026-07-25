#include <stdio.h>

int factorial(int n);

int main(){

    int n;
    printf("Enter a no.: ");
    scanf("%d", &n);
    
    printf("%d\n", factorial(n));


    return 0;
}

int factorial(int n){
    int fac=1;
    for (int i=1; i<=n; i++){
        fac*=i;
    }
    return fac;
}