int get_value(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    return -1;
}

int ft_atoi_base(const char *str, int str_base)
{
    if (!str || str_base < 2 || str_base > 16)
        return 0;
    
    int sign = 1;
    int result = 0; 
    int value;
    
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    
    while (*str)
    {
        value = get_value(*str);
        if (value < 0 || value >= str_base)
            break;
        result = result * str_base + value;
        str++;
    }
    
    return result * sign;
}
