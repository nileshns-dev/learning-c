#include <stdio.h>

void ops(int a, int b, int *sum, int *pro, int *avg);

int main(){
    int a=3, b=5, sum, pro, avg;
    ops(a, b, &sum, &pro, &avg);
    printf("Sum is %d, product is %d and average is %d\n", sum, pro, avg);
    return 0;
}

void ops(int a, int b, int *sum, int *pro, int *avg){
    *sum = a+b;
    *pro = a*b;
    *avg = (a+b)/2;
}