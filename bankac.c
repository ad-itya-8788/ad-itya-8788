#include <stdio.h>
float balance = 0.0; 

// Function to check balance
void checkBalance() 
{
    printf("Your current balance is: $%.2f\n", balance);
}

// Function to deposit money
void depositMoney()
{
    float deposit;
    printf("Enter deposit amount: ");
    scanf("%f", &deposit);
    
    if (deposit > 0) 
	{
        balance += deposit;
        printf("Deposited $%.2f successfully.\n", deposit);
    } 
	else
	 {
        printf("Invalid deposit amount.\n");
     }
}

// Function to withdraw money
void withdrawMoney() 
{
    float withdraw;
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdraw);

    if (withdraw > 0 && withdraw <= balance)
	 {
        balance -= withdraw;
        printf("Withdrawn $%.2f successfully.\n", withdraw);
     } 
	 else
	 {
        printf("Insufficient balance or invalid amount.\n");
     }
}

int main() 
{
    int choice;
    while (1) 
	{
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                printf("Thank you for using the system.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

