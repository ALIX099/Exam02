#include <string.h>

char *strpbrk(const char *s, const char *charset)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        while (charset[j])
        {
            if (s[i] == charset[j])
                return(s[i]);
            j++;
        }
        j = 0;
        i++;
    }
    return (NULL);
}