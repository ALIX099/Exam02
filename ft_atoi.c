int	ft_atoi(const char *str)
{
    int res = 0;
    int i = 0;
    int mul = 1;
    while ((str[i] >= 9  && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        mul = mul * -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (mul * res);
}
