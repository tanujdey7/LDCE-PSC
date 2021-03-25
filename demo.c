#include<stdio.h>

int add(int *add1 , int *add2)
{
    return *add1 + *add2;
}
int main()
{
    int n, sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i = 0 ; i <=n;i++)
    {
        sum =add(&i, &sum);
    }
    printf("\n SUM : %d",sum);
}