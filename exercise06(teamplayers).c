/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program determines the number of pupils in each team of the athletic competition and the remaining number of pupils
*/

#define _CRT_NO_SECURE_DEPRECATE
#include <stdio.h>
#include <math.h>

int main(void)
{
	int totalStudents = 24 + 24 + 25 + 26;

	printf("Number of pupils in each team: %d\n", (int)(totalStudents / 8));
	printf("Remaining pupils: %d\n", (int)(totalStudents % 8));

	return 0;
}
