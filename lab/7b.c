#include <stdio.h>
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int a = power(x, n / 2);
    if (n % 2 == 0)
    {
        return a * a;
    }
    else
    {
        return x * a * a;
    }
}
int main()
{
    int x = 2;
    int n = 2;
    printf("%d", power(x, n));
    return 0;
}