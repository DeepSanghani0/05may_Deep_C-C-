#include<stdio.h>
int square(int a){
    return a*a;
}
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("square of given number is %d",square(a));
}