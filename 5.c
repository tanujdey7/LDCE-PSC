#include<stdio.h>
int main() {
    int n = 5;
    int r = 2;
    int n_r = n - r;
    int nFact = 1;
    int rFact = 1;
    int n_rFact = 1;
    for (int i = n; i >= 1 ; i--) {
        nFact*=i;
    }
    for (int i = r; i >= 1 ; i--) {
        rFact*=i;
    }
    for (int i = n_r; i >= 1 ; i--) {
        n_rFact*=i;
    }
    printf("%d",nFact/(rFact*n_rFact));
    return 0;
}