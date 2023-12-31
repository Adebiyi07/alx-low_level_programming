#include "main.h"

/**
 * is_prime_number - returns 1 if prime
 * @n: number parameter
 * Return: returns 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - checks if n is prime
 * @n: number parameter
 * @i: increment parameter
 * Return: returns 1 or 0
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
