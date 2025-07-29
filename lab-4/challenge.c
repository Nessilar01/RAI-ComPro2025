#include<stdio.h>

int main(){
    int choces=0,balance=0,deposit=0,withdraw=0;
    while (1)
    {
       printf("====== ATM MENU ======\n1.Check Balance\n2.Deposit Money\n3.Withdraw Money\n4.Exit\n");
       printf("Choose an option : ");
       scanf("%d",&choces);
       if (choces==1)
       {
        printf("Current Balance : %d\n",balance);
       }
       else if (choces ==2)
       {
        printf("Enter amount to deposit : ");
        scanf("%d",&deposit);
        balance = balance + deposit;
        printf("Deposit successful.\n");
       }
       else if (choces ==3)
       {
        printf("Enter amount to withdraw : ");
        scanf("%d",&withdraw);
        balance = balance - withdraw;
        printf("Withdrawal successful.\n");

       }
       else if (choces ==4)
       {
        printf("Thank you for using the ATM.\n");
        break;
       }
       return 0;
    }
    
}