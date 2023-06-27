#include<stdio.h>
int main(){
     int i,j,k,l,m,rows=10;
     for (int  i = 1; i < rows; i++)
     {
        for (int j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
     }
     
     for (int l = 0; l < 10 ; l++)
     {
         for (int m = 10; m >l; m--)
        {
            printf("$");
        }
     printf("\n");
     }
     
    return 0;
}