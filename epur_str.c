#include <unistd.h>

int main (int ac , char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
		while (av[1][i])
		{
			if (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				write (1, &av[1][i], 1);
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				while (av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				i--;
				if (av[1][i + 1])
					write (1, " ", 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
