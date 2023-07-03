#include<stdio.h>
int main(){
    int a,i;
    for (int i = 1; i <= 7; i++)
    {
        // D

        {for (int  a = 0; a <= 5; a++)
        {   
            if (i==1 || i==7 || a==7|| a==1 )
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

        //E
        
        int k;
        for (int l = 0; l < 1; l++)
        {
            printf("* ");
        }
         for(int k = 0; k < 4; k++)
        {
            if (i==7 || i==1 || i==4 )
            {
                printf("* ");
            } 
            else if (i==2 || i==3 || i==5 || i==6)
            {
                printf("  ");
            }
        }
        for (int j = 1; j < 3; j++)
        {
            printf(" ");
        }

        //E
        int q;
        for (int r = 0; r < 1; r++)
        {
            printf("* ");
        }
         for(int q = 0; q < 4; q++)
        {
            if (i==1 || i==4 || i==7 )
            {
                printf("* ");
            } 
            else if (i==2 || i==3 || i==5 || i==6)
            {
                printf("  ");
            }
        }
        for (int j = 1; j < 3; j++)
        {
            printf(" ");
        }

        // P
        
            for (int j = 1; j <= 5; j++)
            {
                if (i==1 || i==4 || j==1)
                {
                    printf("* ");
                }
                else if (2<=j && j<5)
                {
                    printf("  ");
                }
                else if (j==5 && i==2 || i==3)
                {
                    printf("*");
                }   
            }
        printf("\n");
    }
    return 0; 
    }