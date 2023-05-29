
//ch-1 exercise-1.1
// Write a program to calculate perimeter of rectangle(take length and width  from user)
#include<stdio.h>
int main() {
    int length;
    int width;
printf("enter the value of length ");
scanf("%d", &length);

printf("enter the value of width ");
scanf("%d", &width);

printf("perimeter of rectangle is %d",(2*(length +width)));

    return 0;
}