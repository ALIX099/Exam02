#include <stdlib.h>
#include <stdio.h>

# define MAX_WORDS 1000
# define MAX_CHARS 1000

char **ft_split(char *str)
{
    char **array;
    int i = 0;
    int j = 0;
    int a = 0;
    array = (char **)malloc(sizeof(char *) * (MAX_WORDS + 1));
    if (!array)
        return (NULL);
    while (str[i] && str[i] <= 32)
        i++;
    while (str[i])
    {
        array[a] = (char *)malloc(MAX_CHARS + 1);
        while (str[i] && str[i] > 32)
            array[a][j++] = str[i++];
        array[a][j] = '\0';
        j = 0;
        a++;
        while (str[i] && str[i] <= 32)
            i++;
    }
    array[a] = NULL;
    return (array);
}