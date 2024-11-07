#include <unistd.h>
#include "libft.h"

char    *ft_strnstr(const char *s, const char *find, size_t slen)
{
    int i;
    int j;
    int find_len;
    
    i = 0;
    j = 0;
    if(find == NULL)
        return NULL;

    find_len = ft_strlen(find);
    if(find_len == 0)
        return (char *)s;

    while(i < slen)
    {
            while(j < find_len && s[i + j] == find[j])
            {
                j++;
            }
            if(j == find_len)
                return (char *)s + i;
            j = 0;

        i++;
    }
    return NULL;
}