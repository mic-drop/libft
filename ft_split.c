/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/14 16:04:23 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_strs(const char *s, char c)
{
	int	str_count;
	int	i;

	str_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			str_count++;
		i++;
	}
	return (str_count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		str_index;
	char	**new_arr;

	i = 0;
	start = 0;
	str_index = 0;
	new_arr = malloc((count_strs(s, c) + 1) * sizeof(char *));
	if (new_arr == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			new_arr[str_index] = ft_substr(s, start, i - start);
			str_index++;
		}
		i++;
	}
	new_arr[str_index] = NULL;
	return (new_arr);
}
