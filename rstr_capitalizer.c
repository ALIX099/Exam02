#include <unistd.h>

int main (int ac , char **av)
{
	if (ac > 1)
	{
		int a = 1;
		int i = 0;
		while (a < ac)
		{
			while (av[a][i])
			{
				if (av[a][i] != ' ' && av[a][i] != '\t')
				{
					if (av[a][i + 1] == ' ' || av[a][i  + 1] == '\t' || !av[a][i + 1])
					{
						if (av[a][i] >= 'a' && av[a][i] <= 'z')
							av[a][i] -= 32;
					}
					else if (av[a][i] >= 'A' && av[a][i] <= 'Z')
						av[a][i] += 32;
				}
					write (1, &av[a][i], 1);
				i++;
			}
			i = 0;
			a++;
			write (1, "\n", 1);
		}
	}
}
