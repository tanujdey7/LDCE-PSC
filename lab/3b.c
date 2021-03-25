#include <stdio.h>
int ctof(int c) {
    int f = (c*9/5) + 32;
    return f;
}
void main(){
    printf("Enter Celcius: ");
    int c = 0;
    scanf("%d",&c);
    int f = ctof(c);
    printf("------------------\n");
    printf("|  %dF  |  %dC  |\n",f,c);
    printf("------------------");
}