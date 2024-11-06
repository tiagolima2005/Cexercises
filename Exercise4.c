// Exercise 4: Array Sorting
// Write a program that asks the user to input 5 numbers into an array.
// Then, sort these numbers in ascending order and display the sorted array.

#include <stdio.h>

int main()
{
    int sort[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Insert a number:\n");
        scanf("%d", &sort[i]);
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                int temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sort[i]);
    }

    printf("\n");

    return 0;
}