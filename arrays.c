#include <stdio.h>

int countOdd(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printf("%d\n", countOdd(arr, n));
    
    return 0;
}

int countOdd(int arr[], int n){
    int count=0;
    for (int i=0; i<=n-1; i++){
        if (arr[i]%2==1){
            count+=1;
        }
    }
    return count;
}