#include <stdio.h>
#include <math.h>
int main() {
int b;
int c;

printf("enter the value of b ");
scanf("%d", &b);

printf("enter the value of c ");
scanf("%d", &c);

int power = pow(b,c);
printf("%d^%d = %d",b,c,power);
    return 0;
}