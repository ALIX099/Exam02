#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int count_digits(int n)
{
    int digits = 0;
    if (n == 0)
        digits = 1;
    while (n)
    {
        digits++;
        n = n / 10;
    }
    return (digits);
}

char *ft_itoa(int n)
{
    int len = 0;
    char *str;
    int sign = 0;

    if (n == INT_MIN)
        return (strdup("-2147483648"));
    if (n < 0)
    {
        sign = 1;
        n = -n;
        len++;
    }
    len += count_digits(n);
    str = (char *)malloc((len + 1));
    
    if (!str)
        return NULL;
    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    while (n)
    {
        str[--len] = (n % 10) + '0';
        n = n / 10;
    }
    if (sign)
        str[0] = '-';
    return str;
}
#include <stdio.h>
int main ()
{
    printf("%s",ft_itoa(5));
}