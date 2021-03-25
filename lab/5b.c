#include<stdio.h>
int main() {
    int a[] = {1,2,3,4,5};
    for (int i = sizeof(a)/sizeof(int)-1; i >=0 ; i--)
    {
        printf("%d",a[i]);
    }
}