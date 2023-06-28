#include<stdio.h>
int main(){
    int a;
    for (int a = 5; a >=0; a--)
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}