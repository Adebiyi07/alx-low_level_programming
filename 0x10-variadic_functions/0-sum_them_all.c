#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: number of paramters
 * @...: ellipses operator
 * Return: return 0 or sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumall;
	unsigned int i, sum = 0;

	va_start(sumall, n);
	for (i = 0; i < n; i++)
		sum += va_arg(sumall, int);
		va_end(sumall);

	return (sum);
}

