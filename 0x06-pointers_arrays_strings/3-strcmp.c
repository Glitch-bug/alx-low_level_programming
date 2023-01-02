/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: difference between the two strings
 *negative if second string is bigger
 */


int _strcmp(char *s1, char *s2)
{
	int f_sum = 0;
	int s_sum = 0;

	while (*s1)
	{
		f_sum += *s1;
		s1++
	}

	while (*s2)
	{
		s_sum += *s2;
		s2++
	}

	return (f_sum - s_sum);
}
