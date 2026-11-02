#include <stdio.h>

void checkBalance(float balance)
{
    printf("\nYour current balance is: Rs. %.2f\n", balance);
}

float deposit(float balance)
{
    float amount;

    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance = balance + amount;
        printf("Money deposited successfully.\n");
        printf("New balance: Rs. %.2f\n", balance);
    }
    else
    {
        printf("Invalid amount.\n");
    }

    return balance;
}

float withdraw(float balance)
{
    float amount;

    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance.\n");
    }
    else
    {
        balance = balance - amount;
        printf("Money withdrawn successfully.\n");
        printf("Remaining balance: Rs. %.2f\n", balance);
    }

    return balance;
}

int main()
{
    int choice;
    float balance = 5000.0;

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\nThank you for using the ATM.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
