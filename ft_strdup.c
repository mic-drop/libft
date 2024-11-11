#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *string)
{
    char *ptr;
    int i;
    int lenght;

    lenght = ft_strlen(string);
    i = 0;
    ptr = malloc(sizeof(char) * lenght + 1);
    if(ptr == NULL)
        return NULL;
    while(i < lenght)
    {
        ptr[i] = string[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}
