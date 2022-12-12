#include <stdio.h>

/**
 *main - prints the alphabet uppercase and lower case
 *Return: 0
 */

int main(void)
{
	char letrs[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < 52; i++)
	{
		putchar(letrs[i]);
	}
	putchar('\n');
}
