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
    char *temp_str;

    i = 0;
    start = 0;
    str_index = 0;
    str_count = 0;

    while(s[i])
    {
        if (s[i] == c && i > 0 && i < ft_strlen(s))
            str_count++;
        i++;
    }
    str_count++;
    printf("This is count %d\n", str_count);
    str_count++;
    new_arr = malloc((str_count + 1) * sizeof(char*));
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