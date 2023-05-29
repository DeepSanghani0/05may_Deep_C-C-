#include<stdio.h>
#include<math.h>

int main(){

int a ;
printf("enter the value of a");
scanf("%d",&a);
a += 10;
 printf("a+10=%d \n",a);

int b ;
printf("enter the value of b");
scanf("%d",&b);
b -= 10;
 printf("b-10=%d \n",b);

 int c ;
printf("enter the value of c");
scanf("%d",&c);
c *= 10;
printf("c*10 = %d \n",c);

int d ;
printf("enter the value of d");
scanf("%d",&d);
d /= 10;
printf("d/10 = %d \n",d);

int e ;
printf("enter the value of e");
scanf("%d",&e);
e %= 10;
printf("e modulo 10 = %d",e);


    return 0;
}