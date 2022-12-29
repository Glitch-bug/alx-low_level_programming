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
	int i;
	int f;
	int m;
	int n;


	char hold[1000] = "";


	f = strlen(dest);
	m = strlen(src);
	n = f-1;
	for (i = 0; i < f; i++)
	{
		hold[i] = dest[i];
	}
	for (i = n; i <= (n)+(m); i++)
	{
		hold[i] = src[i- n];
	}
	dest = &hold;
	return (dest);
}
