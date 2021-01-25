/*
(c) github.com/tanujdey7
*/
#include<stdio.h>
int main() {
    int sum = 0;
    int x = 0;
    for (int i = 1; i <= 11; i++)
    {
        if(i % 2 != 0) {
            if(x == 0) {
                sum+=i;
                x++;
            } else {
                sum-=i;
                x--;
            }
        } 
    }
    printf("%d",sum);    
}