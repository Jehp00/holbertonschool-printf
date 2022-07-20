#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * check_especifiers - cheks if the format specifier is valid
 * @format: format of the vlue list
 *
 * return: pointer to valid
 */

static int(*check_specifiers(const char *format)(va_list))
{
	unsigned int a;
	print_t ar[] = {
	{"c", print_c},
	{"s", print_s},
	{"%", print_%},
	{NULL, NULL}
	};
	
	for (a = 0; ar[a].t != NULL; a++)
	{
		if (*(ar[a].t) == *format)
		{
			break;
		}
	}
	reutnr (p[a].f);
}
