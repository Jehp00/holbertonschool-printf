#include "main.h"

/**
 * print_o - prints integers
 * @o: int for print lenght
 *
 * Return: Number of ints printed
 */
int print_o(va_list o)
{
	unsigned int n = va_arg(o, int), q = 0, w;
	int quot;
	int octaln[100];

	quot = n;
	if (quot < 9)
	{
		_putchar(quot + '0');
		return(1);
	}
	while (quot > 0)
	{
		octaln[q] = quot % 8;
		quot = quot / 8;
		q++;
	}
	for (w = q; w > 0; w--)
	{
		_putchar((octaln[w]) + '0');
	}
	return(q);
}
