#include<stdio.h>
 int no,i,multiply;
 char ch;
int main(){
    FILE *table;
   
    printf("enter no.: ");
    scanf("%d",&no);
    for (int i = 1; i <= 10; i++)
    {
        multiply=no*i;
    {
    table = fopen("table.txt","a");
    fscanf(table,"%d %d %d",&no,&i,&multiply);
    fprintf(table,"%d %d %d \n",no,i,multiply);
    fclose(table);
    }
    
    //read data from file
    table = fopen("table.txt","r");
    ch = fgetc(table);
    // fscanf(table,"%c",&ch);

    do
    {
        ch = fgetc(table);
        printf("%c",ch);
    } while (ch != EOF);
    
    printf("\n");
    fclose(table);
    }
    return 0;
}