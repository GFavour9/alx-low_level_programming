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
	int d;
	int e;

	for (d = 0; d <= 98; d++)
	{
		for (e = d + 1; e <= 99; e++)
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');

			if (d == 98 && e == 99)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
