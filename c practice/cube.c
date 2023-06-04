#include<stdio.h>
int main(){
    int num;
    printf("enter any number: ");
    scanf("%d",&num);
    int squre=num*num;
    printf("squre of given number is %d. \n",squre);
    int cube=squre * num;
    printf("cube of given number is %d.",cube);
    return 0;
}