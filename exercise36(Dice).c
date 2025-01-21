/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program rolls a dice 100 times and prints the resulting number and prints the average number rolled
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throwDice(); // Function to simulate a dice roll

int main(void)
{
    int rolls = 100;
    int sum = 0;

    srand(time(NULL)); // Initialize random number generator

    // Print the results in 4 rows with 25 numbers each
    for (int i = 1; i <= rolls; i++)
    {
        int result = throwDice();
        sum += result;

        printf("%d ", result);

        // Print a new line after every 25 numbers
        if (i % 25 == 0)
        {
            printf("\n");
        }
    }

    // Calculate and print the average roll value
    double average = (double)sum / rolls;
    printf("\nAverage roll: %.2f\n", average);

    return 0;
}

// Function to simulate a dice roll
int throwDice()
{
    return (rand() % 6) + 1; // Generates a random number between 1 and 6
}