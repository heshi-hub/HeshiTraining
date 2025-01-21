/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program prints an array and inverts the elements in the original array and prints it again
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void) {
	int original[] = { 1,2,5,9,11,20,26 };

	printf("original:  ");
	for (int i = 0; i < 7; i++) {
		printf("%2d ", original[i]);
	}
	printf("\n");

	printf("Inverted:  ");
	for (int i = 6; i >= 0; i--) {
		printf("%2d ", original[i]);
	}
	printf("\n");

	return 0;
}