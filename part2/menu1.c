#include <ctype.h>
#include <math.h>
#include <stdio.h>

int menu();
int PerfectSquareNumber(int n);
void printMinMaxDigits(int n);


int main()
{
    int userChoice, number;
    
    // Main loop continues until user chooses to quit (option 3)
    do
    {
        // Display menu and get user choice
        userChoice = menu();

        switch(userChoice)
        {
            case 1:
                // Prompt for a positive integer for perfect square check
                do
                {
                    printf("Enter a positive integer: "); 
                    scanf("%d", &number);
                } while (number < 0);
                
                // Check if the number is a perfect square and print the result
                if (PerfectSquareNumber(number))
                    printf("-----> %d is a PerfectSquareNumber\n", number);
                else printf("-----> It's not a PerfectSquareNumber\n");
                break;

            case 2:
                // Prompt for a positive integer for min/max digit finding
                do
                {
                    printf("Enter an integer: ");
                    scanf("%d", &number);
                } while (number < 0);

                printMinMaxDigits(number);
                break;

            case 3:
                printf("Good bye!\n");
                break;

            default:
                printf("*******Invalid choice!*******\n");
                userChoice = 0;
            
        }
    } while (userChoice != 3); // Make sure the program to run until the user choice is 3
    fflush(stdin); // Clear the input buffer
    return 0;
}

int menu()
{
    int choice;
    printf("1- Process PerfectSquareNumber\n");
    printf("2- Print min, max digit in an integer\n");
    printf("3- Quit\n");
    printf("Select an operation: ");
    scanf("%d",&choice);
    return choice;    
}


int PerfectSquareNumber(int n)
{
    // Check if the ceiled square root is equal to the floored square root
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) 
        return 1;
    else
        return 0;
}


void printMinMaxDigits(int n)
{
    // Set max to 0 to make sure that the first digit is always the max and the opposite is true for min
    int max = 0, min = 9; 
    while (n)
    {
        int digit = n % 10; // Get the rightmost digit of the number
        if (digit > max)
            max = digit;
        if (digit < min)
            min = digit;
        n /= 10; // Remove the last digit
    }
    printf("-----> Min = %d, Max = %d\n", min, max);
}