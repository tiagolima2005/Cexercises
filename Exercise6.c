// Exercise 6: Temperature Conversion
// Write a program that converts a temperature given by the user
// from Celsius to Fahrenheit and vice-versa.
// The user should choose which conversion to perform.

#include <stdio.h>
#include <string.h>

int main()
{
    char answer;
    printf("Is your temperature Celsius or Fahrenheit?\n");
    printf("Type C for Celsius or F for Fahrenheit:\n");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C')
    {
        double celsius;
        printf("Insert the temperature in Celsius:\n");
        scanf("%lf", &celsius);
        double convertedFahrenheit = (9.0 / 5.0 * celsius) + 32;
        printf("Your temperature in Fahrenheit is: %.2lf F", convertedFahrenheit);
    }

    else if (answer == 'f' || answer == 'F')
    {
        double fahrenheit;
        printf("Insert the temperature in Fahrenheit:\n");
        scanf("%lf", &fahrenheit);
        double convertedCelsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("Your temperature in Celsius is: %.2lf C", convertedCelsius);
    }

    else
    {
        printf("Invalid input! Please type 'C' for Celsius or 'F' for Fahrenheit.\n");
    }

    return 0;
}