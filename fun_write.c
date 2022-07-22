#include "main.h"
#include <unistd.h>
/**
 * _buffer - writes the character c to stdout
 * using a local buffer of 1024 to call write
 * @ch: The character to print
 * Return: On success 1, -1 if on error
 */

int _buffer(char ch)
{
	static char buf[1024];
	static int a;

	if (ch == -1 || a >= 1024)
	{
		write(1, &buf, a);
		a = 0;
	}
	if (ch != -1)
	{
		buf[a] = ch;
		a++;
	}
	return (1);
}

/**
 * _print - prints a string to stdout
 * @string: pointer to the string to print
 * Return: number of chars written
 */

int _print(char *string)
{
	register int a;

	for (a = 0; string[a] != '\0'; a++)
	{
		_putchar(string[a]);
	}
	return (a);
}
