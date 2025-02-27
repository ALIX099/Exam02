#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int check = 0;
    while (s[i])
    {
        while (accept[j])
        {
            if (s[i] == accept[j])
            {
                check = 1;
                break;
            }
            j++;
        }
        if (check == 0)
            return i;
        i++;
    }
    return i;
}
