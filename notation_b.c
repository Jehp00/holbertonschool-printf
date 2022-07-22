#include "main.h"

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned in to print
 *
 * Return: number of digits printed
 */

int print_b(va_list b)
{
	unsigned int a, e, i, s;
	unsigned int f[32];
	int c;

	a = va_arg(b, unsigned int);
	e = 2147483648; /*2^ 31*/
	f[0] = a / e;
	for (i = 1; i < 32; i++)
	{
		e /= 2;
		f[i] = (a / e) % 2;
	}
	for (i = 0, s = 0, c = 0; i < 32; i++)
	{
		s += f[i];
		if (s || i == 31)
		{
			_putchar('0' + f[i]);
			c++;
		}
	}
	return (c);
}
