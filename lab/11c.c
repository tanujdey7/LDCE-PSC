#include <stdio.h>
int main()
{
    int array[10];
    int i, n, sum = 0;
    int *ptr;
    printf("enter number of array");
    scanf("%d", &n);
    printf("\nEnter array elements :");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    ptr = array;

    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nThe sum is: %d", sum);
}
