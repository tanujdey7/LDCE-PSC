#include <stdio.h>
int main() {
    int num = 9;
    for (int i = 2; i < num; i++)
    {
        if(num % i == 0) {
            printf("%d",i);
            break;
        }
    }
}