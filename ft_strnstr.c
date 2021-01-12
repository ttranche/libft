/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:29:54 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/17 00:30:01 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (*needle == 0)
		return ((char *)(haystack));
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len && needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *)(haystack + i));
		}
		++i;
	}
	return (NULL);
}
