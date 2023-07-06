#include<stdio.h>
int main(){
    int i;
    int array1[3];
    for (int i = 0; i < 5; i++)
    {
    printf("enter the value of array[%d]",i);
    scanf("%d",&array1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]=%d \n",i,array1[i]);
    }
    
    return 0;
}