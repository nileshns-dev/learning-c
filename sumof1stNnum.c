#include <stdio.h>

int sum1stNnum(int n);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d\n", sum1stNnum(n));

    return 0;
}

int sum1stNnum(int n){
    int sum = 0;
    for (int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}