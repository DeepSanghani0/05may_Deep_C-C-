#include <stdio.h>
int main(){
    int i,sum,n;
    sum=0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i+=2)
    {
        sum = sum + i;
    }
    printf(" sum of 1 to 5 is %d",sum);



    return 0;
}