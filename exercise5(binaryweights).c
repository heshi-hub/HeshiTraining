#define _CRT_NO_SECURE_DEPRECATE
#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("Weights of binary digits:\n\n");

	for (int n = 0; n < 8; n++)
	{
		int weight = (int)pow(2,n);
		printf("2^%d = %3d\n", n, weight);
	}

	return 0;
}
