#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - A program that adds positive numbers
* @argc: The arguments' counter
* @argv: The argument's values
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int n, sum = 0;
	int i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
