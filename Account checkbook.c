#include <stdio.h>
void main()
{
int a,balance,credit,debit,exit;
balance=0;
printf("*** ACME checkbook-balancing program ***\n");
printf("Enter your desired command:\n1. Clear the account balance: Enter 1\n2. Credit money to the account: Enter 2\n"
        "3. Debit money from the account: Enter 3\n4. Show current balance: Enter 4\n5. Exit: Enter 0\n\a");

for(;;)
{
printf("Enter command:");
scanf("%d", &a);
switch(a)
{
    case 1: balance=0; printf("Your balance wass cleared.\n"); break;
    case 2: printf("Enter credit amount: "); scanf("%d", &credit); balance += credit; printf("Your new balance is: %d\n", balance); break;
    case 3: printf("Enter debit amount: "); scanf("%d", &debit); balance -= debit; printf("Your new balance is: %d\n", balance); break;
    case 4: printf("Your account balance is: %d\n", balance); break;
    case 0: exit=1; break;
    default: printf("Invalid input."); break;

}

if( exit==1 ){ printf("Thank you.\a"); break;}
printf("\n");
}

}
