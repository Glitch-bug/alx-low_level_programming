#include "main.h"
#include <string.h>

/**
 *_strcpy - copies the string from the source and posts its entirety to dest
 *@dest: string is copied to here
 *@src: string is copied from here
 *Return: the pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	dest = src;
	len = strlen(src);

	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
