#include <stdio.h>

/**
 *_isalpha - checks if input is a alphabet
 *@c: integer value of input to be checked
 *Return: 1 if alphabet or 0 if not
 */

int _islower(int c)
{
	int i;
	char alph[27] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		if (c == (int) alph[i])
		{
			return (1);
		}
	}
	return (0);
}
