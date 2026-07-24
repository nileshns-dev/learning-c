#include <stdio.h>
int main(){
    float c;
    float f;
    printf("enter temperature in Celsius: ");
    scanf("%f", &c);
    f=(c*9/5)+32;
    printf("temperature in Fahrenheit is: %f\n", f);
    return 0;
}