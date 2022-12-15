#include <stdio.h>

/**
 *print_sign - prints the sign of the number
 *@n: int input
 *Returns:1 if positive, 0 if 0 and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
