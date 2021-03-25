#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += i;
    }
    printf("\nSum: %d",count);
    printf("\nAverage: %d",(count/n));
}