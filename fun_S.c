#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}

/**
 * print_S - prints string format
 * @S: string
 * Return: return value to counter
 */

int print_S(va_list S)
{
	unsigned int a;
	int quot = 0;
	char *string = va_arg(S, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (a = 0; string[a]; a++)
	{
		if (string[a] < 32 || string[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			quot += 2;
			quot += hex_print(string[a]);
		}
		else
		{
			_putchar(string[a]);
			quot++;
		}
	}
	return (quot);
}
