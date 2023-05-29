// write a program to check given character is digit or not
#include<stdio.h>
#include<math.h>
int main(){
    int number ;
    printf("enter a character or numbe: ");
    scanf("%d",&number);

    if (number>=0 && number<=9)
    {
        printf("given number is digit");
    }
    else
    {
        printf("given number is not a digit");
    }
return 0;
}