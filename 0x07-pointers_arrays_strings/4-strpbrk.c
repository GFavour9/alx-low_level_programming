#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - locates the first occurrence of the string s
  * @s: the string tp search through
  * @accept: char to look for
  *
  * Return: the a pointer to the first occurrence of c
  */
char *_strpbrk(char *s, char *accept)
{
	char *first = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = first;
		s++;
	}

	return (NULL);
}
