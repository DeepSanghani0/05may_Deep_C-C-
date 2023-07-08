#include<stdio.h>
int a[3][3];
int i,j;

int getdata(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }  
        printf("\n"); 
    }
}

int dislay(){
    for (int i = 0; i < 3; i++)
    {
        for (int J = 0; J < 2; J++)
        {
            printf("%d ",a[i][J]);
        } 
        printf("\n");  
    }
}

int main(){
    getdata();
    dislay();
    return 0;
}