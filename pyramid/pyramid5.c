#include<stdio.h>
   void pyramid(){
    int i,j,k;
    for (int i = 1; i < 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int l = 0; l < 5; l++)
    {
        for (int m = 0; m < l; m++)
        {
            printf(" ");
        }
        for (int n = 5; n > l; n--)
        {
            printf("* ");
        }
        
      printf("\n");  
    }
    }
   int main(){
    for (int i = 0; i < 5; i++)
    {
        pyramid();
    }
    
    pyramid();
return 0;
}

    



