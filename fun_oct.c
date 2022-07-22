#include "main.h"

/**
 * print_o - prints integers
 * @o: int for print lenght
 *
 * Return: Number of ints printed
 */
int print_o(va_list o)
{

	unsigned int num, a = 0, i = 0;
	int tab[100];

	num = va_arg(o, int);
	if (num < 9)
	{
		putchar(num + '0');
		a = 1;
	}
	else if (num >= 9)
	{
		while (num > 0)
		{
			tab[i] = num % 8;
			num /= 8;
			i++;
		}
	}
	while (i--)
	{
		putchar(tab[i] + '0');
		a++;
	}
	return (a);
}
