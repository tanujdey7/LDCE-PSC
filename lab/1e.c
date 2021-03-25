#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int num[n];
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter Value: ");
        scanf("%d",&num[i]);
        count += num[i];
        printf("Sum: %d\n",count);
    }

    printf("\nSum: %d",count);
    printf("\nAverage: %d",(count/n));
}