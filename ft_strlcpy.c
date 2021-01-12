/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:28:18 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/17 01:00:53 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (dstsize != 0 && i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	if (i < dstsize)
		dst[i] = 0;
	while (src[i])
		++i;
	return (i);
}
