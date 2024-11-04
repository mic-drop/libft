#include <unistd.h>

size_t	ft_strlen(const char *src)
{
	int	size;

	size = 0;
	while (src[size])
		size++;
	return (size);
}
