#include "main.h"
#include <unistd.h>
/**
 * _write - writes the character c to stdout
 * using a local buffer of 1024 to call write
 * @ch: The character to print
 * Return: On success 1, -1 if on error
 */

int _write(char ch)
{
	return (write(1, &ch, 1));
}
