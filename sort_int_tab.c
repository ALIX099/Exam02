#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                int tmp;
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}
#include <stdio.h>

int main ()
{
    int i = 0;
    int tab[] = {2,1,6,3};
    unsigned int size = sizeof(tab) / 4;
    sort_int_tab(tab , size);
    while (i < size)
    {
        printf ("%d ",tab[i]);
        i++;
    }
}