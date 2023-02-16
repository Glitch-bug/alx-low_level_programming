#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @c: string to be encoded
 * Return: leet encoded string pointer
 */

char *leet(char *c)
{
	int i;
	char *s;
	char list[] = {'a', 'e', 'o', 't', 'l'};
	int num_list[] = {52, 51, 48, 55, 49};

	s = c;
	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == list[i] || *c == (list[i] - 32))
				*c = num_list[i];
		}
		c++;
	}

	c = s;
	return (c);
}
