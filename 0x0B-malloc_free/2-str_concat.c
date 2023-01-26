#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concatenaties two strings
 *@s1: The first string
 *@s2: The second string
 *Return: NULL on failure and pointer to concatenated string on success
 */


char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	conc = malloc(strlen(s1) + strlen(s2) + 1);
	if (conc == NULL)
	{
		return (NULL);
	}

	for (;s1[i]; i++)
	{
		conc[i] = s1[i];
	}

	for (;s2[j]; j++)
	{
		conc[i+j] = s2[j];
	}
	conc[i + j] = '\0';
	return conc;
}
