#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter
 *@str: the string to be copied to the newly allocated memory
 *Return: return a pointer to string duplicate or NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(sizeof(char) * strlen(str));
	if (copy == NULL)
	{
		return (NULL);

	}

	for (; str[i]; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
