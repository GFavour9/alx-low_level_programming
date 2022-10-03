#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: NULL if size = 0 else a pointer or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (; n < size; n++)
	{
		a[n] = c;
	}
	return (a);
}
