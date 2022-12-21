#include <string.h>
#include "main.h"

/**
 *_strcat - concactenates two strings
 *@dest: destination string
 *@src: additional string
 *Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;
	int len;
	int i;

	ptr = dest;
	while (*ptr)
	{
		ptr++;
	}

	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	return (dest);

}
