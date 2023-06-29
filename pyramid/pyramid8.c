#include<stdio.h>
void pyramid1();
void pyramid2();
int main(){
    for (int i = 0; i < 3; i++)
    {
    pyramid1();
    pyramid2();
    }
    return 0;
}
void pyramid1(){
    for (int  i = 0; i <= 10; i++)
    {
    
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int l = 10; l >= i; l--)
        {
        printf("  ");
        }
        for (int m = 0; m <= i; m++)
        {
            printf("*");
        }

        for (int n = 0; n <= i; n++)
        {
            printf("*");
        }
        for (int o = 10; o >= i; o--)
        {
        printf("  ");
        }
        for (int p = 0; p <= i; p++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
void pyramid2(){
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 10; j >= i; j--)
        {
            printf("*");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("  ");
        }
        for (int l = 10; l >= i; l--)
        {
            printf("*");
        }    

        for (int q = 10; q >= i; q--)
        {
            printf("*");
        }
        for (int r = 0; r <= i; r++)
        {
            printf("  ");
        }
        for (int s = 10; s >= i; s--)
        {
            printf("*");
        }        
        printf("\n");
    }
}
