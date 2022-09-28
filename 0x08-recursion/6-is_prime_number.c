#include "main.h"
int divide(int n, int m);

/**
* is_prime_number - function to check for prime numbers
* @n: an input integer
* Return: 1 if n is prime or  0 in otherwise
*/
int is_prime_number(int n)
{
	int m = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (divide(n, m));
}

/**
* divide - check if n is divisible
* @n: the number to be checked
* @m: the result of division
* Return: 1 if num is divisible or 0 if num is not divisible
*/
int divide(int n, int m)
{
	if (n % m == 0)
		return (0);

	if (m == n / 2)
		return (1);

	return (divide(n, m + 1));
}
