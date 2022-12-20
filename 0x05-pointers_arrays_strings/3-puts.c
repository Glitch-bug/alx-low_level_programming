#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_puts - Prints a string with a newline
 *@str: string to be printed
 *Return: void
 */

void _puts(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
