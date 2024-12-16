//Note:this is not work on floting number so float type cast to integer
#include <stdio.h>
#include <math.h>
int i;
// Function to calculate square
void square(double num)
 {
    printf("Square: %.2f\n", num * num);
 }

// Function to calculate cube
void cube(double num) 
{
    printf("Cube: %.2f\n", num * num * num);
}

// Function to calculate square root
void squareRoot(double num) 
{
    if (num < 0) 
	{
        printf("Cannot calculate square root of a negative number.\n");
    } 
	else
	 {
        printf("Square Root: %.2f\n", sqrt(num));
    }
}

// Function to calculate absolute value
void absoluteValue(double num) 
{
    printf("Absolute Value: %.2f\n", fabs(num));
}

// Function to calculate factorial
long long int factorial(int num)
 {
    long long int fact = 1;
    if (num < 0) {
        printf("Factorial not possible for negative numbers.\n");
        return -1;
    }
    for(i=1;i<=num;i++)
	 {
        fact *= i;
     }
    return fact;
}

// Function to check even or odd
void checkEvenOdd(int num) 
{
    if (num % 2 == 0) 
	{
        printf("%d is Even\n", num);
    }
	else 
	{
        printf("%d is Odd\n", num);
    }
}

// Function to check if a number is prime
void checkPrime(int num) 
{
    if (num <= 1)
	 {
        printf("%d is not a prime number.\n", num);
        return;
     }
    for(i = 2; i <= num / 2; i++) 
	{
        if (num % i == 0) 
		{
            printf("%d is not a prime number.\n", num);
            return;
        }
    }
    printf("%d is a prime number.\n", num);
}

// Function to find remainder (num % 10)
void rem(double num) {
    printf("Remainder when divided by 10: %.2f\n", fmod(num, 10));
}

// Function to reverse the digits of the number
void reverseNumber(int num)
 {
    int reversed = 0;
    while (num != 0) 
	{
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed Number: %d\n", reversed);
}

// Function to find sum of digits of the number
int sumOfDigits(int num)
 {
    int sum = 0;
    while (num != 0)
	 {
        sum += num % 10;
        num /= 10;
     }
    return sum;
}

int main() 
{
    double num;
    int choice;
    while (1)
	 {
	 	
        printf("Enter a number: ");
        scanf("%lf", &num);
		int numInt = (int)num; // Casting to int for integer-based operations
        printf("\nChoose an operation:\n");
        printf("1. Square\n");
        printf("2. Cube\n");
        printf("3. Square Root\n");
        printf("4. Absolute Value\n");
        printf("5. Factorial\n");
        printf("6. Check Even/Odd\n");
        printf("7. Check Prime\n");
        printf("8. Find Remainder\n");
        printf("9. Reverse Number\n");
        printf("10. Sum of Digits\n");
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                square(num);
                break;
            case 2:
                cube(num);
                break;
            case 3:
                squareRoot(num);
                break;
            case 4:
                absoluteValue(num);
                break;
            case 5:
                {
                    long long int fact = factorial(numInt);
                    if (fact != -1) printf("Factorial: %lld\n", fact);
                    break;
                }
            case 6:
                checkEvenOdd(numInt);
                break;
            case 7:
                checkPrime(numInt);
                break;
            case 8:
                rem(num);
                break;
            case 9:
                reverseNumber(numInt);
                break;
            case 10:
                printf("Sum of digits: %d\n", sumOfDigits(numInt));
                break;
            case 11:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

