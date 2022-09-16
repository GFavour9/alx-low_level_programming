#include "main.h"

/**
* print_triangle - check description
* @size: An int input parameter
* Description: it prints # as a triangle
* as specified by the user.
* Return: Nothing.
*/
void print_triangle(int size)
{
	int i;
	int l;
	int m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (l = 1; l <= (size - i); l++)
			{
				_putchar(' ');
			}
			for (m = 1; m <= i; m++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
