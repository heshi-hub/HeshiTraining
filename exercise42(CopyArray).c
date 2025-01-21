/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program prints an array and prints a copy of the same array
*/

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void) {
	int original[] = { 1,3,4,5,6,7,12,45,56 };
	int copy[9];

	for (int i = 0; i < 9; i++) {
		copy[i] = original[i];
	}

	printf("original:  ");
	for (int i = 0; i < 9; i++) {
		printf("%d ", original[i]);
	}
	printf("\n");

	printf("copy    :  ");
	for (int i = 0; i < 9; i++) {
		printf("%d ", copy[i]);
	}
	printf("\n");

	getchar();
	return 0;
}