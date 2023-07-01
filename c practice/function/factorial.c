#include<stdio.h>
int fect(int no)
{
    if (no <= 1)
    {
        return 1;
    }
    return no * fect(no-1);
}

int main()
{   
    int no;
    printf("enter the number: ");
    scanf("%d",&no);
    printf("%d",fect(no));
    return 0;
}