#include "main.h"

/**
 * print_i - prints integers
 * @i: int for print lenght
 *
 * Return: Number of ints printed
 */
int print_i(va_list i)
{
	int n = va_arg(i, int);
	int d, len;
	unsigned int num;

	d = 1;
	len = 0;
	num = n;
	if (n < 0)
	{
		putchar('-');
		len++;
		num = -n;
	}

	while (num / d > 9)
		d *= 10;
	while (d != 0)
	{
		putchar('0' + num / d);
		len++;
		num %= d;
		d /= 10;
	}
	return (len);
}
