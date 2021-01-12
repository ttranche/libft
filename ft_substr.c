/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:36:49 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/17 19:41:42 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (len > i)
		len = i;
	if (start > i)
		len = 0;
	if (!(mem = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem[i] = s[start + i];
		++i;
	}
	mem[i] = 0;
	return (mem);
}
