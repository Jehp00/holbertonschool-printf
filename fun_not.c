#include "main.h"

/**
 * print_o - prints integers
 * @o: int for print lenght
 *
 * Return: Number of ints printed
 */
int print_o(va_list o)
{
	unsigned int a, b, c, s;
	unsigned int quot;
	int octaln[11];

	c = va_arg(o, unsigned int);
	b = 1073741824; /*8^ 10*/
	octaln[0] = c / b;
	for (a = 1; a < 11; a++)
	{
		b /= 8;
		octaln[a] = (c / b) % 8;
	}
	for (a = 0, s = 0, quot = 0; a < 11; a++)
	{
		s += octaln[a];
		if (s || a == 10)
		{
			_putchar('0' + octaln[a]);
			quot++;
		}
	}
	return (quot);
}

/**
 * print_u - prints an unsigned in in decimal notation
 * @u: unsigned int to print
 *
 * Return: number of digits printed
 */

int print_u(va_list u)
{
	unsigned int a, b, c, s;
	unsigned int quot;
	int decin[10];

	c = va_arg(u, unsigned int);
	b = 1000000000; /*10^ 9*/
	decin[0] = c / b;
	for (a = 1; a < 10; a++)
	{
		b /= 10;
		decin[a] = (c / b) % 10;
	}
	for (a = 0, s = 0, quot = 0; a < 10; a++)
	{
		s += decin[a];
		if (s || a == 9)
		{
			_putchar('0' + decin[a]);
			quot++;
		}
	}
	return (quot);
}
