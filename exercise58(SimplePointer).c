/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program helps to understand about pointers
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() 
{

	//incrementing the value using the normal method
	int i = 0;
	printf("value: %d", i);
	i++;
	printf("\nvalue: %d", i);

	printf("\n\nPointer access only");

	//incrementing the value using pointers
	int* address = &i;
	printf("\nAccess value: %d", *address);
	printf("\nAdd value 1: %2d", *address + 1);
	i = *address + 1;
	printf("\nIncrement: %4d\n", ++(*address));

	return 0;
}