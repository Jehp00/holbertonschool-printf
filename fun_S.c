#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
			quot += print_X(string[a]);
		}
		else
		{
			_putchar(string[a]);
			quot++;
		}
	}
	return (quot);
}
