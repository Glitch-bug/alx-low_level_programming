#include <stddef.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: longer function that will be searched for a substring
 * @needle: the substring to be found
 * Return: a pointer to the begining of the substring or NULL
 */


char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int count;

	for (;count != 1;i++)
	{
		if (needle[j] == '\0')
		{
			return (&haystack[i - j]);
		}
		else if (needle[j] == haystack[i])
		{
			j++;
			continue;
		}
		else
		{
			j = 0;
		}
		if (haystack[i] == '\0')
			count = 1;
	}
	return (NULL);
}
