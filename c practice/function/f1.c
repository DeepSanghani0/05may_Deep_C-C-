#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main(){
    int a,b;
printf("enter the first number: ");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
printf("sum of a and b is %d",sum(a,b));
}