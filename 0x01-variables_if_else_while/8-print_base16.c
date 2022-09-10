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
	char lowCase;
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lowCase = 'a'; lowCase <= 'f'; lowCase++)
		putchar(lowCase);
	putchar('\n');

	return (0);
}
