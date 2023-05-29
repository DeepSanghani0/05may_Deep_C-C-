#include<stdio.h>
 int main() {

 int x;
 printf("enter the value of x: ");
 scanf("%d",&x);

 if (x%3==0)
 {printf("given number is divisible by 3");
 }
 else
 {printf("given number is not divisible by 3");
 }
    return 0;
}