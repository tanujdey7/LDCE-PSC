#include<stdio.h>
int main() {
    int arr[] = {0,1,2,3,4,5,6};
    int temp = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        for (int j = 0; i < sizeof(arr)/sizeof(int); j++){
            if(i%2!=0) {
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d",arr[i]);
    }
    return 0;
}