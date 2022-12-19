#include <stdio.h>

/**
 *_isupper - checks if input is a uppercase alphabet
 *@c: integer value of input to be checked
 *Return: 1 if upper alphabet or 0 if not
 */

int _isupper(int c)
{
	int i;
	char alph[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		if (c == (int) alph[i])
		{
			return (1);
		}
	}
	return (0);
}
