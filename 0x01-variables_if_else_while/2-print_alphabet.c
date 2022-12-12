#include <stdio.h>

/**
 *main - prints the alphabet uppercase and lower case
 *Return: 0
 */

int main(void)
{
	int i;
	char letrs[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(letrs[i]);
	}
	putchar('\n');
}
