#include<stdio.h>
int main() {
    int x1 = -12;
    int y1 = -15;
    int x2 = 22;
    int y2 = 5;
    float a = ((x1-x2)*2);
    float b = ((y1-y2)*2);
    float dist = a + b;
    printf("%f",dist);
}