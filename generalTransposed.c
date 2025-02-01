/*
*****************************************************************************************************
 * Provided file for lab exam.
 *****************************************************************************************************
 * Author: Heshini Jayaweera
 * Project: Generalized code for transposed matrix
 * Copyright: 2023, Marc Hensel
 * Version: 2023.09.19
 * License: CC BY-NC-SA 4.0, see https://creativecommons.org/licenses/by-nc-sa/4.0/deed.en
 ******************************************************************************************************
 */

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 4
#define COLUMNS 3

void transposeMatrix(int* matrix, int matrixT[][COLUMNS]);
void printTransposedMatrix(int matrixT[][COLUMNS]);

int main(void)
{
	int matrix[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	//printing original matrix
	printf("Original matrix\n\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			printf("%3d", matrix[i * COLUMNS + j]);
		}
		putchar('\n');
	}

	int matrixT[ROWS][COLUMNS];

	transposeMatrix(matrix,matrixT);
	printTransposedMatrix(matrixT);
	return 0;
}

void transposeMatrix(int* matrix,int matrixT[][COLUMNS])
{
	//converting given 1D array to 2D array
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			matrixT[i][j] = matrix[i * COLUMNS + j];
		}
	}
}

//printing transposed matrix (have to swap rows and columns in the conditions
void printTransposedMatrix(int matrixT[][COLUMNS])
{
	printf("\nTransposed Matrix\n\n");
	for (int i = 0; i < COLUMNS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			printf("%3d", matrixT[j][i]);
		}
		putchar('\n');
	}
}
