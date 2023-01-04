/**
 *_memcpy - copies @n bytes from @src to @dest
 *@dest: destination variable pointer
 *@src: source variable pointer
 *@n: number of bytes to copy
 *Return: pointer to @dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
