#include <stdio.h>

float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float len, float bth);

int main(){
    float side = 3;
    float radius = 10;
    float len = 5;
    float bth = 6;
    
    printf("AreaSquare: %f\n", areaSquare(side));
    printf("AreaCircle: %f\n", areaCircle(radius));
    printf("AreaRectangle: %f\n", areaRectangle(len, bth));
    return 0;
}

float areaSquare(float side){
    return side*side;
}

float areaCircle(float radius){
    return 3.14*radius*radius;
}
float areaRectangle(float len, float bth){
    return len*bth;
}