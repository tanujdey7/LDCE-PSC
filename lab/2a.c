#include <stdio.h>
int main() {
    char fname[10];
    printf("Enter Firstname: ");
    gets(fname);
    printf("Enter Middlename: ");
    char mname[10];
    gets(mname);
    printf("Enter Lastname: ");
    char lname[10];
    gets(lname);
    printf("%s %s %s",fname,mname,lname);
    printf("\n%s %s %s",lname,fname,mname);
}