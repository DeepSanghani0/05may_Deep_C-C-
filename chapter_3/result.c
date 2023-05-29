#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks(1-100): ");
    scanf("%d",&marks);
        if (marks>30 && marks<=100)
        {
            printf("passed");
        }
        else if ( marks<=30 && marks>0)
        {
            printf("failed");
        }
        else printf("enter a velid marks!");
 return 0;
}