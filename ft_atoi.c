/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:30:37 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/16 22:32:37 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		negative;
	long	nbr;

	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
		*str == '\v' || *str == '\f' || *str == '\r')
		++str;
	if ((negative = 1) && (*str == '+' || *str == '-'))
	{
		negative = *str == '-' ? -1 : 1;
		++str;
	}
	--str;
	while (++str && ft_isdigit(*str))
		nbr = nbr * 10 + (*str - '0');
	return ((int)(nbr * negative));
}
