#include<stdio.h>
int fibo(int n) {
    if(n<=1) {
        return 1;
    }
    return n*fibo(n-1);
}
int main() {
    printf("%d",fibo(5));
    return 0;
}