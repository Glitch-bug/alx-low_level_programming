#include <stddef.h>
/**
 *_strchr - returns a pointer to the first copy of the char @c in the str @s
 *@c: character being search for
 *@s: string being searched
 *Return: returns pointer to first find
 */


char *_strchr(char *s, char c)
{
	while(*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
