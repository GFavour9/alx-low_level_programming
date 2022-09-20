#include "main.h"
#include <stdio.h>

/**
* print_array - check description
* @a : array input parameter
* @n : int input parameter
* Description: prints the bottom half of array
* Return: nothing
*/
void print_array(int *a, int n)
{

	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');

}
