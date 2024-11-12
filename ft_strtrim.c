#include "libft.h"
#include <stdio.h>

int is_set(char c, const char *set)
{
    while (*set)
    {
        if(c==*set)
            return 1;
        set++;
    }
    return (0);
    
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;

    end = ft_strlen(s1);
    start = 0;

    if(!s1 || !set)
        return NULL;
    while(is_set(s1[start], set)){
        start++;
    }
    while (is_set(s1[end -1], set))
    {
        end--;
    }
    return (ft_substr(s1,  start, (ft_strlen(s1) - end + 1)));
}