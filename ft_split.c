#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char const *s, char c)
{
    int i;
    int start;
    int str_count;
    int str_index;
    char **new_arr;

    i = 0;
    start = 0;
    str_index = 0;
    str_count = 0;

    while(s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            str_count++;
        i++;
    }
    new_arr = malloc((str_count + 1) * sizeof(char*));
    if(new_arr == NULL)
        return NULL;
    i = 0 ;

    while(s[i])
    {
        if(s[i] != c){
            start = i;
            while(s[i] && s[i] != c)
                i++;
            new_arr[str_index] = ft_substr(s,start, i - start);
            str_index++;
        }
        i++;
    }
    new_arr[str_index] = NULL;
    return new_arr;
}