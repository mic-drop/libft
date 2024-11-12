#include <stdlib.h>

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

    index = 0;
    len = ft_intlen(n);

    if(n < 0)
        len++;
    str = malloc(sizeof(char) * (len + 1));
    str[len] = '\0';
    len--;
    if(n == 0)
        str[index] = '0';
    if(n < 0)
    {
        n = n * -1;
        str[index] = '-';
    }
    while(n > 0)
    {
        str[len] = (n % 10) + 48 ;
        n = n / 10;
        len--;
    }
    return str;

}