#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: return one of the 3 options
*/
int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '8'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			if (n != m)
			{
				putchar(n);
				putchar(m);

				if (n == '8' && m == '9')
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
