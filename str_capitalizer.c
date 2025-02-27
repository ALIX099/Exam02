#include <unistd.h>

int main(int ac, char **av)
{
    int a, i;

    if (ac > 1)
    {
        a = 1;
        while (a < ac)
        {
            i = 0;
            while (av[a][i])
            {
                if (i == 0 || av[a][i - 1] == ' ' || av[a][i - 1] == '\t')
                {
                    if (av[a][i] >= 'a' && av[a][i] <= 'z')
                        av[a][i] -= 32;
                }
                else
                {
                    if (av[a][i] >= 'A' && av[a][i] <= 'Z')
                        av[a][i] += 32;
                }
                write(1, &av[a][i], 1);
                i++;
            }
            write(1, "\n", 1);
            a++;
        }
    }
    return 0;
}
