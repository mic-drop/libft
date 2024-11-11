#include <unistd.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *new_str;

    new_str = malloc(len + 1);
    if(new_str == NULL)
        return NULL;
    i = 0;
    while (i < len)
    {
        new_str[i] = s[start + i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);    
}