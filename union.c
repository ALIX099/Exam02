#include <unistd.h>

int main (int ac ,char **av)
{
    if (ac == 3)
    {
        int a = 1;
        int i = 0;
        static int array[255];
        while (a < ac)
        {
            while (av[a][i])
            {
                if (array[(int) av[a][i]] == 0)
                {
                    array[(int) av[a][i]] = 1;
                    write (1, &av[a][i], 1);
                }
                i++;
            }
            i = 0;
            a++;
        }
    }
    write (1, "\n", 1);
}
//union function