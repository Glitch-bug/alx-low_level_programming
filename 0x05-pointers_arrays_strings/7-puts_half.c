#include <string.h>
#include "main.h"

/**
 *puts_half - prints the last half of a string
 *@str: string to be halfed
 */

void puts_half(char *str)
{
	int len;
	int hlf;
	char *hlfer;

	len = strlen(str);

	if (len % 2 == 0)
	{
		hlf = len / 2;
	}
	else
	{
		hlf = (len + 1) / 2;
	}

	while (len >= hlf)
	{
		*hlfer = str[hlf];
		hlf++;
		hlfer++;
	}
	_puts(hlfer);
}
