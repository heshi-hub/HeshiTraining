/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program determines the size of the data types char and int in standard bytes 
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>

int main(void)
{
	char name[] = { 'h', 'f' };
	int num[] = { 34,67 };

	// Array name is already an address bacause array name is pointer to the first element
	printf("Address of name[0]: %p\n", name);
	printf("Address of name[1]: %p\n", name + 1);
	printf("Size of char in memory: %zu byte (8 bits each)\n", sizeof(name[0]));//sizeof() operator to get the size of the data type

	printf("\nAddress of num[0]: %p\n", num);
	printf("Address of num[1]: %p\n", num + 1);
	printf("Size of char in memory: %zu bytes (8 bits each)\n", sizeof(num[0]));//sizeof() operator to get the size of the data type

	return 0;
}
