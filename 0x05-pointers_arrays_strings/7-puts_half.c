#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 *puts_half - prints the last half of a string
 *@str: string to be halfed
 */

void puts_half(char *str)
{
	int len;
	int hlf;
	int count;

	len = strlen(str);

	if (len % 2 == 0)
	{
		hlf = len / 2;
	}
	else
	{
		hlf = (len + 1) / 2;
	}
	count = 0;

	while (len >= hlf)
	{
		_putchar(*(str+hlf+count));
		len--;
		count++;
	}
	_putchar('\n');
}
