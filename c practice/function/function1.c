#include<stdio.h>
void pyamid(){
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    int main(){
        pyamid();
        return 0;
    }
