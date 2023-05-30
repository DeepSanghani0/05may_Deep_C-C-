// write a program to print smallest number from given two numbers

#include<stdio.h>
#include<math.h>
int main(){
 
int x;
int y;

printf("enter the value of x: " );
scanf("%d", &x);

printf("enter the value of y: " );
scanf("%d", &y);

// x<y ? printf("smallest number is %d",x) : ("smallest number is %d",y);

                        //OR
if (x<y){
 printf("smallest number is %d",x);
}
else{
    printf("smallest number is %d",y);
}


    return 0;
}
