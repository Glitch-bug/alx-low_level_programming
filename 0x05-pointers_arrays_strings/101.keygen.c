#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int select_r(int, int);
char* main()
{
	char perm[] = {'L', 'U', 'S', 'N'};
	char state[] = {'L', 'U', 'S', 'N'};
	char pass[16];
	int c;
	int i;
	int length;

	srand(time(NULL));
	length = select_r(8, 15);
	pass[length] = '\0';
	for (i = 0; i < length;)
	{
		c = select_r(1, 4) - 1;
		printf("%d\n", c);
		if (perm[c] == state[c])
		{
			if (perm[c] == 'L')
			{
				pass[i] = select_r(97, 122);
			} else if (perm[c] == 'U')
			{
				pass[i] = select_r(65,90);
				perm[c] = 'u';
			} else if (perm[c] == 'S')
			{
				pass[i] = select_r(33,47);
				perm[c] = 's';
			} else if (perm[c] == 'N')
			{
				pass[i] = select_r(48,57);
				perm[c] = 'n';
			}
			i++;
		}
	}
	printf("%s",pass);
        return "fuck";
}

int select_r(int min, int max)
{
        int r = -1;
	while (r < min)
	{
		r = rand() % (max + 1);
	}
	return r;
}
