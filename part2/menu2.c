#include <stdio.h>

int menu();
int printFibonacci(int n);
int dateChecker(int day, int month, int year);

int main()
{
    int number, userChoice, d, m, y;
    
    // Main loop continues until user chooses to quit (option 3)
    do
    {
        userChoice = menu();
        switch(userChoice)
        {
            case 1:
                // Loop until user enters a positive integer
                do
                {
                    printf("Enter a positive integer: "); 
                    scanf("%d", &number);
                } while (number < 0);
                
                printf("-----> ");
                printFibonacci(number);
                break;
            
            case 2:
                // Prompt user to enter date in dd/mm/yy format
                printf("Insert Date (dd/mm/yy): ");
                scanf("%d/%d/%d", &d, &m, &y);
                
                if (dateChecker(d, m, y))
                    printf("----> Valid Date\n");
                else
                    printf("----> Invalid Date\n");
                break;

            case 3:
                printf("Good bye!\n");
                break;
            
            default:
                printf("*******Invalid choice!*******\n");
                // Reset user choice to avoid infinite loop
                userChoice = 0;

        }
    } while (userChoice != 3);
}

int menu()
{
    int choice;
    printf("1- Print Fibonacci\n");
    printf("2- Date Checker\n");
    printf("3- Quit\n");
    printf("Select an operation: ");
    scanf("%d", &choice);
    return choice;
}

int printFibonacci(int n)
{
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int count = 2; count < n; count++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c; 
    }
    printf("\n");
}


int dateChecker(int day, int month, int year)
{
    // Set initial maximum days in a month (excluding February)
	int maxDays = 31;
	
    // Handle invalid day or month values
	if (day < 1 || day >31 || month < 1 || month > 12)
		return 0;
    
    // Adjust max days for months with 30 days
	if (month == 4 || month == 6 || month ==9 || month == 11)
		maxDays = 30;

    // Handle February differently based on leap year conditions
	if (month == 2)
	{
		if (year % 400 ==0 || year % 4 ==0 && year % 100 != 0)
			maxDays = 29;
		else
			maxDays =28;
	}

    // Check if day is within the valid range for the given month
	return day <= maxDays;	
}