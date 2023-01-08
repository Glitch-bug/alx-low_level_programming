/**
 * char *string_toupper -  capitalizes all words of a string.
 * @s: string
 * Return: capitalized string
 */


char *string_toupper(char *s)
{
	char *r = s;

	while (*s)
	{
		if (*s > 96 && *s < 123)
		{
			*s -= 32;
		}
		s++;
	}
	return (r);
}
