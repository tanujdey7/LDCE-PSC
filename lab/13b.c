#include <stdio.h>
double sq_root(double x)
{
    double rt = 1, ort = 0;
    while (ort != rt)
    {
        ort = rt;
        rt = ((x / rt) + rt) / 2;
    }
    return rt;
}
int main(void)
{
    int i;
    int a = 10;
        printf("square root of %d is %f\n", a, sq_root(a));
    
}