/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/19 12:05:06 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	count_strs(const char *s, char c)
{
	int	count;
	int	in_substr;

	count = 0;
	in_substr = 0;
	while (*s)
	{
		if (*s != c && !in_substr)
		{
			in_substr = 1;
			count++;
		}
		else if (*s == c)
		{
			in_substr = 0;
		}
		s++;
	}
	return (count);
}

static char	**free_arr_elements(char **result)
{
	int	i;

	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
	return (NULL);
}

static char	**get_strs(const char *s, char c, char **result)
{
	int	i;
	int	start;
	int	str_index;

	i = 0;
	start = 0;
	str_index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				start = i;
			while (s[i] && s[i] != c)
				i++;
			result[str_index] = ft_substr(s, start, i - start);
			if (!result[str_index])
				return (free_arr_elements(result));
			str_index++;
		}
		else
			i++;
	}
	result[str_index] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	result = malloc((count_strs(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	result = get_strs(s, c, result);
	return (result);
}
