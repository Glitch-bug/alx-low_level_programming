#include "main.h"
#include <string.h>
/**
 *print_rev - prints string in reverse
 *@s: string
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len > 0)
	{
		_putchar(s[len - 1]);
	}
	_putchar('\n');
}
