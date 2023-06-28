#include<stdio.h>
int main(){
    int i,j,k,l,a=5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }

    return 0;
}