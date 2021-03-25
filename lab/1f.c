#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int num[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&num[i]);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += num[i];
    }

    printf("\nSum: %d",count);
    printf("\nAverage: %d",(count/n));
}