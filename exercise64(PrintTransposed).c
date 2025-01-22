/*
Name: Heshini Vidhara Jayaweera
Module: Software Construction

Description: This program prints a 2D matrix which is passed to a function as a 1D array and transposes the matrix and prints it
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void transposeNxN(int* A, int N);//Function to swap the values in the triangular sections above and below the diagonal
void printMatrix(int* A, int N);//Print the matrix

int main() 
{
	int N = 4;
	int a[] = { 11,12,13,14,21,22,23,24,31,32,33,34,41,42,43,44 };
	
	printf("Matrix A:\n");
	printMatrix(a, N);

	transposeNxN(a, N);

	printf("\nMatrix A^T:\n");
	printMatrix(a, N);

	return 0;
}

//Function to swap the values in the triangular sections above and below the diagonal
void transposeNxN(int* A, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) { // Swap elements A[i][j] and A[j][i]
			int temp = A[i * N + j];
			A[i * N + j] = A[j * N + i];
			A[j * N + i] = temp;
		}
	}
}

//Print the matrix
void printMatrix(int* A, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", A[i * N + j]);
		}
		printf("\n");
	}
}