#include "main.h"
#include <stdio.h>


/**
 *_puts - Prints a string with a newline
 *@str: string to be printed
 *Return: void
 */

void _puts(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
