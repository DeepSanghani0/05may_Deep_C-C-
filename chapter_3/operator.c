// write a program to  check given character is upper case or lower case
#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
        if (ch >= 'A' && ch <= 'Z') 
        {
            printf("upper case \n");
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("lower case \n");
        }
        else
        {
            printf("given character is not a english letter");
        }
    return 0;
 }