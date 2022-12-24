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
	int slen;
	int len;
	int i;

	len = strlen(src);
	slen = strlen(dest);
	for (i = 0; i < slen; i++)
	{
		*(dest + i) = '\0';
	}

	//dest = src;

	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
