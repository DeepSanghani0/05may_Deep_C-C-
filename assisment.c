#include<stdio.h>
int prpizza=180,prburger=100,prdosa=120,pridli=50,choose,n,choise,total,total1,amount;
int menu()
{
    printf("1.pizza \t price = 180 rs/pcs \n 2.burger \t price = 100rs/pcs \n 3.dosa \t price = 120 \n 4.idli \t price = 50rs/pcs\n");
    printf("please enter your choosen item: ");
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
        printf("you have selected pizza\n");
        printf("please enter quantity: ");
        scanf("%d",&n);
        printf("amount = %d\n",n*prpizza); 
        amount = n*prpizza;
        break;
    case 2:
        printf("you have selected burger\n");
        printf("please enter quantity: ");
        scanf("%d",&n);
        printf("amount = %d\n",n*prburger); 
        amount = n*prburger;
        break;
    case 3:
        printf("you have selected dosa\n");
        printf("please enter quantity: ");
        scanf("%d",&n);
        printf("amount = %d\n",n*prdosa); 
        amount = n* prdosa;
        break;
    case 4:
        printf("you have selected idli\n");
        printf("please enter quantity: ");
        scanf("%d",&n);
        printf("amount = %d\n",n*pridli); 
        amount = n * pridli;
        break;
    }
}
int moreorder()
{
    printf("do you want to do more order? (press 1 for yes , press 0 for no)");
    scanf("%d",&choise);
    if (choise == 1)
    {
        total = amount;
        menu();
        display();
    }   
    else
    {
        printf("thankyou!");
    }
}
int display()
{
        total1 = total + amount;
        printf("total bill is %d \n", total1);
        moreorder();
        total = total1;
}
int main()
{
    menu();
    moreorder();
    display();
    return 0;
}