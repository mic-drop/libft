#include <unistd.h>

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
    int i;
    char *ptr_src;
    char *ptr_dest;

    i = 0;
    ptr_src = (char *)src_str;
    ptr_dest = (char *)dest_str;

    while(i < numBytes)
    {
        ptr_dest[i] = ptr_src[i];
        i++;
    }
    return (ptr_dest);
}