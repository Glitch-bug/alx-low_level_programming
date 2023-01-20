#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Write a program that creates and array of chars
 * and initializes it with a specific char.
 * @size: length of the array
 * @c: charater to initialize array with
 * Return: Null or pointer to charr array
 */


char *create_array(unsigned int size, char c)
{
	char *r = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		r[i] = c;
	}
	return (r);
}
