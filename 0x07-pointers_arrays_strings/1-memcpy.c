#include "main.h"

/**
  * _memcpy - function copies n bytes from src to dest
  * @src: memory area to copy from
  * @dest: memory area to copy to
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ret = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (ret);
}
