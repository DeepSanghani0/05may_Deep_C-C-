#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main(){
    int x,y;
    printf("enter first number: ");
    scanf("%d",&x);
    printf("enter second number: ");
    scanf("%d",&y);
    int s= sum(x,y);
    printf("sum is %d",s);
    return 0;

}