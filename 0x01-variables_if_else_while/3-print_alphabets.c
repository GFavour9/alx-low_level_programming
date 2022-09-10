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

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
		putchar(lowCase);
	for (lowCase = 'A'; lowCase <= 'Z'; lowCase++)
		putchar(lowCase);
	putchar('\n');

	return (0);
}
