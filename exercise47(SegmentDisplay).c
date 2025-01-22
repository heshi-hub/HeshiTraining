/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program prints the corresponding value of the control wires from a to g of the user digit input
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 10

int main(void) {
	int i = 0;
	int inputDigit = 0;
	int contWires[SIZE][7] = { {1,1,1,1,1,1,0},		//the 2D array for entering the values of the control wire
				   {0,1,1,0,0,0,0},
				   {1,1,0,1,1,0,1},
				   {1,1,1,1,0,0,1},
				   {0,1,1,0,0,1,1},
				   {1,0,1,1,0,1,1},
				   {1,0,1,1,1,1,1},
				   {1,1,1,0,0,0,0},
				   {1,1,1,1,1,1,1},
				   {1,1,1,1,0,1,1},
	};

	printf("Please enter a digit: ");
	while (scanf("%d", &inputDigit) != 1 || inputDigit > 9 || inputDigit < 0)
	{
		printf("Invalid Input! Please try again");
	}
	i = inputDigit;

	printf("\n a | b | c | d | e | f | g |\n");
	printf("---+---+---+---+---+---+---+\n");

	if (i == inputDigit)		//equating the inputDigit to i so that can be used inside of the statement in for loops
	{
		for (; i < SIZE; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				printf(" %d |", contWires[i][j]);
			}
			printf("\n");
			break;
		}
	}
	return 0;
}