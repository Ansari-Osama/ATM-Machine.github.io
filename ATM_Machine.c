#include<stdio.h>
#include<stdlib.h>
void checkBalance();
void withdrawCash();
void cashDeposit();
void exitAccount(); 
float balance = 1000;
float deposit, withdraw;
int main()
{
    int ch;
    printf("\n *****Welcome to ATM*****");
    do
    {
        printf("\n");
        printf("\n 1: Balance Enquiry");
        printf("\n 2: Cash Withdraw");
        printf("\n 3: Cash Deposit");
        printf("\n 4: Exit");
        printf("\n Enter your Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            {
                checkBalance();
                break;
            }
            case 2:
            {
                withdrawCash();
                break;
            }
            case 3:
            {
                cashDeposit();
                break;
            }
            case 4:
            {
                exitAccount();
                break;
            }

        }
    }while(ch != 4);
    return 0;
}

void checkBalance()
{
    printf("\n The balance is %f ", balance);
}
void withdrawCash()
{
    printf("\n Enter Amount to Withdraw: ");
    scanf("%f", &withdraw);
    if(withdraw > balance)
    {
        printf("\n Insufficient Amount!");
    }
    else
    {
        balance = balance - withdraw;
    }
}
void cashDeposit()
{
    printf("\n Enter the Amount to be Deposited: ");
    scanf("%f", &deposit);
    balance = balance + deposit;
}
void exitAccount()
{
    exit(1);
}