#include <stdio.h>
int main() {
    printf("Enter fahrenheit: ");
    int f = 0;
    scanf("%d",&f);
    int c = (f-32)*5/9;
    printf("------------------\n");
    printf("|  %dF  |  %dC  |\n",f,c);
    printf("------------------");
}