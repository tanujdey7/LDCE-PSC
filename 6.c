#include<stdio.h>
int main() {
    int a = 10;
    int b = 21;
    if((a+=a++) == b) {
        printf("Consecutive Fibonacci number");
    } else {
        printf("Not in fibonacci series");
    }
    return 0;
}