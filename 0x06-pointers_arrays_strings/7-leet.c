#include "main.h"

/**
* *leet - check description
* @b : string input parameter
* Description: encodes a string into 1337.
* Return: pointer to the resulting string
*/
char *leet(char *b)
{
	int i = 0;
	int j;
	char s[] = {'a', 'e', 'o', 't', 'l'};
	char subs[] = {'4', '3', '0', '7', '1'};

	while (b[i])
	{
		for (j = 0; j < 5; j++)
			if (b[i] == s[j] || b[i] == (s[j] - 32))
				b[i] = subs[j];
		i++;
	}
	return (b);

}
