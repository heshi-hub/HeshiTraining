/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program determines the binary representation of a unsigned integer
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>
#include <math.h>

void printBinary(unsigned int value);

int main(void)
{
	unsigned int value;
	
	printf("Enter a non - negative integer: ");
	scanf("%u", &value);

	printBinary(value);

	return 0;
}

void printBinary(unsigned int value)
{
	printf("Binary: ");
	for (int i = 0; i < 16; i++)
	{
		printf("0");
	}

	// Now move the cursor back to the start of the binary representation
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");  // Move back 16 positions

	// Update and print the actual binary digits from right to left
	for (int i = 15; i >= 0; i--) 
	{
		if (value & (1 << i)) 
		{
			printf("1");
		}
		else 
		{
			printf("0");
		}
	}

	printf("\n");  // To move to a new line after finishing
}

