//Demostrate do while loop
#include <stdio.h>
int main() 
{
    int choice, a, b;
    do {
        printf("Choose an operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2) 
		{
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }
        switch (choice) 
		{
            case 1:
                printf("Result: %d\n", a + b);
                break;
            case 2:
                printf("Result: %d\n", a - b);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}

