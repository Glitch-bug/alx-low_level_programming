#include <stdio.h>

/**
 *main - prints single digit base 10 numbers
 *Return: 0
 */

int main(void)
{
	int i;
	char letrs[11] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(letrs[i]);
	}
	putchar('\n');
	return (0);
}
