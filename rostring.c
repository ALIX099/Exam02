#include <unistd.h>

int main (int ac,char **av)
{
    if (ac > 1)
    {
        int i = 0;
        int j;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        j = i;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                write (1, &av[1][i++], 1);
            write (1, " ", 1);
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
        }
        while (av[1][j] && av[1][j] != ' ' && av[1][j] != '\t')
        {
            write (1, &av[1][j], 1);
            j++;
        }
    }
    write (1, "\n", 1);
}