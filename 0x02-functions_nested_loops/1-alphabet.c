#include "main.h"

/**
 *main - prints the alphabet in lowercase
 *Return: 0
 */

void print_alphabet (void)
{
	int i;
	char alph[27] = "abcdefghijklmnopqrwstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
}

