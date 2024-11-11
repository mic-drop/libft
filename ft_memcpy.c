#include <unistd.h>

void *ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
    int i;
    char *src_ptr;
    char *dest_ptr;

    i = 0;
    src_ptr = (char *)src_str;
    dest_ptr = (char *)dest_str;

    while(i < n)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
    return (dest_ptr);
}