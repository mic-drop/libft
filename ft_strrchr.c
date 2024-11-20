/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/20 15:46:36 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	result = NULL;
	while (*str)
	{
		if (*str == (char)c)
			result = (char *)str;
		str++;
	}
	if (result != NULL)
		return (result);
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
