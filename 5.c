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
    int r = 2;
    int n_r = n - r;
    int nFact = fact(n);
    int rFact = fact(r);
    int n_rFact = fact(n_r);
    printf("%d",nFact/(rFact*n_rFact));
    return 0;
}