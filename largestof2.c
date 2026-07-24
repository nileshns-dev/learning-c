#include <stdio.h>

int max(int a, int b);

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    
    int s = max(a, b);
    printf("the largest number is %d\n", s);
    
    return 0;
}

int max(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}