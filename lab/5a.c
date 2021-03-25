#include<stdio.h>
int gcd(int a , int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b,a%b);
}
int main() {
    int a = 24;
    int b = 12;
    printf("%d",gcd(a,b));
 }