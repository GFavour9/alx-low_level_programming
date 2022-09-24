#include "main.h"

/**
* cap_string - check description
* @b : string input parameter
* Description: converts the first letter to uppercase
* Return: pointer to the resulting string
*/
char *cap_string(char *b)
{
	int i = 0;
	int j;
	char c[] = {' ', '\t', '\n', ',', ';', '.', '!',
				'\?', '\"', '(', ')', '{', '}'};

	while (b[i])
	{
		if (i == 0 && (b[i] >= 'a' && b[i] <= 'z'))
			b[i] -= 32;
		for (j = 0; j < 13; j++)
			if (b[i] == c[j] && (b[i + 1] >= 'a' && b[i + 1] <= 'z'))
				b[i + 1] -= 32;
		i++;
	}
	return (b);

}
