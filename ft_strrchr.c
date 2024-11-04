#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char *result;
	result = NULL;
	while (*str)
	{
		if (*str == c)
		{
			result =(char *) str;
		}
        str++;
	}
	return (result);
}