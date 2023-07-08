#include<stdio.h>
struct marksheet{
    int sub1,sub2,sub3,sub4;
    int total;
    float percentage;
    char  name[60];
}st;
int main()
{   
    struct marksheet st[60];
    int i,a;
    for(i=1;i<=2;i++)
    {
        printf("enter the name:");
        scanf("%s",&st[i].name);
        printf("enter sub 1 marks:");
        scanf("%d",&st[i].sub1);
        printf("enter sub 2 marks:");
        scanf("%d",&st[i].sub2);
        printf("enter sub 3 marks:");
        scanf("%d",&st[i].sub3);
        printf("enter sub 4 marks:");
        scanf("%d",&st[i].sub4);
       
    }
    printf("\n---------------------------------------------------------\n");
    printf("name|\tsub1|\tsub2|\tsub3|\tsub4|\ttotal|\tpercentage|");
    printf("\n---------------------------------------------------------\n");
    for(i=1;i<=2;i++)
    {   
        st[i].total = st[i].sub1 + st[i].sub2 + st[i].sub3 + st[i].sub4;
        st[i].percentage = (st[i].total/4);
        printf("\n%s|\t%d|\t%d|\t%d|\t%d|\t%d|\t%.2f|",st[i].name,st[i].sub1,st[i].sub2,st[i].sub3,st[i].sub4,st[i].total,st[i].percentage);
        
    }
}