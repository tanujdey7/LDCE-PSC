#include<stdio.h>
int main() {
    int arr[] = {1,2,3,3,4,5,6,6,7,8,9};
    int length = sizeof(arr)/sizeof(int);
    int j = 0;
    printf("%d",length);
    for (int i = 0; i < length-1; i++) {
        if(arr[i] != arr[i+1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[length-1];
    for (int i = 0; i < j; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}