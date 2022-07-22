#include "main.h"

/**
 * print_o - prints integers
 * @o: int for print lenght
 *
 * Return: Number of ints printed
 */
int print_o(va_list o)
{
	long n = va_arg(o, long), q = 1, w;
	long quot;
	int octaln[100];

	quot = n;
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
