#include <stdlib.h>
#include "libft.h"

int ft_intlen(int n)
{
    int len;

    len = 0;
    if(n == 0)
        return 1;
    if(n < 0)
        n = n * -1;
    while(n > 0)
    {
        n = n / 10;
        len++;
    }
    return len;
}


char *ft_itoa(int n)
{
    int len;
    char *str;
    int index;
    unsigned int numb;

    index = 0;
    len = ft_intlen(n);

    if(n < 0)
        len++;
    str = malloc(sizeof(char) * (len + 1));
    str[len] = '\0';
    len--;
    if(n == 0)
    {
        str[index] = '0';
        return str;
    }
    if(n < 0)
    {
        numb = -n;
        str[index] = '-';
        if(numb == 2147483648)
        {
            ft_memmove(str+1, "2147483648", 10);
            return str;
        }
    } else {
        numb = n;
    }
    while(numb > 0)
    {
        str[len] = (numb % 10) + 48 ;
        numb = numb / 10;
        len--;
    }
    return str;
}