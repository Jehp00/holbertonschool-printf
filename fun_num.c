#include "main.h"

/**
 * print_i - prints integers
 * @i: int for print lenght
 *
 * Return: Number of ints printed
 */
int print_i(va_list i)
{
	unsigned int deci, digi, natu;
	int n = va_arg(i, int);
	int count = 0;
	double f = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			natu = -n;
			count++;
		}
		else
			natu = n;
		while (f <= natu)
			f = f * 10;
		deci = f / 10;
		while (deci >= 1)
		{
			digi = natu / deci;
			_putchar(digi + '0'), count++;
			natu = (natu - (deci * digi));
			deci = deci / 10;
		}
	}
	return (count);
}
