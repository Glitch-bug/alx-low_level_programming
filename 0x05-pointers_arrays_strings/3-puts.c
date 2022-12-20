#include "main.h"


/**
 *_puts - Prints a string with a newline
 *@str: string to be printed
 *Return: void
 */

void _puts(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
