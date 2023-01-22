/**
 * _strspn - get the number of bytes in the initial segment of @s which consist
 *only of bytes from @accept
 *@s: the string that will be checked for letters from @accept
 *@accept: a string of the letters that will be accepted in @s
 *Return: number of matches
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int tru = 0;
	char *hold = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				tru = 1;
			}
			accept++;
		}
		accept = hold;
		if (tru == 0)
		{
			return (count);
		}
		else
		{
			count++;
			tru = 0;
		}
		s++;
	}
	return (count);
}
