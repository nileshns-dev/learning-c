#include <stdio.h>

int countDigits(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("No. of digits is: %d\n", countDigits(n));

    return 0;
}

int countDigits(int n){
    int count = 0;
    if (n==0){
        return count = 1;
    }
    else {
        for (int i=1; n>0; i++){
        int a = n%10;
        count+=a/a;
        n /= 10;
        }
    }
    
    return count;
}
