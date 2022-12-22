#include "main.h"
#include <string.h>

/**
 *rev_string - prints a string out in reverse order
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int len;

	len = strlen(s);


	while(len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
}
