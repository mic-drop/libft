#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *ptr;
    size_t total_size;

    total_size = nitems * size;

    ptr = malloc(total_size);

    if(!ptr)
        return NULL;
    
    ft_memset(ptr, 0,total_size);

    return ptr;

}