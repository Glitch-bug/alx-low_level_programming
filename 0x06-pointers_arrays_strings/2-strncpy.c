#include "main.h"

/**
 *_strncpy - works exactly like strncpy (man strncpy for more information)
 *@dest: destination that will hold copied string value
 *@src: source and superset of the copied string
 *@n: number of chars to be from @src
 *Return: pointer to @dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *start;
	int i;

	start = dest;
	for (i = 0; (i < n) && (*src); i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
