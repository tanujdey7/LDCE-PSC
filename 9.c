#include<stdio.h>
int main() {
    int num =122;
    int rem = 0;
    while (num!=0)
    {
        if(num%2==0) {
            printf("1");
        } else {
            printf("0");
        }
        num/=2;
    }
    
}