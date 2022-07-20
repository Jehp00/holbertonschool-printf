#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/*Prototypes*/

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);

/*Structures*/

/**
 * struct print - structure for print the specifiers
 * @a: type of print
 * @f: function
 */

typedef struct print
{
	char *a;
	int(*f)(va_list);
} print_t;

#endif /*MAIN:H*/
