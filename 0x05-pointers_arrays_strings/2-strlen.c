#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: the string
 *Return: integer string length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
