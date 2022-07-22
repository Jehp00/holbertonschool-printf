#include "main.h"

/**
 * print_X - prints integers
 * @x: int for print lenght
 *
 * Return: Number of ints printed
 */

int print_X(va_list X)
{
	unsigned int n = va_arg(X, unsigned int);
	unsigned int a[1024];
	int i = 0, t = 0;
	char p;

	if (n < 1)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; n > 0; i++, t++)
	{
		a[t] = n % 16;
		n = n / 16;
		if (a[t] > 10)
			a[i] = a[t] + 7;
		else
			a[i] = a[t];
	}
	for (i = t - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (t);
}
