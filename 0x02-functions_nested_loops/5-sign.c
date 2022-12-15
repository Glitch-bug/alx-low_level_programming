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
		return (1);
		putchar('+');
	}
	else if(n == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
