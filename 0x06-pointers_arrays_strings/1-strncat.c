#include "main.h"

/**
* *_strncat - check description
* @dest : string output parameter
* @src : string input parameter
* @n : int input parameter
* Description: concatenates two strings into one using n
* Return: pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int srcLen = 0, i;
	char *beg = src;
	char *val = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		srcLen++;
		src++;
	}

	if (n > srcLen)
		n = srcLen;

	src = beg;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	return (val);

}
