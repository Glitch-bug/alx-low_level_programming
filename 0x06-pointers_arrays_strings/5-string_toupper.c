/**
 * char *cap_string -  capitalizes all words of a string.
 * @s: string
 * Returns: capitalized string
 */


char *cap_string(char *s)
{
	char *r = s;
	while (*s)
	{
		if (*s > 96 && *s < 123)
		{
			*s += 32;
		}
		s++;
	}
	return (r);
}
