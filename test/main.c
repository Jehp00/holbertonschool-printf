#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Len:[%d]\n", len2);
	printf("Len:[%d]\n", len);
	_printf("Unsigned:[%%%%]\n");
	printf("Unsigned:[%%%%]\n");
       	_printf("Character:[%c]\n", 'o');
	printf("Character:[%c]\n", 'o');
	_printf("String:[%s]\n", "leroer");
	printf("String:[%s]\n", "leroer");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len2);
	printf("Len:[%d]\n", len);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
