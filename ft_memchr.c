#include <unistd.h>

void *ft_memchr(const void *str, int c, size_t n)
{

    int i;
    char *ptr = (char *)str;

    for (i = 0; i < n; i++) {
        if (ptr[i] == c) {
            return (ptr + i);  // Return pointer to the found byte
        }
    }

    return NULL;  // Return NULL if the byte is not found within n bytes
}