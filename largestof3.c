#include <stdio.h>

int largestof3(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    printf("%d is the largest number.\n", largestof3(a,b,c));    
    return 0;
}

int largestof3(int a, int b, int c){
    if (a>=b && a>=c){
        return a;
    }
    else if (b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}