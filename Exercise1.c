// Exercise 1: Factorial Calculation
// Write a program that receives a positive integer and calculates its factorial.
// The program should use a function to calculate the factorial.

#include <stdio.h>

void factorial();

int main()
{
    factorial();

    return 0;
}

void factorial()
{
    int integer;
    int factorial = 1;
    printf("Insert a positive number:\n");

    do
    {
        scanf("%d", &integer);

        if (integer < 0)
        {
            printf("Please insert a positive number:\n");
        }

    } while (integer < 0);

    for (int i = 1; i <= integer; i++)
    {
        factorial *= i;
    }

    printf("The factorial of your number is: %d", factorial);
}