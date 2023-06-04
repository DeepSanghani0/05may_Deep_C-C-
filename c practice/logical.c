// logical operator && || !
/* && logical and operator
    || logical or operator
    ! logical not operator
*/
    #include<stdio.h>
    int main(){
        int a,b;
        printf("enter the value of a & b: ");
        scanf("%d %d",&a,&b);
        if (a>0 && b<0)
        {
            printf("TRUE");
        }
        else
        {
            printf("FALSE");
        }
        return 0;
    }