#include <stdio.h>
float maxheight(float v, float x)
{
    float t, h;
    t = sine(x);
    h = (0.5 * v * v * t * t) / 32.2;
    return h;
}
float conversation(float v)
{
    float t;
    t = (v * 5280) / 3600;
    return t;
}
float sine(float x)
{
    int i;
    float t, sum;

    x = (x * 3.14) / 180;
    t = x;
    sum = x;
    for (i = 1; i <= 5; i++)
    {
        t = (t * (-1) * x * x) / (2 * i * (2 * i + 1));
        sum = sum + t;
    }
    return sum;
}
int main()
{
    float x, v;
    double total;
    printf("\n Enter the value of x :");
    scanf("%f", &x);
    total = sine(x);
    printf("\nEnter velocity of ball of which it fall :");
    scanf("%f ", &v);
    v = converstion(v);
    total = maxheight(v, x);
    printf("\n The value of maximum height at angle %f is %f feet.:", x, total);
    return 0;
}
