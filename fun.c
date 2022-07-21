#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_c - prints char format
 * @c: character
 * Return: return value to counter
 */
int print_c(va_list c)
{
	char c_h;

	c_h = (char)va_arg(c, int);
	_putchar(c_h);
	return (1);
}

/**
 * print_s - prints string format
 * @s: string
 * Return: return value to counter
 */

int print_s(va_list s)
{
	unsigned int j;
	char *po;

	po = va_arg(s, char *);
	if (po == NULL)
		po = "(null)";
	for (j = 0; po[j] != '\0'; j++)
	{
		_putchar(po[j]);
	}
	return (j);
}
