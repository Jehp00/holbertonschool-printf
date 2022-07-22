#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
int (*check_specifiers(const char *format))(va_list)
{
	unsigned int a;
	print_t ar[] = {
	{"c", print_c},
	{"s", print_s},
	{"i", print_i},
	{"d", print_i},
	{"b", print_b},
	{"o", print_o},
	{NULL, NULL}
	};

	for (a = 0; ar[a].a != NULL; a++)
	{
		if (*(ar[a].a) == *format)
		{
			break;
		}
	}
	return (ar[a].f);
}

/**
 * _printf - prints the chars
 * @format: list of arguments
 *
 * Return: chars printed
 */

int _printf(const char *format, ...)
{
	unsigned int a = 0, b = 0;
	va_list list_spe;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(list_spe, format);
	while (format[a])
	{
		for (; format[a] != '%' && format[a]; a++)
		{
			_putchar(format[a]);
			b++;
		}

		if (!format[a])
		{
			return (b);
		}

		f = check_specifiers(&format[a + 1]);
		if (f != NULL)
		{
			b += f(list_spe);
			a += 2;
			continue;
		}

		if (!format[a + 1])
			return (-1);
		_putchar(format[a]);
		b++;
		if (format[a + 1] == '%')
			a += 2;
		else
			a++;
	}
	va_end(list_spe);
	return (b);
}
