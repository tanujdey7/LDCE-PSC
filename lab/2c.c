#include <stdio.h>
#include <string.h>
int main() {
    char fname[10];
    printf("Enter Firstname: ");
    gets(fname);
    int f = strlen(fname);
    printf("Enter Middlename: ");
    char mname[10];
    gets(mname);
    int m = strlen(mname);
    printf("Enter Lastname: ");
    char lname[10];
    gets(lname);
    int l = strlen(lname);
    printf("Length of Firstname:%d\nLength of Middlename:%d\nLength of Lastname:%d",f,m,l);

}