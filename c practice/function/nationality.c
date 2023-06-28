#include<stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("enter f for french & i for indian: ");
    scanf("%c",&ch);
    if (ch == 'i')
    {
        namaste();
    }
    else if (ch == 'f')
    {
        bonjour();
    }
    else
    {
        printf("enter a valid charcter!");
    }
 return 0;
}

    void namaste(){
        printf(" namste!");
    }
    void bonjour(){
        printf("bonjour!");
    }