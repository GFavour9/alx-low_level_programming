#include "main.h"
#include <stdio.h>

int _sqrt(int m, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: -1 If n does not have a natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - to get the sqrt
  * @m: number to calculate the square root
  * @i: iterate number
  *
  * Return: the sqrt
  */
int _sqrt(int m, int i)
{
	int sqrt = i * i;

	if (sqrt > m)
		return (-1);

	if (sqrt == m)
		return (i);

	return (_sqrt(m, i + 1));
}
