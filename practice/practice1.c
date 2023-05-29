// write a program to check given numbre is natural od not
#include<stdio.h>
#include<math.h>
    int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    
    if (num>0)
    {
        printf("Given number is Natural");
    }
    else if (num==0) 
    {
        printf("given number is zero");
    }
    else
    {
        printf("Given number is Negetive");
    }
    
}
