/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program prints a single charaacter from the keyboard after reading it from the user input 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("Enter a single character: ");
	scanf("%c", &ch);
	while (getchar() != '\n');

	printf("\n%c is the single character you entered\n", ch);

	return 0;
}
