#include "main.h"

/**
* print_square - check description
* @size: An int input parameter
* Description: it prints a square of #
* of n lines
* as specified by the user.
* Return: Nothing.
*/
void print_square(int size)
{
	int n;
	int l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
