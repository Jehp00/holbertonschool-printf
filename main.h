#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/*Prototypes*/

int _putchar(char c);
int _printf(const char *format, ...);


/*Structures*/


typedef struct print
{
	char *a;
	int(*f)(va_list);
} print_t;

#endif /*MAIN:H*/
