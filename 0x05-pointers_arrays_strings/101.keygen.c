#include <stdio.h>
#include <time.h>

int select(int min, int max);
char* main()
{
	char perm[] = {'L', 'U', 'S', 'N'};
	char state[] = {'L', 'U', 'S', 'N'};
	char pass[16];
	int c;
	int i;
	int length;


	srand(time(NULL));
	length = select(8, 15);
	pass[length] = '\0';
	for (i = 0; i < length; i++)
	{
		c = select(0, 3);
		if (perm[c] == state[c])
		{
			if (perm[c] == 'L')
			{
			} else if (perm[c] == 'U')
			{
				
				perm[c] = 'u';
			} else if (perm[c] == 'S')
			{
				perm[c] = 's';
			} else if (perm[c] = 'N')
			{
				perm[c] = 'n';
			}
		}
	}
	printf("fuck?");
        return "fuck";
}

int select(int min, int max)
{
        int r = 0;
	while (r < min)
	{
		r = rand(2) % max + 1;
	}
	return r;
}
