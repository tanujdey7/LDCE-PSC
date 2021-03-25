#include <stdio.h>
int main()
{
    int array[] = {1, 6, 2, 5, 3, 8, 9, 4};
    int *maximum, *minimum, i;
    maximum = array;
    minimum = array;

    for (i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        if (*(array + i) > *maximum)
        {
            *maximum = *(array + i);
        }
    }
    printf("Max: %d\n", *maximum);
    for (i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        if (*(array + i) < *minimum)
        {
            *minimum = *(array + i);
        }
    }
    printf("Min: %d\n", *minimum);
    return 0;
}