#include <stddef.h>
/**
 * _strpbrk - Returns the first byte in @s that matches a byte in the
 * string @accept
 * @s: string of bytes that will be searched for a
 * character that can also be found in @accept
 * @accept: string of characters that can be accepted for matches
 * Return: NULL if nothing matches and pointer location to a match if it does
 */

char *_strpbrk(char *s, char *accept)
{
	char *hold = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = hold;
	}
	return (NULL);
}
