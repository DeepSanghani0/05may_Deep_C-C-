//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
#include<math.h>
int main(){

    char key;
    printf("enter any key to check whether given character is upper case or lower case or special character");
    scanf("%c",&key);

    if (key>='A' && key<='Z') 
    {
        printf("giiven character is upper case \n");
    }
    else if (key>='a' && key<='z')
    {
        printf("given character is lower case \n");
    }
    else if (key>='0' && key<='9')
    {
        printf("given character is digit \n");
    }
    else
    {
        printf("given character is special sign \n");
    }
    
 return 0;
}