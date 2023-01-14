/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of mem to allocate
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
	{
		return (98);
	}
	return (r);
}
