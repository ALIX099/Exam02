#include <unistd.h>

int main(int ac, char **av)
{
   if (ac == 3)
   {
    int i = 0;
    int j = 0;
    static int array[256];
    while (av[1][i])
    {
        if (array[(int) av[1][i]] == 0)
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    array[(int) av[1][i]] = 1;
                    write (1, &av[1][i], 1);
                    break;
                }
                j++;
            }
        }
        i++;
        j = 0;
    }
    write (1, "\n", 1);
   }
}
