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
	int f;

	for (d = '0'; d <= '7'; d++)
	{
		for (e = d + 1; e <= '9'; e++)
		{
			for (f = e + 1; f <= '9'; f++)
			{
				if ((d != e) != f)
				{
					putchar(d);
					putchar(e);
					putchar(f);

					if (d == '7' && e == '8')
						continue;

					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
