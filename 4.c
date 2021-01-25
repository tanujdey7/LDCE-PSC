#include<stdio.h>
int main() {
    int x = 2;
    int n = 5;
    float fact = 1;
    float pow = 1;
    for (int i = n; i >= 1; i--) {
        fact *= i;
        pow *= 2;
    }
    printf("Ans: %f",pow/fact);
    return 0;
}