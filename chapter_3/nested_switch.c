//WAP to check given number is positive or negetive
// if given number is positive then check it is odd or even 


#include<stdio.h>
int main(){
    int x;
    printf("enter the value off x: ");
    scanf("%d",&x);
    if (x>0){
        printf("Positive \n");
            if (x % 2 ==0){
                printf("even \n");
            }
            else{
                printf("odd \n");
            }
    }
    else{
        printf("Negetive \n");
    }
 return 0;
}