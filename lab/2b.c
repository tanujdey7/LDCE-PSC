#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter String:");
    gets(str);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    printf("Length of string is: %d", len);
}