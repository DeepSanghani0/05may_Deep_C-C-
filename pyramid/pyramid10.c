#include<stdio.h>
int j()

    {
        for (int i = 0; i < 10; i++)
        {
            //J
            for (int j = 0; j < 10; j++)
            {
                if (i==0 )
                {
                    printf("* ");
                }
                else if (i<=8 && j<=4)
                {
                    if (i==8 && j==0)
                    {
                        printf("* ");
                    }
                    else{
                    printf("  ");
                    }
                }
                else if (  j==5)
                {
                    printf("* ");
                }
                 else if (i == 7 && j==1 )
                {
                    printf("* ");
                }
                else if (i == 9 && j<=4 )
                {
                    printf("* ");
                }
                else if (j>=6)
                {
                    printf("  ");
                }
                
            }
             //Y
             int j,k,l,m;
            for (int j = 0; j < 10 ; j++)
            {
                if (i<=5 && j<=i)
                {
                    printf("  ");
                }
                else if (i>=5 && j<6)
                {
                    printf("  ");
                }
                
            }
            for (int k = 0; k < 1 && i<=5; k++ )
            {
                printf("* ");
            }
            for (int l = 4; l >= i; l--)
            {
                printf("    ");
            }
            for (int m = 0; m < 1 ; m++)
            {
                printf(" * ");
            }
            for (int n = 0; n < i; n++)
            {
                printf("-");
            }
            for (int o = 0; o <2; o++)
            {
                printf("?");
            }
            

        
            printf("\n");
        }
        
    }
int main(){
    j();
    return 0;
}