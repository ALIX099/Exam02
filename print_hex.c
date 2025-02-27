#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void    print_hex(unsigned long n)
{
    char    *hexa;

        hexa = "0123456789abcdef";
    if (n >= 16)
        print_hex(n / 16);
    ft_putchar(hexa[n % 16]);
}

int main (int ac , char **av)
{
	if (ac == 2)
		print_hex(atoi(av[1]));
		
	write (1, "\n", 1);
}
