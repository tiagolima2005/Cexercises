//Exercise 3: Prime Number Check
//Write a program that receives a number from the user and checks if it is a prime number.
//The program should display a message indicating the result.

#include <stdio.h>

int main()
{
    int num, factor = 0;

    printf("Insert a number:\n");
    scanf("%d" , &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            factor++;
        }
    }

    if (factor == 2)
    {
        printf("The number you chose is a prime number.\n");
    }
    else
    {
        printf("The number you chose is not a prime number.\n");
    }

    return 0;
}