#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

int main()
{
    printf("Enter A: ");
    int a;
    scanf("%d", &a);
    printf("Enter B: ");
    int b;
    scanf("%d", &b);
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    swap(&a, &b);

    printf("Swapped A: %d\n", a);
    printf("Swapped B: %d\n", b);
    return 0;
}
