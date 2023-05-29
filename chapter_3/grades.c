#include<stdio.h>
int main()
{
    int m;
    printf("enter your marks: ");
    scanf("%d",&m);

    if(m<0 || m>100)
    {
        printf("wrong entry");
    }
    else if (m>=90 && m<=100)
    {
        printf("Grade A+");
    }
    else if (m>=80 && m<90)
    {
        printf("Grade A");
    }
    else if (m>=70 && m<=80)
    {
        printf("Grade B+");
    }
    else if (m>=60 && m<70)
    {
        printf("Grade B");
    }
    else if (m>=50 && m<60)
    {
        printf("Grade C+");
    }
    else if (m>=35 && m<50)
    {
        printf("Grade C");
    }
    else
    {
        printf("you are fail");
    }
    


return 0;
}