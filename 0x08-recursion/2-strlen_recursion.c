#include "main.h"

/**
  * _strlen_recursion - Print a string in reverse
  * @s: a function that returns the length of a string
  *
  * Return: an integer value.
  */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);

}
