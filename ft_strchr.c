/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/20 15:46:56 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *str, int search_str)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (char)search_str)
		{
			ptr = (char *)str;
			return (ptr);
		}
		str++;
	}
	if ((char)search_str == '\0')
		return ((char *)str);
	return (NULL);
}
