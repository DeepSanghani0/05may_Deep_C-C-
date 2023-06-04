#include<stdio.h>
#include<math.h>
int main(){
    int calc;
    printf("if you want to do addition press 1, substraction 2,multiply 3, devide 4: ");
        // multiplication :3
        // devide :4
        // then pres number 
    scanf("%d",&calc);
    switch (calc)
    {
    case 1 :{
        int a,b;
        printf("enter the value of a & b: ");
        scanf("%d %d",&a,&b);
        printf("sum of given number is %d \n",a+b);
        break;
    }
    case 2 :{
        int a,b;
        printf("enter the value of a & b: ");
        scanf("%d %d",&a,&b);
        printf("substraction of given number is %d \n",a-b);
        break;
    }
    case 3 :{
        int a,b;
        printf("enter the value of a & b: ");
        scanf("%d %d",&a,&b);
        printf("multiplication of given number is %d \n",a*b);
        break;
    }
    case 4 :{
        float a,b;
        printf("enter the value of a & b: ");
        scanf("%f %f",&a,&b);
        printf("division of given number is %f \n",a/b);
        break;
    }
    default:{
        printf("enter valid number");
        break;
    }
    }
    return 0;
}
