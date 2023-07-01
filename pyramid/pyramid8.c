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
    for (int b = 0; b < 5; b++)
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

    }
        printf("\n");
    }
}
void pyramid2(){
    for (int i = 0; i <= 10; i++)
    {
        for (int c = 0; c < 5; c++)
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
        } 
        printf("\n");
    }
}
