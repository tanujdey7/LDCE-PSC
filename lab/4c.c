#include <stdio.h>
int main()
{
    printf("Enter n");
    int n;
    scanf("%d", &n);
    int flag;
    for (int i = 2; i <= n; i++)
    {
        if (i == 1 || i == 0)
            continue;
        flag = 1;

        for (int j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", i);
    }
}