#include "main.h"

/**
* *string_toupper - check description
* @j : string input parameter
* Description: converts a lowercase string to uppercase
* Return: pointer to the resulting string
*/
char *string_toupper(char *j)
{
	char *alp = j;

	while (*j)
	{
		if (*j >= 'a' && *j <= 'z')
			*j -= 32;
		j++;
	}
	return (alp);

}
