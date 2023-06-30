//ternary operator
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a : ");
   scanf("\n%d",&a);
   printf("enter the value of b : ");
   scanf("\n%d",&b);
   printf("enter the value of c : ");
   scanf("\n%d",&c);
   
(a > b && a > c) ? (printf("a is larger")) : ((b < c) ? (printf("b is medium")) : (printf("c is smallest")));

    return 0;
}