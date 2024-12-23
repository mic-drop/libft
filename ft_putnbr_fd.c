/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:54 by mserra-p          #+#    #+#             */
/*   Updated: 2024/11/18 17:38:14 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	numb;
	int				i;
	char			s1[11];

	i = 0;
	if (n == 0)
		ft_putchar_fd(n + '0', fd);
	if (n < 0)
	{
		numb = -(unsigned int)n;
		ft_putchar_fd('-', fd);
	}
	else
		numb = (unsigned int)n;
	while (numb > 0)
	{
		s1[i++] = (numb % 10) + '0';
		numb = numb / 10;
	}
	while (--i >= 0)
		ft_putchar_fd(s1[i], fd);
}
