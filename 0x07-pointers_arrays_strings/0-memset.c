/**
 *_memset - fill memory with a single byte
 *@s: starting address of array to be filled
 *@b: constant byte
 *@n: number of bytes to be filled
 *Return: pointer s
*/


char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
