#include<stdio.h>
#include<string.h>
int main(){
    char fname[20];
    char lname[20];
    char *pointer1;
    char *pointer2;
    printf("enter your first name: ");
    scanf("%s",&fname);
    printf("enter your last name: ");
    scanf("%s",&lname);
    
    *pointer1=&fname;
    *pointer2=&lname;

    strcat(pointer1,pointer2);
    printf("your full name is %s",*pointer1);
    return 0;
}