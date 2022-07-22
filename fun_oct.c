#include "main.h"

/**
 * print_o - prints integers
 * @o: int for print lenght
 *
 * Return: Number of ints printed
 */
int print_o(va_list o)
{
	long int n = va_arg(o, long int), q = 1, w;
	long quot;
	int octaln[100];

	quot = n;
	if (quot = 0)
	{
		_putchar('0');
		_putchar('0');
		return(2);
	}
	while (quot != 0)
	{
		octaln[q++] = quot % 8;
		quot = quot / 8;
	}
	for (w = q - 1; w > 0; w--)
	{
		_putchar(octaln[w] + '0');
	}
	return(q - 1);
}
