#include<stdio.h>
int main(){
    float c,f;
    printf("enter degree Celsius: ");
    scanf("%f",&c);
    f=((c*1.8)+32);
    printf("%f",f);
    return 0;
}