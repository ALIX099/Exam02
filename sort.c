void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    while (i < size - 1)
    {
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                int tmp ;
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        j = 0;
        i++;
    }
}