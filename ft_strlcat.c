#include <stdio.h>
#include "libft.h"


size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    int i;
    size_t dest_size;
    size_t src_size;

    i = 0;
    dest_size = ft_strlen(dest);
    src_size = ft_strlen(src);
    if(sizeof(dest) < (dest_size + src_size))
        return (dest_size + src_size);

    while (i < src_size)
    {
        dest[dest_size + i] = src[i];
        i++;
    }
    return (dest_size + src_size);
}
