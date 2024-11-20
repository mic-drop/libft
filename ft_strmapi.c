/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/20 15:49:41 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s_copy;

	s_copy = ft_strdup(s);
	if (!s_copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_copy[i] = f(i, s[i]);
		i++;
	}
	return (s_copy);
}
