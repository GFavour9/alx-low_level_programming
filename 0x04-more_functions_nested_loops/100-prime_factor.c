#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long n;
	unsigned long num = 612852475143;
	unsigned long value;

	for (n = 2; n <= num;)
	{
		if (num % n == 0)
		{
			num = num / n;
			value = n;
		}
		else
			n++;
	}
	printf("%lu\n", value);
	return (0);
}
