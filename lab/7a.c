#include <stdio.h>
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return power(x, n / 2) * power(x, n / 2);
    }
    else
    {
        return x * power(x, n / 2) * power(x, n / 2);
    }
}
int main()
{
    int x = 2;
    int n = 2;
    printf("%d", power(x, n));
    return 0;
}