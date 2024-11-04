#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{
    int i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)str;
 
    while (ptr[i] != '\0' && i < n)
    {
        ptr[i] = c;
        i++;
    }

    
    return (str);
}