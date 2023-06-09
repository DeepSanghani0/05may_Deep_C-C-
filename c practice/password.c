#include<stdio.h>
int main(){
    char password[20],confpassword[20];
    printf("enter new password: ");
    scanf("%s",&password);
    printf("enter confirm password: ");
    scanf("%s",&confpassword);
    if (password!=confpassword)
    {
        printf("password doesn't match");
    }
    else
    {
        printf("loged in");
    }
    return 0;
}