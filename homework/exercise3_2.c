//chapter 3 ; exercise 3_3
//Write a program to check given  number is naturl or not
#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    number>0 ? printf("given number is natural") : printf("given number is not natural");


               //OR
        // if (number>0)
        // {
        //     printf("given number is natural");
        // }
        // else
        // {
        //     printf("given number is not natural");
        // }
        

    return 0;
}
