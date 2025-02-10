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

#include <stdio.h>
#include <string.h>

int main() {
    const char *s = "123abc";
    const char *charset = "1234567890";

    size_t length = strspn(s, charset);
    printf("Length of initial segment: %zu\n", length);
    return 0;
}