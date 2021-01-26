#include<stdio.h>
int main() {
    printf("Enter number to find factorial: ");
    int n, fact = 1;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        fact*=i;
    }
    printf("Factorial is: %d",fact);
    return 0;
}