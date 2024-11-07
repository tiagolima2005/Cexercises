//Exercise 5: Vowel Counter in a String
//Create a program that receives a string from the user and counts
//how many vowels (a, e, i, o, u) are present in the string.
//Display the total number of vowels found.

#include <stdio.h>
#include <string.h>

int main()
{
    char UserString[100];
    char vowels[] = {"aeiouAEIOU"};
    int vowelCount = 0;

    printf("Insert a string of your choice:\n");
    fgets(UserString, sizeof(UserString), stdin);
    UserString[strcspn(UserString, "\n")] = 0;

    for (int i = 0; UserString[i] != '\0'; i++)
    {
        if (strchr(vowels, UserString[i]) != NULL)
        {
            vowelCount++;
        }
        
    }
    
    printf("Total number of vowels found: %d\n", vowelCount);

    return 0;
}