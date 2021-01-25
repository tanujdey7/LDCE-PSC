#include<stdio.h>
int main() {
    int num = 123456;
    int sum = 0;
    int count = 0;
    while (num!=0) {
        sum += num % 10;
        num = num / 10;
        count++;
    }
    printf("Sum of digits: %d",sum);
    printf("\n");
    printf("Number of digits: %d",count);
}