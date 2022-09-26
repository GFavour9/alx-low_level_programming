#include "main.h"
#include <stdio.h>

/**
  * _strchr - function copies n bytes from src to dest
  * @s: the string tp search through
  * @c: char to look for
  *
  * Return: the a pointer to the first occurrence of c
  */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
