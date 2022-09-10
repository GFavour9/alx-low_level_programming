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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (abs(n) % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, abs(n) % 10);
	}
	else if (abs(n) % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, abs(n) % 10);
	}
	else if (abs(n) % 10 < 6 && abs(n) % 10 != 0)
	{
		printf("Last digit of %d is %d", n, abs(n) % 10);
		printf(" and is less than 6 and not 0\n");

	}
	else if (abs(n) % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, abs(n) % 10);
	}
	return (0);
}
