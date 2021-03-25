#include<stdio.h>
int main() {
    printf("Enter a: ");
    int a;
    scanf("%d",&a);
    printf("Enter n: ");
    int n;
    scanf("%d",&n);
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        count += a*i; 
    }
    printf("a0 + a1 + a2 +.....+ an-1: %d",count);
    
}