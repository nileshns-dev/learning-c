#include <stdio.h>

int isEven(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int s = isEven(n);
    if (s==1) {
        printf("Even\n");
    }
    
    else {
        printf("Odd\n");
    }

    return 0;
}

int isEven(int n){
    return (n%2==0);
}