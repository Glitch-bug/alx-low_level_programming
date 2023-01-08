#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i;

	for(i = strlen(s); i => 0; i--)
	{
		_putchar(s[i]);
	}
}
