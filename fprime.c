#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int is_first;
        int n = atoi(av[1]);
        int i = 2;
        is_first = 1;
        while (n > 1)
        {
            if (n % i == 0)
            {
                if (!is_first)
                    printf ("*");
                printf ("%d",i);
                is_first = 0;
                n = n / i;
            }
            else
                i++;
        }
    }
    printf ("\n");
}
