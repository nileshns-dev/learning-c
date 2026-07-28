#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);

int main(){
    int a, b, op;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Do you want to add (1), subtract (2), multiply (3) or divide (4) them?");
    scanf("%d", &op);

    switch (op){
        case 1:
            printf("%d\n", addition(a, b));
            break;
        case 2:
            printf("%d\n", subtraction(a, b));
            break;
        case 3:
            printf("%d\n", multiplication(a, b));
            break;
        case 4:
            printf("%f\n", division(a, b));
            break;
    }

}

int addition(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
float division(int a, int b){
    return a/b;
}