0;10;1c0;10;1c#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase
 *Return: 0
 */

void print_alphabet(void)
{
	int i;
	char alph[27] = "abcdefghijklmnopqrwstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
