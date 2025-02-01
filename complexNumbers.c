/*
*****************************************************************************************************
 * Provided file for lab exam.
 *****************************************************************************************************
 * Author: Heshini Jayaweera
 * Project: Complex number division
 * Copyright: 2023, Marc Hensel
 * Version: 2023.09.19
 * License: CC BY-NC-SA 4.0, see https://creativecommons.org/licenses/by-nc-sa/4.0/deed.en
 ******************************************************************************************************
 */

#include <stdio.h>
#include <math.h>

typedef struct {
	double real;
	double imag;
}complex;

/* Function prototypes (provided by examiner) */
double absolute(complex z);
complex add(complex a, complex b);
complex multiply(complex a, complex b);
complex divide(complex a, complex b);
double arguement(complex a);

/* Main function (provided by examiner) */
int main(void)
{
	complex z1 = { 3., 4. };
	complex z2 = { 2.0, -1. };
	complex sum, product, division;

	/* Print complex numbers to the console */
	printf("Input data:\n");
	printf("z1 = %.1f %+.1fj\n", z1.real, z1.imag);
	printf("z2 = %.1f %+.1fj\n", z2.real, z2.imag);

	/*Absolute values*/
	printf("\nAbsolute values:\n");
	printf("|z1| = %.3f\n", absolute(z1));
	printf("|z2| = %.3f\n", absolute(z2));

	/* Mathematical operations*/
	printf("\nMathematical operations:\n");
	sum = add(z1, z2);
	product = multiply(z1, z2);
	division = divide(z1, z2);

	printf("z1 + z2 = %.1f + %.1fj\n", sum.real, sum.imag);
	printf("z1 * z2 = %.1f + %.1fj\n", product.real, product.imag);
	printf("z1 / z2 = %.1f + %.1fj\n", division.real, division.imag);

	//Arguements of complex numbers
	printf("arg(z1) = %.1f\n", arguement(z1));
	printf("arg(z2) = %.1f\n", arguement(z2));

	//getchar();
	return 0;
}

double absolute(complex z)
{
	double abs = sqrt(pow(z.real, 2) + pow(z.imag, 2));
	return abs;
}

complex add(complex a, complex b)
{
	complex sum = { 0.0, 0.0 };
	sum.real = a.real + b.real;
	sum.imag = a.imag + b.imag;
	return sum;
}

complex multiply(complex a, complex b)
{
	complex product = { 0.0, 0.0 };
	product.real = (a.real * b.real) - (a.imag * b.imag);
	product.imag = (a.real * b.imag) + (a.imag * b.real);

	return product;
}

complex divide(complex a, complex b)
{
	complex division = { 0.0,0.0 };
	complex conjZ2 = { b.real, -(b.imag) };
	complex num = multiply(a, conjZ2);
	double deno = pow(conjZ2.real, 2) + pow(conjZ2.imag, 2);
	//printf("%f", deno);
	division.real = (num.real) / deno;
	division.imag = (num.imag) / deno;

	return division;
}

double arguement(complex m)
{
	double angle = atan(m.imag / m.real);
	return angle;
}
