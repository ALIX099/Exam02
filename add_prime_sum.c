#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    long n = (nb);
    if (n >= 0 && n <= 9)
    {
        ft_putchar(n + '0');
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -1;
            i++;
        }
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
}

int is_prime(int n)
{
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return (1);
}

int main (int ac , char **av)
{
    if (ac == 2)
    {
        int i = 2;
        int n = ft_atoi(av[1]);
        int sum = 0;
        while (i <= n)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
        ft_putnbr(sum);
        write (1, "\n", 1);
    }
    else
    write (1, "0\n", 2);
}