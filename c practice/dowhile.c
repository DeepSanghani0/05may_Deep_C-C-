#include<stdio.h>
#include<math.h>
int main(){
    int n;
    do
    {
        printf("enter the number: ");
        scanf("%d",&n);
        printf("%d \n",n);
        if (n % 2 !=0)
        {
            break;
        }
    } while (n=1);
    printf("thank you");
    return 0;
}