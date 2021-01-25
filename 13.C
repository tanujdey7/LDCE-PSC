#include<stdio.h>
int main() {
    int count1 = 0;
    int count2 = 0;
    int temp = 0;
    for (int i = 1; i < 100; i++) {
        for (int j = 1; i < 100; i++) {
            temp = i;
            if(i % j == 0) {
                count1++;
            }
        }
    }
    printf("%d",count1);
    return 0;
}