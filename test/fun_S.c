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
        unsigned int j;
        char *po;

        po = va_arg(S, char *);
        if (po == NULL)
                po = "(null)";
        for (j = 0; po[j] != '\0'; j++)
        {
		if ((po[j] > 0 && po[j] < 32) || (po[j] >= 127))
		{
			_putchar(92);
			_putchar(120);
			if (po[j] <= 9)
			{
				_putchar('0');
				_putchar('0'+ po[j]);
			}
			if (po[j] < 16 && po[j] > 9)
			{
				_putchar('0');
				_putchar(55 + po[j]);
			}
			else
			{
				_putchar((po[j] / 16) + '0');
				if ((po[j] % 16) > 9)
					_putchar((po[j] % 16) + 'A');
				else
					_putchar((po[j] % 16) + '0');
			}
		}
		else
                _putchar(po[j]);
        }
        return (j);
}
