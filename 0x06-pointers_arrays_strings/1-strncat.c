#include <string.h>
#include "main.h"

/**
 *_strncat - concactenates two strings
 *@dest: destination string
 *@src: additional string
 *@n: int deciding how much additional string to add
 *Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int f_count;
	int count;


	char hold[1000] = "";


	f_count = strlen(dest);
	count = f_count;
	for (i = 0; i < f_count; i++)
	{
		hold[i] = dest[i];
	}
	for (i = count; (i <= (count - 1 + n)) && (src[i - count]); i++)
	{
		hold[i] = src[i - count];
	}
	memcpy(dest, hold, strlen(hold));
	return (dest);
}
