#include "libft.h"

int get_digit(char c)
{
    return (c - 48);
}

int ft_atoi(const char *str)
{
    int i;
    int nb;
    int neg;

    i = 0;
    nb = 0;
    neg = 1;
    while(str[i])
    {
        while(str[i] == ' ')
            i++;
        if(str[i] == '-' || str[i] == '+') {
            if(ft_isdigit(str[i + 1]) == 0){
                return 0;
            }
            if (str[i] == '-')
            {
                neg = -1;
            }
            i++;
        }
        while(str[i] >= '0' && str[i] <= '9')
        {
            nb = (10 * nb)  + get_digit(str[i]);
            i++;
            if(ft_isdigit(str[i]) == 0)
                return (neg * nb);
        }
        return (0);
    }
    return (0);
}