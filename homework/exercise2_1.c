#include<stdio.h>
int main() {

  int num1 ;
  int num2 ;
  int num3 ;
    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter second number: ");
    scanf("%d", &num2);

    printf("enter third number: ");
    scanf("%d", &num3);

    printf("avrage of given number is %d" , ((num1 + num2 + num3)/3));


    return 0;
}