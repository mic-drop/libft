/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/16 16:59:10 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;
	size_t	find_len;

	if (*find == '\0')
		return ((char *)s);
	find_len = ft_strlen(find);
	if (find_len > slen)
		return (NULL);
	i = 0;
	j = 0;
	while (i + find_len <= slen && s[i] != '\0')
	{
		j = 0;
		while ((s[i + j] == find[j] && j < find_len))
			j++;
		if (j == find_len)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
