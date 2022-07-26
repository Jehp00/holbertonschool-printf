#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */
int _write(char ch)
{
	static char buf[1024];
	static int a;

	if (ch == -1 || a >= 1024)
	{
		write(1, &buf, 1);
		a = 0;
	}
	if (ch != -1)
	{
		buf[a] = ch;
		a++;
	}
	return (1);
}
