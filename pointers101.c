#include <stdio.h>

int main(){
    int a=10;
    int b=20;
    int c=30;

    printf("%d, %p\n", a, &a);
    printf("%d, %p\n", b, &b);
    printf("%d, %p\n", c, &c);
    return 0;
}