#include "main.h"
#include <string.h>

/**
 *rev_string - prints a string out in reverse order
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i <= len; i++)
	{
		putchar(*s);
		s--;
	}
}
