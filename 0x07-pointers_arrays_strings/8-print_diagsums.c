#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int n;

	for (n = 0; n < size; n++)
	{
		sum1 += a[(size + 1) * n];
		sum2 += a[(size - 1) * (n + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
