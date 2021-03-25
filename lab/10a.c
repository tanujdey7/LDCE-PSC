#include<stdio.h>
int fact(int n) {
    if(n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int main() {
    int n = 5;
    int nFact = fact(n);
    printf("%d",n*nFact);
    return 0;
}