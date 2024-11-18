/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/14 16:37:48 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;
	int					result;

	ptr_s1 = (const unsigned char *)str1;
	ptr_s2 = (const unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (!(ptr_s1[i] == ptr_s2[i]))
		{
			result = ptr_s1[i] - ptr_s2[i];
			return (result);
		}
		i++;
	}
	return (0);
}
