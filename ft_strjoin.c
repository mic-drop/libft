#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2){
    int final_size;
    int i;
    char *new_str;

    i = 0;
    final_size = (ft_strlen(s1) + ft_strlen(s2));
    new_str = malloc(final_size + 1);
    while (*s1)
    {
        new_str[i] = *s1;
        s1++;
        i++;
    }
    while (*s2)
    {
        new_str[i] = *s2;
        s2++;
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}