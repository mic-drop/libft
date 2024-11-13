#include <unistd.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *s_copy;

    s_copy = ft_strdup(s);

    i = 0;

    while(s[i])
    {
        s_copy[i] = f(i, s[i]);
        i++;   
    }
    return s_copy;
}