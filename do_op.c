#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int ac , char **av)
{
    if (ac == 4)
    {
        int first_el;
        char opera;
        int last_el;
        opera = av[2][0];
        first_el = atoi(av[1]);
        last_el = atoi(av[3]);
        int res;
        if (opera == '+')
            res = first_el + last_el;
        else if (opera == '-')
            res = first_el - last_el;
        else if (opera == '*')
            res = first_el * last_el;
        else if (opera == '/')
            res = first_el / last_el;
        else if (opera == '%')
            res = first_el % last_el;
        printf ("%d\n",res);
    }
    else
    write (1, "\n", 1);
}