#include<stdio.h>
int main(){
    int a,b;
    char sign;
    printf("enter the value of a & b: ");
    scanf("%d %c %d",&a,&sign,&b);

    switch (sign)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default:
        printf("enter valid number & sign");
        break;
    }


    return 0;
}