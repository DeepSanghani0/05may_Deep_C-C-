//Write a program to concatenate the two string using pointer.
#include<stdio.h>
#include<string.h>
int main(){
    char fname[20];
    char lname[20];
    char *pointer1;
    char *pointer2;
    char fullname[40];
    printf("enter your first name: ");
    scanf("%s",&fname);
    printf("enter your last name: ");
    scanf("%s",&lname);
    
    pointer1=&fname;
    pointer2=&lname;

    strcat(*pointer1,*pointer2);
    fullname[40] = *pointer1;
    printf("your full name is %s",fullname);

    return 0;
}