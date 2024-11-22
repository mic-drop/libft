/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/22 16:20:03 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;
	int	spaces;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] && ft_isspace((unsigned char)str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	spaces = i;
	while (str[spaces] == '0')
		spaces++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i++] - '0');
		if (i - spaces > 10)
			return (-1);
	}
	return (neg * nb);
}
