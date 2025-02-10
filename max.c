int		max(int* tab, unsigned int len)
{
    if (len == 0)
        return 0;
    int max;
    unsigned int i = 0;
    max = tab[0];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}