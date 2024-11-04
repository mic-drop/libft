#include <unistd.h>

void ft_bzero(void *s, size_t n) //Since its a void *, I cannot change values directly 
{
    int i;
    i = 0;

    char *ptr;

    ptr = (char *)s;

    while(i < n)
    {
        ptr[i] = '\0';
        i++;
    };
}