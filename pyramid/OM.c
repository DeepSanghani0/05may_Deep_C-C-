#include<stdio.h>
int main(){
    int a,i;
    for (int i = 0; i < 10; i++)
    {
        //O
        {for (int  a = 0; a <= 5; a++)
        {   
            if (i==0 || i==9 || a==9|| a==0 )
            {
                printf("* ");
            }
            else if (2 <= i >= 7 || 2<= a <= 4)
            {
                printf("  ");
            }
        }
        if ( a==5 || 1<=i<=6 )
        {
            printf("*");
        }
        for (int j = 0; j < 3; j++)
        {
            printf(" ");
        } 
         }
        
        //M
        for (int j = 1; j <=1; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <=1; l++)
        {
            printf("*");
        }
        for (int m = 1; m <= 10-i; m++)
        {
            printf("  ");
        }
        for (int n = 1; n <= 1; n++)
        {
            printf("*");
        }
        for (int o = 1; o <= i; o++)
        {
            printf(" ");
        }
        for (int p = 1; p <=1; p++)
        {
            printf("*");
        }
        for (int q = 0; q < 2; q++)
        {
            printf(" ");
        }
    printf("\n");
    }
    return 0;

}
