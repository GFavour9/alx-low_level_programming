#include "main.h"

/**
* *_strncpy - check description
* @dest : string output parameter
* @src : string input parameter
* @n : int input parameter
* Description: to copy a string into another string
* Return: pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int Len = 0, i;
	char *ini = src;
	char *val = dest;


	while (*src)
	{
		Len++;
		src++;
	}
	Len++;

	if (n > Len)
		n = Len;

	src = ini;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	return (val);

}
