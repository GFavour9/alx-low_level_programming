#include "main.h"
#include <stdio.h>

/**
  * _strstr - Returns the number of bytes
  * in the initial segment of s which consist only of bytes from accept
  * @haystack: the string tp search through
  * @needle: substring to look for
  *
  * Return: Returns a pointer to the beginning of the located substring,
  * or NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	char *firstS = needle;
	char *firstB = haystack;

	while (*haystack)
	{
		needle = firstS;
		firstB = haystack;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = firstB + 1;
	}

	return (NULL);
}
