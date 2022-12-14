#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	char alph[27] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(alph[j]);
		}
		_putchar('\n');
	}
}
