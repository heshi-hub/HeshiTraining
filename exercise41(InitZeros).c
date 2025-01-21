/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program creates and prints two arrays
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a[100];
	int b[100] = { 0 };

	printf("Array 1: { ");

	for (int i = 0; i < 100; i++)
	{
		a[i] = 0;
		printf(" %d,", a[i]);
	}

	printf(" }\n\n");
	printf("Array 2: { ");

	for (int i = 0; i < 100; i++)
	{
		printf(" %d,", b[i]);
	}
	
	printf(" }");

	return 0;
}


