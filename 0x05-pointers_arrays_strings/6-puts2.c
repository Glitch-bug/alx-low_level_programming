#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts2 - Prints every other character in a string and then a newline
 *@str: string to be printed
 *Return: void
 */

void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
