#include "main.h"

/**
* print_diagonal - check description
* @n: An int input parameter
* Description: it prints / number of lines
* as specified by the user.
* Return: Nothing.
*/
void print_diagonal(int n)
{
	int i;
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (l = 1; l < i; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

}
