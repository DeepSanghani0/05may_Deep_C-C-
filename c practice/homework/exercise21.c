 //ch-2 exercise-2.1
 /* write a program to check number is divisible by 2 or not   ****OR**** 
    write a program to check given numbvwer is even or odd
 */

// if number is even then output is 1 (even => 1);
// if number is odd then output is 0 (odd => 0);

#include<stdio.h>
int main() 
{
    int x;
    printf("enter the value of x ");
    scanf("%d",&x);
    printf("%d",x%2==0);
    return 0;
 }