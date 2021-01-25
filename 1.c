/*
(C) github.com/tanujdey7
*/
#include<stdio.h>
int main() {
    int a = 20;
    int b = 10;
    printf("Value of A: %d\n",a);
    printf("Value of B: %d\n",b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("Value of A: %d\n",a);
    printf("Value of B: %d\n",b);
    return 0;
}