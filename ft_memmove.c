#include <unistd.h>
#include "libft.h"

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes){
    char *ptr_src;
    char *ptr_dest;
    int i;

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