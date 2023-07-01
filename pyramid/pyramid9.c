#include<stdio.h>
int main(){
    int i,j,k,l;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int k = i; k > 0 ; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}